NiBSplineInterpolator *__thiscall sub_6E4DB0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  NiBSplineInterpolator *v4; // ebx

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x48u);
  v4 = 0;
  if ( v3 )
    v4 = sub_6E4930(v3, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0);
  sub_6ED2B0(this, (int)v4, a2);
  qmemcpy((char *)v4 + 0x1C, this + 7, 0x2Cu);
  return v4;
}
