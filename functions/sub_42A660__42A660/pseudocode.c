_BYTE *__thiscall sub_42A660(_BYTE *this)
{
  *(this + 4) = 0x43;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraRandomTeleportMarker::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
