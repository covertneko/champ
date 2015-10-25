#include <Arduino.h>
#include <champ.h>

using namespace champ;

const unsigned int BUTTON_PIN = 8;
const unsigned int BUZZER_PIN = 9;

int buttonState = 0;

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
    playSequence(BUZZER_PIN, john::cena);
  }
  else
  {
    // Do nothing.
  }
}
