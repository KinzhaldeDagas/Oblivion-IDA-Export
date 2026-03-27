float *__thiscall sub_6DA160(float *this, int a2)
{
  sub_6EC220(this);
  *(_DWORD *)this = &NiPoint3Interpolator::`vftable';
  *((_DWORD *)this + 3) = dword_B24FC8;
  *((_DWORD *)this + 4) = dword_B24FCC;
  *((_DWORD *)this + 5) = dword_B24FD0;
  *((_DWORD *)this + 6) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  *(this + 7) = 0.0;
  return this;
}
