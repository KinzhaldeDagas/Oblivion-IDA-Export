NiBSplineInterpolator *__thiscall sub_6E64C0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  NiBSplineInterpolator *v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x3Cu); /*0x6e64e7*/
  v4 = v3; /*0x6e64ec*/
  if ( v3 ) /*0x6e64ff*/
  {
    sub_6E66C0(v3, 0, 0xFFFF, 0); /*0x6e650c*/
    *(_DWORD *)v4 = &NiBSplineCompColorInterpolator::`vftable'; /*0x6e6511*/
    *((float *)v4 + 0xD) = flt_A7DEB4; /*0x6e651d*/
    *((float *)v4 + 0xE) = flt_A7DEB4; /*0x6e6526*/
  }
  else
  {
    v4 = 0; /*0x6e652b*/
  }
  sub_6E67A0(this, v4, a2); /*0x6e653d*/
  *((float *)v4 + 0xD) = *(this + 0xD); /*0x6e6545*/
  *((float *)v4 + 0xE) = *(this + 0xE); /*0x6e654d*/
  return v4; /*0x6e6550*/
}
