#ifndef __CHAMP_H_INC
#define __CHAMP_H_INC

#include "music.h"

namespace champ
{
  namespace john
  {
    const unsigned int BPM = 82;

    // In the key of B flat
    enum Tone
    {
      B = 932,
      A = 880,
      G = 793,
      F = 698,
      REST = 0
    };

    // The Time Is Now.
    const Note _notes[] = {
      // Measure 1
      {REST, Eighth},
      {B, Sixteenth},
      {REST, Sixteenth},
      {A, Sixteenth},
      {F, Sixteenth},
      {REST, Sixteenth},
      {G, Half},
      {REST, Sixteenth},

      // Measure 2
      {REST, Eighth},
      {G, Sixteenth},
      {REST, Sixteenth},
      {A, Sixteenth},
      {F, Sixteenth},
      {REST, Sixteenth},
      {G, Half},
      {REST, Sixteenth}
    };

    const Sequence cena = Sequence(BPM, 4, _notes, 16);
  }
}

#endif
