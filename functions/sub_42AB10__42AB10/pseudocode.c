_BYTE *__thiscall sub_42AB10(_BYTE *this, int a2)
{
  *(this + 4) = 0x4F; /*0x42ab16*/
  *((_DWORD *)this + 2) = 0; /*0x42ab1a*/
  *(_DWORD *)this = &ExtraHeadingTarget::`vftable'; /*0x42ab21*/
  *((_DWORD *)this + 3) = a2; /*0x42ab27*/
  return this; /*0x42ab2a*/
}
