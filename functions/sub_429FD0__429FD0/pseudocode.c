_BYTE *__thiscall sub_429FD0(_BYTE *this)
{
  *(this + 4) = 0x25;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraGhost::`vftable';
  return this;
}
