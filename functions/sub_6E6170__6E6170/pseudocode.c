int __thiscall sub_6E6170(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  int v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x2Cu);
  v4 = (int)v3;
  if ( v3 )
  {
    sub_6E5490(v3, 0, 0xFFFF, 0);
    *(_DWORD *)v4 = &NiBSplineCompFloatInterpolator::`vftable';
    *(float *)(v4 + 0x24) = flt_A7DEB4;
    *(float *)(v4 + 0x28) = flt_A7DEB4;
  }
  else
  {
    v4 = 0;
  }
  sub_6E5520(this, v4, a2);
  *(float *)(v4 + 0x24) = *(this + 9);
  *(float *)(v4 + 0x28) = *(this + 0xA);
  return v4;
}
