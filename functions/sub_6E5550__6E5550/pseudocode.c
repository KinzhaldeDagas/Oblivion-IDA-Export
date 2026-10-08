NiBSplineInterpolator *sub_6E5550()
{
  NiBSplineInterpolator *v0; // esi
  NiBSplineInterpolator *result; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x24u); /*0x6e5579*/
  result = 0; /*0x6e5582*/
  if ( v0 ) /*0x6e558a*/
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v0, 0, 0); /*0x6e5590*/
    *(_DWORD *)v0 = &NiBSplineFloatInterpolator::`vftable'; /*0x6e5595*/
    *((_DWORD *)v0 + 8) = 0xFFFF; /*0x6e559b*/
    return v0; /*0x6e55a2*/
  }
  return result; /*0x6e55a4*/
}
