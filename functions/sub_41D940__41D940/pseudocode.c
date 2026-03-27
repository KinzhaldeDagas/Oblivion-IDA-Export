_BYTE *__thiscall sub_41D940(_BYTE *this, int a2)
{
  *(this + 4) = 8;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraRegionList::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
