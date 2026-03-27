float *__thiscall sub_6E3860(float *this, int a2)
{
  sub_6EC220(this);
  *(_DWORD *)this = &NiColorInterpolator::`vftable';
  *((_DWORD *)this + 3) = dword_B24FD4;
  *((_DWORD *)this + 4) = dword_B24FD8;
  *((_DWORD *)this + 5) = dword_B24FDC;
  *((_DWORD *)this + 6) = dword_B24FE0;
  *((_DWORD *)this + 7) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  *(this + 8) = 0.0;
  return this;
}
