_WORD *__thiscall sub_927430(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x927432*/
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable'; /*0x927438*/
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x92743f*/
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x927446*/
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable'; /*0x92744d*/
  *((_DWORD *)this + 6) = &hkEntityListener::`vftable'; /*0x927454*/
  *(_DWORD *)this = &off_AA18A4; /*0x92745b*/
  *((_DWORD *)this + 2) = &off_AA18A0; /*0x927461*/
  *((_DWORD *)this + 3) = &off_AA1898; /*0x927468*/
  *((_DWORD *)this + 4) = &off_AA1890; /*0x92746f*/
  *((_DWORD *)this + 5) = &off_A96B64; /*0x927476*/
  *((_DWORD *)this + 6) = off_AA187C; /*0x92747d*/
  *((_DWORD *)this + 7) = 0; /*0x927486*/
  *((_DWORD *)this + 8) = 0; /*0x927489*/
  *((_DWORD *)this + 9) = 0x80000000; /*0x92748c*/
  return this; /*0x927493*/
}
