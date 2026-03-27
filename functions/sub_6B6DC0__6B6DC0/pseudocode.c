float *__thiscall sub_6B6DC0(float *this, int a2, int a3, int a4)
{
  *(this + 0x14) = 0.0;
  *(this + 0xB) = 0.0;
  *(this + 0x15) = 0.0;
  *(this + 0xC) = 0.0;
  *(this + 0x13) = 0.0;
  *(this + 0x10) = 0.0;
  *((_WORD *)this + 0xE) = 0;
  *((_WORD *)this + 0x22) = 0;
  *((_WORD *)this + 0x23) = 0;
  *((_BYTE *)this + 0x4A) = 0;
  *((_BYTE *)this + 0x4B) = 0;
  *(this + 0xD) = 0.0;
  *((_DWORD *)this + 3) = a3;
  *(_DWORD *)this = a4;
  *((_BYTE *)this + 0x10) = 0xFF;
  *((_BYTE *)this + 0x11) = 2;
  *(this + 0xE) = 0.0047237873;
  *((_WORD *)this + 0x24) = (int)(flt_B23C58 * fCostant_100);
  if ( (a4 & 0x4000) != 0 )
    ++dword_B3C20C;
  ++dword_B3C210;
  *(this + 0xF) = 1.0;
  return this;
}
