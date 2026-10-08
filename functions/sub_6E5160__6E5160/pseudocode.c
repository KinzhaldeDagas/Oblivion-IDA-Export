NiBSplineInterpolator *sub_6E5160()
{
  NiBSplineInterpolator *v0; // esi
  NiBSplineInterpolator *result; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x2Cu); /*0x6e5189*/
  result = 0; /*0x6e5192*/
  if ( v0 ) /*0x6e519a*/
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v0, 0, 0); /*0x6e51a0*/
    *(_DWORD *)v0 = &NiBSplinePoint3Interpolator::`vftable'; /*0x6e51a5*/
    *((_DWORD *)v0 + 0xA) = 0xFFFF; /*0x6e51ab*/
    return v0; /*0x6e51b2*/
  }
  return result; /*0x6e51b4*/
}
