int __cdecl sub_927A20(int a1)
{
  int result; // eax

  result = a1; /*0x927a20*/
  if ( a1 ) /*0x927a26*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x927a28*/
    *(_DWORD *)(a1 + 8) = &hkCollidableCollidableFilter::`vftable'; /*0x927a2e*/
    *(_DWORD *)(a1 + 0xC) = &hkShapeCollectionFilter::`vftable'; /*0x927a35*/
    *(_DWORD *)(a1 + 0x10) = &hkRayShapeCollectionFilter::`vftable'; /*0x927a3c*/
    *(_DWORD *)(a1 + 0x14) = &hkRayCollidableFilter::`vftable'; /*0x927a43*/
    *(_DWORD *)a1 = &off_AA18D0; /*0x927a4a*/
    *(_DWORD *)(a1 + 8) = &off_AA18CC; /*0x927a50*/
    *(_DWORD *)(a1 + 0xC) = &off_AA18C4; /*0x927a57*/
    *(_DWORD *)(a1 + 0x10) = &off_AA18BC; /*0x927a5e*/
    *(_DWORD *)(a1 + 0x14) = &off_AA18B8; /*0x927a65*/
  }
  return result; /*0x927a6c*/
}
