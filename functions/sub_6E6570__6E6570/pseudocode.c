float *sub_6E6570()
{
  float *v0; // esi
  float *result; // eax

  v0 = (float *)FormHeapAlloc(0x3Cu); /*0x6e6599*/
  result = 0; /*0x6e65a2*/
  if ( v0 ) /*0x6e65aa*/
  {
    sub_6E66C0((NiBSplineInterpolator *)v0, 0, 0xFFFF, 0); /*0x6e65b5*/
    *(_DWORD *)v0 = &NiBSplineCompColorInterpolator::`vftable'; /*0x6e65ba*/
    v0[0xD] = flt_A7DEB4; /*0x6e65c6*/
    v0[0xE] = flt_A7DEB4; /*0x6e65d1*/
    return v0; /*0x6e65c9*/
  }
  return result; /*0x6e65d4*/
}
