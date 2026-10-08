// TES4 authoritative: process vtable +0x2C4 movement flag helper. a3 true ORs bits into process+0x1FC; false clears them.
int __thiscall sub_631B90(int this, int a2, char a3)
{
  int result; // eax
  double v4; // st7

  result = a2; /*0x631b95*/
  if ( a3 ) /*0x631b99*/
  {
    if ( (a2 & 0x30) != 0 ) /*0x631b9d*/
    {
      if ( (LowProcess *)this == reference->super.super.super.process ) /*0x631ba8*/
        v4 = MEMORY[0xB36C00]; /*0x631baa*/
      else
        v4 = MEMORY[0xB36C08]; /*0x631bb2*/
      *(float *)(this + 0x1E0) = v4; /*0x631bba*/
      *(_BYTE *)(this + 0x1E4) = a2 & 0x30; /*0x631bc3*/
    }
    *(_WORD *)(this + 0x1FC) |= a2; /*0x631bc9*/
  }
  else
  {
    *(_WORD *)(this + 0x1FC) &= ~(_WORD)a2; /*0x631bd5*/
    return ~a2; /*0x631bd3*/
  }
  return result; /*0x631bd0*/
}
