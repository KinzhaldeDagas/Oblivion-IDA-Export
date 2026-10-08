NiBSplineInterpolator *__thiscall sub_6E4DB0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  NiBSplineInterpolator *v4; // ebx

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x48u); /*0x6e4dd9*/
  v4 = 0; /*0x6e4de5*/
  if ( v3 ) /*0x6e4ded*/
    v4 = sub_6E4930(v3, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0); /*0x6e4e07*/
  sub_6ED2B0(this, (int)v4, a2); /*0x6e4e19*/
  qmemcpy((char *)v4 + 0x1C, this + 7, 0x2Cu); /*0x6e4e29*/
  return v4; /*0x6e4e3f*/
}
