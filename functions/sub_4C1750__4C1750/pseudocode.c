_WORD *__thiscall sub_4C1750(_WORD *this)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &hkMoppCode::`vftable';
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 0xA) = 0x80000000;
  *((_OWORD *)this + 1) = 0;
  return this;
}
