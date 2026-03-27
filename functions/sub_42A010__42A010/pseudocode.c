_BYTE *__thiscall sub_42A010(_BYTE *this)
{
  *(this + 4) = 0x50;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &ExtraBoundArmor::`vftable';
  return this;
}
