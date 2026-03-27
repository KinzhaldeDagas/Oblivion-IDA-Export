NiBSplineInterpolator *sub_6E5550()
{
  NiBSplineInterpolator *v0; // esi
  NiBSplineInterpolator *result; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x24u);
  result = 0;
  if ( v0 )
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v0, 0, 0);
    *(_DWORD *)v0 = &NiBSplineFloatInterpolator::`vftable';
    *((_DWORD *)v0 + 8) = 0xFFFF;
    return v0;
  }
  return result;
}
