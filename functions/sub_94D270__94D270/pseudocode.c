_WORD *__thiscall sub_94D270(_WORD *this)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 5;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x3F800000;
  *((_DWORD *)this + 9) = 0x3F800000;
  *((_DWORD *)this + 0xE) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_AA2C04;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0;
  *((_DWORD *)this + 0x27) = 0;
  *((_OWORD *)this + 6) = 0;
  *((_OWORD *)this + 8) = 0;
  *((_OWORD *)this + 7) = 0;
  return this;
}
