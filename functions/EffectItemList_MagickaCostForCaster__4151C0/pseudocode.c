double __userpurge EffectItemList_MagickaCostForCaster@<st0>(int a1@<ecx>, int a2@<ebx>, int *a3)
{
  int v3; // esi
  int v5; // ecx
  int v6; // esi
  double v7; // st7
  float v8; // [esp+8h] [ebp-4h]

  v3 = a1; /*0x4151c2*/
  if ( !*(_DWORD *)(a1 + 8) && !*(_DWORD *)(a1 + 4) ) /*0x4151ca*/
    return 0.0; /*0x4151d0*/
  v8 = 0.0; /*0x4151db*/
  if ( !a1 ) /*0x4151df*/
    return (float)FloatFloor(v8); /*0x4151df*/
  do /*0x41520f*/
  {
    v5 = *(_DWORD *)(v3 + 4); /*0x4151e6*/
    if ( (*(_DWORD *)(*(_DWORD *)(v5 + 0x1C) + 0x58) & 0x400000) == 0 ) /*0x4151f5*/
      v8 = EffectItem_MagickaCostForCaster(v5, a2, a3) + v8; /*0x415201*/
    v6 = *(_DWORD *)(v3 + 8); /*0x415205*/
    if ( !v6 ) /*0x41520a*/
      break; /*0x41520a*/
    v3 = v6 - 4; /*0x41520c*/
  }
  while ( v3 ); /*0x41520f*/
  v7 = 0.0; /*0x415211*/
  if ( v8 >= 0.0 ) /*0x41521d*/
    return (float)FloatFloor(v8); /*0x415229*/
  return (float)v7; /*0x4151d2*/
}
