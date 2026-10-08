NiBSplineInterpolator *sub_6E5BF0()
{
  NiBSplineInterpolator *v0; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x60u); /*0x6e5c13*/
  if ( v0 ) /*0x6e5c29*/
    return sub_6E5920(v0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0); /*0x6e5c40*/
  else
    return 0; /*0x6e5c55*/
}
