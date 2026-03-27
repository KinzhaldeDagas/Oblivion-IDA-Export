double __cdecl sub_583D50(int a1)
{
  int v1; // ecx
  double v3; // st7

  v1 = *(_DWORD *)(InterfaceManagerPtr->unk0C0[0x1C] + 0x10);
  if ( !v1 )
    return 1.0;
  while ( a1 != *(_DWORD *)v1 )
  {
    v1 = *(_DWORD *)(v1 + 0x10);
    if ( !v1 )
      return 1.0;
  }
  if ( *(float *)(v1 + 8) <= 0.0 )
    return flt_A30634;
  v3 = *(float *)(v1 + 4) / *(float *)(v1 + 8);
  if ( v3 <= 1.0 && v3 < 0.0 )
    return (float)0.0;
  if ( v3 <= 1.0 )
    return (float)v3;
  return (float)1.0;
}
