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
  // In the key of B flat
  enum Note
  {
    B = 932, //B = 466,
    A = 880, //A = 440,
    G = 793, //G = 392,
    F = 698, //F = 349,
    REST = 0
  };

  const note cena[] =
  {
    // Bar 1
    {REST, Eighth},
    {B, Sixteenth},
    {REST, Sixteenth},
    {A, Sixteenth},
    {F, Sixteenth},
    {REST, Sixteenth},
    {G, Half},
    {REST, Sixteenth},

    // Bar 2
    {REST, Eighth},
    {G, Sixteenth},
    {REST, Sixteenth},
    {A, Sixteenth},
    {F, Sixteenth},
    {REST, Sixteenth},
    {G, Half},
    {REST, Sixteenth}
  };
}

#endif
