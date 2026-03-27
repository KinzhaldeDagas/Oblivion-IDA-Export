NiBSplineInterpolator *sub_6E4B60()
{
  NiBSplineInterpolator *v0; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x48u);
  if ( v0 )
    return sub_6E4930(v0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0);
  else
    return 0;
}
