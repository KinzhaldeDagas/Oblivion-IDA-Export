_WORD *__thiscall sub_94DAE0(_WORD *this)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 0x15) = 4;
  *((_DWORD *)this + 0x14) = 0;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x3F800000;
  *((_DWORD *)this + 9) = 0x3F800000;
  *((_DWORD *)this + 0xE) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_AA2C2C;
  *((_DWORD *)this + 0x20) = 0;
  *((_DWORD *)this + 0x21) = 0;
  *((_DWORD *)this + 0x22) = 0;
  *((_OWORD *)this + 6) = 0;
  *((_OWORD *)this + 7) = 0;
  return this;
}
