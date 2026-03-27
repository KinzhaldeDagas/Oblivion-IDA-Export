double __userpurge EffectItemList_MagickaCostForCaster@<st0>(int a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v3; // esi
  int v5; // ecx
  int v6; // esi
  double v7; // st7
  float v8; // [esp+8h] [ebp-4h]

  v3 = a1;
  if ( !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) )
    return 0.0;
  v8 = 0.0;
  if ( !a1 )
    return (float)FloatFloor(v8);
  do
  {
    v5 = *(_DWORD *)(v3 + 4);
    if ( (*(_DWORD *)(*(_DWORD *)(v5 + 0x1C) + 0x58) & 0x400000) == 0 )
      v8 = EffectItem_MagickaCostForCaster(v5, a2, a3) + v8;
    v6 = *(_DWORD *)(v3 + 8);
    if ( !v6 )
      break;
    v3 = v6 - 4;
  }
  while ( v3 );
  v7 = 0.0;
  if ( v8 >= 0.0 )
    return (float)FloatFloor(v8);
  return (float)v7;
}
