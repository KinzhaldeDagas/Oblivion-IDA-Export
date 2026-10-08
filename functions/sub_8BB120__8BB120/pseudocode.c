_WORD *__thiscall sub_8BB120(_WORD *this, char *Filename)
{
  FILE *v3; // eax

  *(this + 3) = 1; /*0x8bb128*/
  *((_DWORD *)this + 2) = 0xFFFFFFFF; /*0x8bb12c*/
  *(_DWORD *)this = &off_A98274; /*0x8bb133*/
  *((_BYTE *)this + 0x10) = 1; /*0x8bb139*/
  v3 = fopen(Filename, "rb"); /*0x8bb146*/
  *((_DWORD *)this + 3) = v3; /*0x8bb150*/
  *((_BYTE *)this + 0x10) = v3 != 0; /*0x8bb156*/
  return this; /*0x8bb15b*/
}
