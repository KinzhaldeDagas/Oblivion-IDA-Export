float *sub_6E6570()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x3Cu);
  result = 0;
  if ( v0 )
  {
    sub_6E66C0((NiBSplineInterpolator *)v0, 0, 0xFFFF, 0);
    *(_DWORD *)v0 = &NiBSplineCompColorInterpolator::`vftable';
    v0[0xD] = flt_A7DEB4;
    v0[0xE] = flt_A7DEB4;
    return v0;
  }
  return result;
}
