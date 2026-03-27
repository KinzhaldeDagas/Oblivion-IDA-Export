int __cdecl sub_928010(int a1)
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
    *(_DWORD *)a1 = &off_AA1930;
    *(_DWORD *)(a1 + 8) = &off_AA192C;
    *(_DWORD *)(a1 + 0xC) = &off_AA1924;
    *(_DWORD *)(a1 + 0x10) = &off_AA191C;
    *(_DWORD *)(a1 + 0x14) = &off_AA1918;
  }
  return result;
}
