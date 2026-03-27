float *__thiscall sub_6D2990(float *this, int a2)
{
  sub_6EC220(this);
  *(_DWORD *)this = &NiFloatInterpolator::`vftable';
  *(this + 3) = flt_A7C6B0;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  *(this + 5) = 0.0;
  return this;
}
