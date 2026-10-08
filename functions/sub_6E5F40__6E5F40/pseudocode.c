float *sub_6E5F40()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x34u); /*0x6e5f69*/
  result = 0; /*0x6e5f72*/
  if ( v0 ) /*0x6e5f7a*/
  {
    sub_6E5090((NiBSplineInterpolator *)v0, 0, 0xFFFF, 0); /*0x6e5f85*/
    *(_DWORD *)v0 = &NiBSplineCompPoint3Interpolator::`vftable'; /*0x6e5f8a*/
    v0[0xB] = flt_A7DEB4; /*0x6e5f96*/
    v0[0xC] = flt_A7DEB4; /*0x6e5fa1*/
    return v0; /*0x6e5f99*/
  }
  return result; /*0x6e5fa4*/
}
