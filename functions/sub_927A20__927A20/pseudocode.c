int __cdecl sub_927A20(int a1)
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
    *(_DWORD *)a1 = &off_AA18D0;
    *(_DWORD *)(a1 + 8) = &off_AA18CC;
    *(_DWORD *)(a1 + 0xC) = &off_AA18C4;
    *(_DWORD *)(a1 + 0x10) = &off_AA18BC;
    *(_DWORD *)(a1 + 0x14) = &off_AA18B8;
  }
  return result;
}
