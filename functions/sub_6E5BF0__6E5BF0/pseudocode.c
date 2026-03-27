NiBSplineInterpolator *sub_6E5BF0()
{
  NiBSplineInterpolator *v0; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x60u);
  if ( v0 )
    return sub_6E5920(v0, 0, 0xFFFF, 0xFFFF, 0xFFFF, 0);
  else
    return 0;
}
