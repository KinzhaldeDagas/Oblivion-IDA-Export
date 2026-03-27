_WORD *__thiscall sub_94D710(_WORD *this, _OWORD *a2, _OWORD *a3, _OWORD *a4, _OWORD *a5)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 7;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x3F800000;
  *((_DWORD *)this + 9) = 0x3F800000;
  *((_DWORD *)this + 0xE) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_AA2C14;
  *((_OWORD *)this + 6) = *a2;
  *((_OWORD *)this + 7) = *a4;
  *((_OWORD *)this + 8) = *a3;
  *((_OWORD *)this + 9) = *a5;
  return this;
}
