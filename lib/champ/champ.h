#ifndef __CHAMP_H_INC
#define __CHAMP_H_INC

enum NoteType
{
  Whole = 1,
  Half = 2,
  Quarter = 4,
  Eighth = 8,
  Sixteenth = 16
};


struct note
{
  unsigned int frequency;
  NoteType type;
};

namespace john
{
  // A4, B4, F4, and G4
  enum Note
  {
    A = 440,
    B = 494,
    F = 349,
    G = 392,
    REST = 0
  };

  const note cena[] =
  {
    {REST, Eighth},
    {B, Eighth},
    {A, Sixteenth},
    {F, Sixteenth},
    {REST, Sixteenth},
    {G, Half},
    {REST, Sixteenth},
    {REST, Eighth},
    {G, Eighth},
    {A, Sixteenth},
    {F, Sixteenth},
    {REST, Sixteenth},
    {G, Half}
  };
}

#endif
