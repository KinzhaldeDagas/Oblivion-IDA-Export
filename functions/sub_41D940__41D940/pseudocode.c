_BYTE *__thiscall sub_41D940(_BYTE *this, int a2)
{
  *(this + 4) = 8; /*0x41d946*/
  *((_DWORD *)this + 2) = 0; /*0x41d94a*/
  *(_DWORD *)this = &ExtraRegionList::`vftable'; /*0x41d951*/
  *((_DWORD *)this + 3) = a2; /*0x41d957*/
  return this; /*0x41d95a*/
}
