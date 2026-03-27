NiBSplineInterpolator *sub_6E5160()
{
  NiBSplineInterpolator *v0; // esi
  NiBSplineInterpolator *result; // eax

  v0 = (NiBSplineInterpolator *)FormHeapAlloc(0x2Cu);
  result = 0;
  if ( v0 )
  {
    NiBSplineInterpolator::NiBSplineInterpolator(v0, 0, 0);
    *(_DWORD *)v0 = &NiBSplinePoint3Interpolator::`vftable';
    *((_DWORD *)v0 + 0xA) = 0xFFFF;
    return v0;
  }
  return result;
}
