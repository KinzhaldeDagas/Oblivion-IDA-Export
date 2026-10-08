int __thiscall sub_6E6170(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  int v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x2Cu); /*0x6e6197*/
  v4 = (int)v3; /*0x6e619c*/
  if ( v3 ) /*0x6e61af*/
  {
    sub_6E5490(v3, 0, 0xFFFF, 0); /*0x6e61bc*/
    *(_DWORD *)v4 = &NiBSplineCompFloatInterpolator::`vftable'; /*0x6e61c1*/
    *(float *)(v4 + 0x24) = flt_A7DEB4; /*0x6e61cd*/
    *(float *)(v4 + 0x28) = flt_A7DEB4; /*0x6e61d6*/
  }
  else
  {
    v4 = 0; /*0x6e61db*/
  }
  sub_6E5520(this, v4, a2); /*0x6e61ed*/
  *(float *)(v4 + 0x24) = *(this + 9); /*0x6e61f5*/
  *(float *)(v4 + 0x28) = *(this + 0xA); /*0x6e61fd*/
  return v4; /*0x6e6200*/
}
