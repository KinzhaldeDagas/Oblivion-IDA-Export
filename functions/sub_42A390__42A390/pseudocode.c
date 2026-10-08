_BYTE *__thiscall sub_42A390(_BYTE *this)
{
  *(this + 4) = 0x17; /*0x42a394*/
  *((_DWORD *)this + 2) = 0; /*0x42a398*/
  *(_DWORD *)this = &ExtraUsedMarkers::`vftable'; /*0x42a39b*/
  *((_DWORD *)this + 3) = 0; /*0x42a3a1*/
  return this; /*0x42a3a4*/
}
