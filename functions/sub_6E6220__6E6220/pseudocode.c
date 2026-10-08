float *sub_6E6220()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x2Cu); /*0x6e6249*/
  result = 0; /*0x6e6252*/
  if ( v0 ) /*0x6e625a*/
  {
    sub_6E5490((NiBSplineInterpolator *)v0, 0, 0xFFFF, 0); /*0x6e6265*/
    *(_DWORD *)v0 = &NiBSplineCompFloatInterpolator::`vftable'; /*0x6e626a*/
    v0[9] = flt_A7DEB4; /*0x6e6276*/
    v0[0xA] = flt_A7DEB4; /*0x6e6281*/
    return v0; /*0x6e6279*/
  }
  return result; /*0x6e6284*/
}
