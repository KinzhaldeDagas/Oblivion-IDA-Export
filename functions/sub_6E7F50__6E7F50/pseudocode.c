float *__thiscall sub_6E7F50(float *this, int a2)
{
  sub_6EC220(this);
  *(_DWORD *)this = &NiBoolInterpolator::`vftable';
  *((_BYTE *)this + 0xC) = byte_A7C6AC;
  *((_DWORD *)this + 4) = a2;
  if ( a2 )
    InterlockedIncrement((volatile LONG *)(a2 + 4));
  *(this + 5) = 0.0;
  return this;
}
