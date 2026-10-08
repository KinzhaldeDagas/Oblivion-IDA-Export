int __cdecl sub_8ED360(int a1)
{
  int result; // eax

  result = a1; /*0x8ed360*/
  if ( a1 ) /*0x8ed368*/
  {
    *(_WORD *)(a1 + 6) = 1; /*0x8ed36a*/
    *(_DWORD *)(a1 + 0x28) = 0; /*0x8ed370*/
    *(_DWORD *)(a1 + 0x38) = 0; /*0x8ed373*/
    *(_DWORD *)(a1 + 0x3C) = 0; /*0x8ed376*/
    *(_DWORD *)(a1 + 0x40) = 0x80000000; /*0x8ed37e*/
    *(_DWORD *)(a1 + 0x50) = 0; /*0x8ed381*/
    *(_DWORD *)(a1 + 0x54) = 0; /*0x8ed384*/
    *(_DWORD *)(a1 + 0x58) = 0x80000000; /*0x8ed387*/
    *(_DWORD *)(a1 + 0x5C) = 0; /*0x8ed38a*/
    *(_DWORD *)(a1 + 0x60) = 0; /*0x8ed38d*/
    *(_DWORD *)(a1 + 0x64) = 0x80000000; /*0x8ed390*/
    *(_DWORD *)a1 = &off_A9AFFC; /*0x8ed393*/
    *(_DWORD *)(a1 + 0x120) = 0; /*0x8ed399*/
    *(_DWORD *)(a1 + 0x124) = 0; /*0x8ed39f*/
    *(_DWORD *)(a1 + 0x128) = 0x80000000; /*0x8ed3a5*/
  }
  return result; /*0x8ed3ab*/
}
