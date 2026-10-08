_WORD *__thiscall sub_8BB2B0(_WORD *this, char *Filename)
{
  *(this + 3) = 1; /*0x8bb2b8*/
  *(_DWORD *)this = &off_A982A0; /*0x8bb2bc*/
  *((_BYTE *)this + 0xC) = 1; /*0x8bb2c2*/
  *((_DWORD *)this + 2) = fopen(Filename, "wb"); /*0x8bb2d4*/
  return this; /*0x8bb2dc*/
}
