float *sub_6E6220()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x2Cu);
  result = 0;
  if ( v0 )
  {
    sub_6E5490((NiBSplineInterpolator *)v0, 0, 0xFFFF, 0);
    *(_DWORD *)v0 = &NiBSplineCompFloatInterpolator::`vftable';
    v0[9] = flt_A7DEB4;
    v0[0xA] = flt_A7DEB4;
    return v0;
  }
  return result;
}
