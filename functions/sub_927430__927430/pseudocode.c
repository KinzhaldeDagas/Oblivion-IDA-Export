_WORD *__thiscall sub_927430(_WORD *this, int a2)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable';
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable';
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable';
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable';
  *((_DWORD *)this + 6) = &hkEntityListener::`vftable';
  *(_DWORD *)this = &off_AA18A4;
  *((_DWORD *)this + 2) = &off_AA18A0;
  *((_DWORD *)this + 3) = &off_AA1898;
  *((_DWORD *)this + 4) = &off_AA1890;
  *((_DWORD *)this + 5) = &off_A96B64;
  *((_DWORD *)this + 6) = off_AA187C;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0x80000000;
  return this;
}
