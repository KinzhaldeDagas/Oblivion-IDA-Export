NiBSplineInterpolator *sub_6E4B60()
{
  NiBSplineInterpolator *v0; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x48u); /*0x6e4b83*/
  if ( v0 ) /*0x6e4b99*/
    return sub_6E4930(v0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0); /*0x6e4bb0*/
  else
    return 0; /*0x6e4bc5*/
}
