_BYTE *__thiscall sub_42A390(_BYTE *this)
{
  *(this + 4) = 0x17;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraUsedMarkers::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
