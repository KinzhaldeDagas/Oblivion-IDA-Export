_WORD *__thiscall sub_8F4080(_WORD *this, _OWORD *a2, _OWORD *a3, int a4, int a5, int a6)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 8;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x3F800000;
  *((_DWORD *)this + 9) = 0x3F800000;
  *((_DWORD *)this + 0xE) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *((_DWORD *)this + 0x21) = a5;
  *((_DWORD *)this + 0x22) = a6;
  *(_DWORD *)this = &off_A9B304;
  *((_OWORD *)this + 6) = *a2;
  *((_OWORD *)this + 7) = *a3;
  *((_DWORD *)this + 0x20) = a4;
  return this;
}
