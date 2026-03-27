NiBSplineInterpolator *__thiscall sub_6E5E90(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  NiBSplineInterpolator *v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x34u);
  v4 = v3;
  if ( v3 )
  {
    sub_6E5090(v3, 0, 0xFFFF, 0);
    *(_DWORD *)v4 = &NiBSplineCompPoint3Interpolator::`vftable';
    *((float *)v4 + 0xB) = flt_A7DEB4;
    *((float *)v4 + 0xC) = flt_A7DEB4;
  }
  else
  {
    v4 = 0;
  }
  sub_6E5130(this, v4, a2);
  *((float *)v4 + 0xB) = *(this + 0xB);
  *((float *)v4 + 0xC) = *(this + 0xC);
  return v4;
}
