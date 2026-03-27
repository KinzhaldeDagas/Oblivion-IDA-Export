NiBSplineInterpolator *__thiscall sub_6E52A0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  int v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x2Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v3, 0, 0);
    *(_DWORD *)v4 = &NiBSplinePoint3Interpolator::`vftable';
    *(_DWORD *)(v4 + 0x28) = 0xFFFF;
  }
  else
  {
    v4 = 0;
  }
  sub_6ED2B0(this, v4, a2);
  *(float *)(v4 + 0x1C) = *(this + 7);
  *(float *)(v4 + 0x20) = *(this + 8);
  *(float *)(v4 + 0x24) = *(this + 9);
  *(float *)(v4 + 0x28) = *(this + 0xA);
  return (NiBSplineInterpolator *)v4;
}
