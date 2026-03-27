float *__thiscall sub_533C40(float *this, float a2, int a3)
{
  double v4; // st7

  v4 = flt_A5613C;
  *(_DWORD *)this = &hkAllCdPointCollector::`vftable';
  *((_DWORD *)this + 4) = this + 8;
  *((_DWORD *)this + 6) = 0x80000008;
  *(this + 1) = v4;
  *(this + 5) = 0.0;
  *(this + 0x68) = 0.0;
  sub_533A00((bhkRefObject **)this, a2, a3);
  return this;
}
