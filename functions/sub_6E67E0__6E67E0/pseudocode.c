int sub_6E67E0()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x34u);
  result = 0;
  if ( v0 )
  {
    NiBSplineInterpolator::NiBSplineInterpolator((NiBSplineInterpolator *)v0, 0, 0);
    *(_DWORD *)v0 = &NiBSplineColorInterpolator::`vftable';
    *(float *)(v0 + 0x1C) = 0.0;
    *(float *)(v0 + 0x20) = 0.0;
    *(float *)(v0 + 0x24) = 0.0;
    *(float *)(v0 + 0x28) = 0.0;
    *(_DWORD *)(v0 + 0x2C) = 0xFFFF;
    return v0;
  }
  return result;
}
