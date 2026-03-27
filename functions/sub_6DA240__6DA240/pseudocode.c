float *__thiscall sub_6DA240(float *this, int a2, int a3, int a4)
{
  sub_6EC220(this);
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *(_DWORD *)this = &NiPoint3Interpolator::`vftable';
  *((_DWORD *)this + 5) = a4;
  *(this + 6) = 0.0;
  *(this + 7) = 0.0;
  return this;
}
