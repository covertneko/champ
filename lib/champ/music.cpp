#include "music.h"

namespace champ
{
  Sequence::Sequence(
      unsigned int beatsPerMinute,
      unsigned int beatsPerMeasure,
      const Note* notes,
      unsigned int noteCount) :
    beatsPerMinute(beatsPerMinute),
    // Beats per measure * (1 minute / beats per minute)
    measureLength(beatsPerMeasure * (60000 / beatsPerMinute)),
    notes(notes),
    noteCount(noteCount)
  {}


  unsigned int Sequence::getTiming(NoteType noteType) const
  {
    switch(noteType)
    {
      case Whole:
        return measureLength;
      case Half:
        return measureLength/2;
      case Quarter:
        return measureLength/4;
      case Eighth:
        return measureLength/8;
      case Sixteenth:
        return measureLength/16;
    }
  }


  void playSequence(const unsigned int pin, const Sequence seq)
  {
    auto notes = seq.notes;

    for (unsigned int i = 0; i < seq.noteCount; ++i)
    {
      auto duration = seq.getTiming(notes[i].type);

      tone(pin, notes[i].frequency, duration);
      delay(duration);
      noTone(pin);
    }
  }
}
