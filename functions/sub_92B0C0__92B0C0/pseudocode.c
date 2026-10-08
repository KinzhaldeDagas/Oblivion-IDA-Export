int __cdecl sub_92B0C0(int a1)
{
  int result; // eax

  result = a1; /*0x92b0c0*/
  if ( a1 ) /*0x92b0c6*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x92b0c8*/
    *(_DWORD *)(a1 + 8) = &hkCollidableCollidableFilter::`vftable'; /*0x92b0ce*/
    *(_DWORD *)(a1 + 0xC) = &hkShapeCollectionFilter::`vftable'; /*0x92b0d5*/
    *(_DWORD *)(a1 + 0x10) = &hkRayShapeCollectionFilter::`vftable'; /*0x92b0dc*/
    *(_DWORD *)(a1 + 0x14) = &hkRayCollidableFilter::`vftable'; /*0x92b0e3*/
    *(_DWORD *)a1 = &off_AA1BDC; /*0x92b0ea*/
    *(_DWORD *)(a1 + 8) = &off_AA1BD8; /*0x92b0f0*/
    *(_DWORD *)(a1 + 0xC) = &off_AA1BD0; /*0x92b0f7*/
    *(_DWORD *)(a1 + 0x10) = &off_AA1BC8; /*0x92b0fe*/
    *(_DWORD *)(a1 + 0x14) = &off_AA1BC4; /*0x92b105*/
  }
  return result; /*0x92b10c*/
}
