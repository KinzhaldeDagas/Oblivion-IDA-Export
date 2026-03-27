_WORD *__thiscall sub_94CCB0(_WORD *this, int a2)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 0x15) = 6;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0x3F800000;
  *((_DWORD *)this + 9) = 0x3F800000;
  *((_DWORD *)this + 0xE) = 0x3F800000;
  *((_OWORD *)this + 4) = 0;
  *(_DWORD *)this = &off_AA2BEC;
  *((_DWORD *)this + 0x14) = a2;
  return this;
}
