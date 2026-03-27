_DWORD *__thiscall sub_4A5FD0(_DWORD *this, char a2)
{
  *(this + 1) = 0;
  *(this + 2) = 0;
  *this = &TESRegionGrassObjectList::`vftable';
  *((_BYTE *)this + 0xC) = a2;
  *(this + 4) = 0;
  return this;
}
