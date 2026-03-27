float *__thiscall sub_6E38D0(float *this, int a2, int a3, int a4, int a5)
{
  sub_6EC220(this);
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = a5;
  *(_DWORD *)this = &NiColorInterpolator::`vftable';
  *(this + 7) = 0.0;
  *(this + 8) = 0.0;
  return this;
}
