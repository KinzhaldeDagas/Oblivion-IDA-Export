_BYTE *__thiscall sub_42A840(_BYTE *this)
{
  *(this + 4) = 0x41;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraItemDropper::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
