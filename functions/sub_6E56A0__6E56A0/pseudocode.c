int __thiscall sub_6E56A0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  int v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x24u); /*0x6e56c7*/
  v4 = (int)v3; /*0x6e56cc*/
  if ( v3 ) /*0x6e56df*/
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v3, 0, 0); /*0x6e56e7*/
    *(_DWORD *)v4 = &NiBSplineFloatInterpolator::`vftable'; /*0x6e56ec*/
    *(_DWORD *)(v4 + 0x20) = 0xFFFF; /*0x6e56f2*/
  }
  else
  {
    v4 = 0; /*0x6e56fb*/
  }
  sub_6ED2B0(this, v4, a2); /*0x6e570d*/
  *(float *)(v4 + 0x1C) = *(this + 7); /*0x6e5715*/
  *(float *)(v4 + 0x20) = *(this + 8); /*0x6e571b*/
  return v4; /*0x6e5720*/
}
