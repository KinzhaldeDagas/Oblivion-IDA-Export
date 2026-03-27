int __cdecl sub_8DA210(int a1)
{
  int result; // eax

  result = a1;
  if ( a1 )
  {
    *(_WORD *)(a1 + 6) = 1;
    *(_DWORD *)(a1 + 8) = &hkCollidableCollidableFilter::`vftable';
    *(_DWORD *)(a1 + 0xC) = &hkShapeCollectionFilter::`vftable';
    *(_DWORD *)(a1 + 0x10) = &hkRayShapeCollectionFilter::`vftable';
    *(_DWORD *)(a1 + 0x14) = &hkRayCollidableFilter::`vftable';
    *(_DWORD *)a1 = &off_A96B78;
    *(_DWORD *)(a1 + 8) = &off_A96B64;
    *(_DWORD *)(a1 + 0xC) = &off_A96B70;
    *(_DWORD *)(a1 + 0x10) = &off_A96B68;
    *(_DWORD *)(a1 + 0x14) = &off_A96B64;
  }
  return result;
}
