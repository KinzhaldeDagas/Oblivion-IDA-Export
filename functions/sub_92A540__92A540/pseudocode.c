int __cdecl sub_92A540(int a1)
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
    *(_DWORD *)a1 = &off_AA1AE8;
    *(_DWORD *)(a1 + 8) = &off_AA1AE4;
    *(_DWORD *)(a1 + 0xC) = &off_AA1ADC;
    *(_DWORD *)(a1 + 0x10) = &off_AA1AD4;
    *(_DWORD *)(a1 + 0x14) = &off_AA1AD0;
  }
  return result;
}
