int __thiscall sub_6E56A0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  int v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x24u);
  v4 = (int)v3;
  if ( v3 )
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v3, 0, 0);
    *(_DWORD *)v4 = &NiBSplineFloatInterpolator::`vftable';
    *(_DWORD *)(v4 + 0x20) = 0xFFFF;
  }
  else
  {
    v4 = 0;
  }
  sub_6ED2B0(this, v4, a2);
  *(float *)(v4 + 0x1C) = *(this + 7);
  *(float *)(v4 + 0x20) = *(this + 8);
  return v4;
}
