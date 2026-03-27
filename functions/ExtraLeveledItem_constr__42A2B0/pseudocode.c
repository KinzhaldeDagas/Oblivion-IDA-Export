_BYTE *__thiscall ExtraLeveledItem_constr(_BYTE *this, int a2)
{
  *(this + 4) = 0x36;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraLeveledItem::`vftable';
  *((_DWORD *)this + 3) = a2;
  *(this + 0x10) = 1;
  return this;
}
