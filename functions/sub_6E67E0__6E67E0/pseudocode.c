int sub_6E67E0()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x34u); /*0x6e6809*/
  result = 0; /*0x6e6812*/
  if ( v0 ) /*0x6e681a*/
  {
    NiBSplineInterpolator::NiBSplineInterpolator((NiBSplineInterpolator *)v0, 0, 0); /*0x6e6820*/
    *(_DWORD *)v0 = &NiBSplineColorInterpolator::`vftable'; /*0x6e6827*/
    *(float *)(v0 + 0x1C) = 0.0; /*0x6e682d*/
    *(float *)(v0 + 0x20) = 0.0; /*0x6e6830*/
    *(float *)(v0 + 0x24) = 0.0; /*0x6e6835*/
    *(float *)(v0 + 0x28) = 0.0; /*0x6e6838*/
    *(_DWORD *)(v0 + 0x2C) = 0xFFFF; /*0x6e683b*/
    return v0; /*0x6e6833*/
  }
  return result; /*0x6e6842*/
}
