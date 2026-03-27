_WORD *__thiscall sub_911000(_WORD *this)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9CCB8;
  *((_DWORD *)this + 0x1C) = 0x3F800000;
  *((_DWORD *)this + 0x1D) = 0xBCCCCCCD;
  *((_DWORD *)this + 0x1E) = 0x3CCCCCCD;
  *((_DWORD *)this + 0x1F) = 0xBF060AA6;
  *((_DWORD *)this + 0x20) = 0x3F060AA6;
  *((_DWORD *)this + 0x21) = 0;
  *((_OWORD *)this + 1) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_OWORD *)this + 4) = 0;
  *((_OWORD *)this + 5) = 0;
  *((_OWORD *)this + 6) = 0;
  *((_BYTE *)this + 0xC) = 1;
  return this;
}
