#include <Arduino.h>
#include <champ.h>

const unsigned int BUTTON_PIN = 8;
const unsigned int BUZZER_PIN = 9;

int buttonState = 0;

const unsigned int BPM = 82;

// Measure length in milliseconds
// Beats per measure * (1 minute / beats per minute)
const unsigned int MEASURE_LENGTH = 4 * (60000 / BPM);

void playSequence(note const seq[], unsigned int noteCount)
{
  for (int i = 0; i < noteCount; ++i)
  {
    unsigned int duration = 0;

    switch(seq[i].type)
    {
      case Whole:
        duration = MEASURE_LENGTH;
        break;
      case Half:
        duration = MEASURE_LENGTH/2;
        break;
      case Quarter:
        duration = MEASURE_LENGTH/4;
        break;
      case Eighth:
        duration = MEASURE_LENGTH/8;
        break;
      case Sixteenth:
        duration = MEASURE_LENGTH/16;
        break;
    }

    tone(BUZZER_PIN, seq[i].frequency, duration);
    delay((int)(duration * 1.10));
    noTone(BUZZER_PIN);
  }
}

void setup()
{
  pinMode(BUTTON_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
}

void loop()
{
  buttonState = digitalRead(BUTTON_PIN);

  if (buttonState == HIGH)
  {
    playSequence(john::cena, 14);
  }
  else
  {
    // Do nothing.
  }
}
