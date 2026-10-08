NiBSplineInterpolator *__thiscall sub_6E5E90(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  NiBSplineInterpolator *v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x34u); /*0x6e5eb7*/
  v4 = v3; /*0x6e5ebc*/
  if ( v3 ) /*0x6e5ecf*/
  {
    sub_6E5090(v3, 0, 0xFFFF, 0); /*0x6e5edc*/
    *(_DWORD *)v4 = &NiBSplineCompPoint3Interpolator::`vftable'; /*0x6e5ee1*/
    *((float *)v4 + 0xB) = flt_A7DEB4; /*0x6e5eed*/
    *((float *)v4 + 0xC) = flt_A7DEB4; /*0x6e5ef6*/
  }
  else
  {
    v4 = 0; /*0x6e5efb*/
  }
  sub_6E5130(this, v4, a2); /*0x6e5f0d*/
  *((float *)v4 + 0xB) = *(this + 0xB); /*0x6e5f15*/
  *((float *)v4 + 0xC) = *(this + 0xC); /*0x6e5f1d*/
  return v4; /*0x6e5f20*/
}
