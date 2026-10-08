NiBSplineInterpolator *__thiscall sub_6E52A0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  int v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x2Cu); /*0x6e52c7*/
  v4 = (int)v3; /*0x6e52cc*/
  if ( v3 ) /*0x6e52df*/
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v3, 0, 0); /*0x6e52e7*/
    *(_DWORD *)v4 = &NiBSplinePoint3Interpolator::`vftable'; /*0x6e52ec*/
    *(_DWORD *)(v4 + 0x28) = 0xFFFF; /*0x6e52f2*/
  }
  else
  {
    v4 = 0; /*0x6e52fb*/
  }
  sub_6ED2B0(this, v4, a2); /*0x6e530d*/
  *(float *)(v4 + 0x1C) = *(this + 7); /*0x6e5315*/
  *(float *)(v4 + 0x20) = *(this + 8); /*0x6e531b*/
  *(float *)(v4 + 0x24) = *(this + 9); /*0x6e5321*/
  *(float *)(v4 + 0x28) = *(this + 0xA); /*0x6e5327*/
  return (NiBSplineInterpolator *)v4; /*0x6e532c*/
}
