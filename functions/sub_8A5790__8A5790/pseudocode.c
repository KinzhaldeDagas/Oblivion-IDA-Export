float *__thiscall sub_8A5790(float *this)
{
  *(this + 3) = 0.0;
  *(this + 4) = 0.0;
  *(this + 5) = -0.0;
  *this = 0.0;
  *(this + 1) = 0.0;
  *((_BYTE *)this + 8) = 1;
  *((_BYTE *)this + 0x18) = 1;
  *((_WORD *)this + 0xD) = 0xFFFF;
  sub_8DF420((_OWORD *)this + 2);
  *(this + 0x31) = flt_A5A04C;
  *((_BYTE *)this + 0xD3) = 0;
  *(this + 0x32) = flt_A97490;
  return this;
}
