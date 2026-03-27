int __cdecl sub_92B0C0(int a1)
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
    *(_DWORD *)a1 = &off_AA1BDC;
    *(_DWORD *)(a1 + 8) = &off_AA1BD8;
    *(_DWORD *)(a1 + 0xC) = &off_AA1BD0;
    *(_DWORD *)(a1 + 0x10) = &off_AA1BC8;
    *(_DWORD *)(a1 + 0x14) = &off_AA1BC4;
  }
  return result;
}
