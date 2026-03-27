_BYTE *__thiscall sub_429950(_BYTE *this)
{
  *(this + 4) = 0x53;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraStartingWorldOrCell::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
