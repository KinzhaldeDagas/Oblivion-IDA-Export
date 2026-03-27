_BYTE *__thiscall sub_429D30(_BYTE *this)
{
  *(this + 4) = 0x13;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraAction::`vftable';
  *(this + 0xC) = 1;
  *((_DWORD *)this + 4) = 0;
  return this;
}
