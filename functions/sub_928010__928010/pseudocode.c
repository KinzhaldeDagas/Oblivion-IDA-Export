int __cdecl sub_928010(int a1)
{
  int result; // eax

  result = a1; /*0x928010*/
  if ( a1 ) /*0x928016*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x928018*/
    *(_DWORD *)(a1 + 8) = &hkCollidableCollidableFilter::`vftable'; /*0x92801e*/
    *(_DWORD *)(a1 + 0xC) = &hkShapeCollectionFilter::`vftable'; /*0x928025*/
    *(_DWORD *)(a1 + 0x10) = &hkRayShapeCollectionFilter::`vftable'; /*0x92802c*/
    *(_DWORD *)(a1 + 0x14) = &hkRayCollidableFilter::`vftable'; /*0x928033*/
    *(_DWORD *)a1 = &off_AA1930; /*0x92803a*/
    *(_DWORD *)(a1 + 8) = &off_AA192C; /*0x928040*/
    *(_DWORD *)(a1 + 0xC) = &off_AA1924; /*0x928047*/
    *(_DWORD *)(a1 + 0x10) = &off_AA191C; /*0x92804e*/
    *(_DWORD *)(a1 + 0x14) = &off_AA1918; /*0x928055*/
  }
  return result; /*0x92805c*/
}
