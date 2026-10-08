int __cdecl sub_8DA210(int a1)
{
  int result; // eax

  result = a1; /*0x8da210*/
  if ( a1 ) /*0x8da216*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8da218*/
    *(_DWORD *)(a1 + 8) = &hkCollidableCollidableFilter::`vftable'; /*0x8da21e*/
    *(_DWORD *)(a1 + 0xC) = &hkShapeCollectionFilter::`vftable'; /*0x8da225*/
    *(_DWORD *)(a1 + 0x10) = &hkRayShapeCollectionFilter::`vftable'; /*0x8da22c*/
    *(_DWORD *)(a1 + 0x14) = &hkRayCollidableFilter::`vftable'; /*0x8da233*/
    *(_DWORD *)a1 = &off_A96B78; /*0x8da23a*/
    *(_DWORD *)(a1 + 8) = &off_A96B64; /*0x8da240*/
    *(_DWORD *)(a1 + 0xC) = &off_A96B70; /*0x8da247*/
    *(_DWORD *)(a1 + 0x10) = &off_A96B68; /*0x8da24e*/
    *(_DWORD *)(a1 + 0x14) = &off_A96B64; /*0x8da255*/
  }
  return result; /*0x8da25c*/
}
