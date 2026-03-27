float *sub_6E5F40()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x34u);
  result = 0;
  if ( v0 )
  {
    sub_6E5090((NiBSplineInterpolator *)v0, 0, 0xFFFF, 0);
    *(_DWORD *)v0 = &NiBSplineCompPoint3Interpolator::`vftable';
    v0[0xB] = flt_A7DEB4;
    v0[0xC] = flt_A7DEB4;
    return v0;
  }
  return result;
}
