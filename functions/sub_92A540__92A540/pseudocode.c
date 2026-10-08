int __cdecl sub_92A540(int a1)
{
  int result; // eax

  result = a1; /*0x92a540*/
  if ( a1 ) /*0x92a546*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x92a548*/
    *(_DWORD *)(a1 + 8) = &hkCollidableCollidableFilter::`vftable'; /*0x92a54e*/
    *(_DWORD *)(a1 + 0xC) = &hkShapeCollectionFilter::`vftable'; /*0x92a555*/
    *(_DWORD *)(a1 + 0x10) = &hkRayShapeCollectionFilter::`vftable'; /*0x92a55c*/
    *(_DWORD *)(a1 + 0x14) = &hkRayCollidableFilter::`vftable'; /*0x92a563*/
    *(_DWORD *)a1 = &off_AA1AE8; /*0x92a56a*/
    *(_DWORD *)(a1 + 8) = &off_AA1AE4; /*0x92a570*/
    *(_DWORD *)(a1 + 0xC) = &off_AA1ADC; /*0x92a577*/
    *(_DWORD *)(a1 + 0x10) = &off_AA1AD4; /*0x92a57e*/
    *(_DWORD *)(a1 + 0x14) = &off_AA1AD0; /*0x92a585*/
  }
  return result; /*0x92a58c*/
}
