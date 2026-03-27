float *__thiscall sub_89DC10(float *this, _OWORD *a2, float *a3)
{
  *((_WORD *)this + 3) = 1;
  *(this + 2) = 0.0;
  *(_DWORD *)this = &off_A96F78;
  *((_OWORD *)this + 0xD) = 0;
  *((_OWORD *)this + 0xE) = 0;
  sub_8E7B20(this + 4, a2, a3);
  *(this + 0x32) = 0.0;
  *(this + 0x33) = 0.0;
  return this;
}
