_BYTE *__thiscall ExtraProcessMiddleLow_Constructor(_BYTE *this)
{
  *(this + 4) = 0xD;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraProcessMiddleLow::`vftable';
  *((_DWORD *)this + 3) = 0;
  return this;
}
