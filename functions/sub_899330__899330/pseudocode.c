_WORD *__thiscall sub_899330(_WORD *this)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = &hkCollidableCollidableFilter::`vftable';
  *((_DWORD *)this + 3) = &hkShapeCollectionFilter::`vftable';
  *((_DWORD *)this + 4) = &hkRayShapeCollectionFilter::`vftable';
  *((_DWORD *)this + 5) = &hkRayCollidableFilter::`vftable';
  *(_DWORD *)this = &off_A96B78;
  *((_DWORD *)this + 2) = &off_A96B64;
  *((_DWORD *)this + 3) = &off_A96B70;
  *((_DWORD *)this + 4) = &off_A96B68;
  *((_DWORD *)this + 5) = &off_A96B64;
  return this;
}
