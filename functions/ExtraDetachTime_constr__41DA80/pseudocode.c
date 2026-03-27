_BYTE *__thiscall ExtraDetachTime_constr(_BYTE *this)
{
  *(this + 4) = 0x10;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraDetachTime::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
