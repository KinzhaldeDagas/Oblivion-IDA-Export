_WORD *__thiscall sub_927B60(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x927b62*/
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable'; /*0x927b68*/
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable'; /*0x927b6f*/
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable'; /*0x927b76*/
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable'; /*0x927b7d*/
  *((_DWORD *)this + 6) = &hkEntityListener::`vftable'; /*0x927b84*/
  *(_DWORD *)this = &off_AA1908; /*0x927b8b*/
  *((_DWORD *)this + 2) = &off_AA1904; /*0x927b91*/
  *((_DWORD *)this + 3) = &off_AA18FC; /*0x927b98*/
  *((_DWORD *)this + 4) = &off_AA18F4; /*0x927b9f*/
  *((_DWORD *)this + 5) = &off_A96B64; /*0x927ba6*/
  *((_DWORD *)this + 6) = off_AA18E0; /*0x927bad*/
  *((_DWORD *)this + 7) = 0; /*0x927bb6*/
  *((_DWORD *)this + 8) = 0; /*0x927bb9*/
  *((_DWORD *)this + 9) = 0x80000000; /*0x927bbc*/
  return this; /*0x927bc3*/
}
