_BYTE *__thiscall sub_429E20(_BYTE *this, int a2)
{
  *(this + 4) = 0x28;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraGlobal::`vftable';
  *((_DWORD *)this + 3) = a2;
  return this;
}
