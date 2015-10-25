#ifndef __CHAMP_MUSIC_H_INC
#define __CHAMP_MUSIC_H_INC

#include <Arduino.h>

namespace champ
{
  enum NoteType
  {
    Whole = 1,
    Half = 2,
    Quarter = 4,
    Eighth = 8,
    Sixteenth = 16
  };

  struct Note
  {
    unsigned int frequency;
    NoteType type;
  };

  class Sequence
  {
  public:
    const unsigned int beatsPerMinute;

    // Measure length in milliseconds.
    const unsigned int measureLength;
    const Note* notes;
    const size_t noteCount;

    Sequence(
        unsigned int beatsPerMinute,
        unsigned int beatsPerMeasure,
        const Note* notes,
        unsigned int noteCount);

    unsigned int getTiming(NoteType noteType) const;
  };

  // Function to play a sequance of notes on a piezo buzzer.
  void playSequence(const unsigned int pin, const Sequence seq);
}

#endif
