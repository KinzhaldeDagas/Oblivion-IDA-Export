_DWORD *__thiscall sub_958590(_DWORD *this, _OWORD *a2, int a3, int a4)
{
  *(this + 0x14) = 0;
  *((_WORD *)this + 3) = 1;
  *(this + 0x15) = 1;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *(this + 4) = 0x3F800000;
  *(this + 9) = 0x3F800000;
  *(this + 0xE) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *this = &MobileObject::`vftable';
  *((_OWORD *)this + 6) = *a2;
  *(this + 0x1C) = a3;
  *(this + 0x1D) = a4;
  return this;
}
