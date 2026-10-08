_DWORD *__cdecl sub_747380(int a1, _BYTE *a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  char v7; // bl
  int v8; // edx

  v4 = *(_DWORD *)(a1 + 0x16B4); /*0x747384*/
  if ( v4 <= 0xD ) /*0x74738d*/
  {
    *(_DWORD *)(a1 + 0x16B4) = v4 + 3; /*0x747401*/
    *(_WORD *)(a1 + 0x16B0) |= a4 << v4; /*0x74740b*/
  }
  else
  {
    v5 = a4 << v4; /*0x747397*/
    v6 = *(_DWORD *)(a1 + 8); /*0x747399*/
    *(_WORD *)(a1 + 0x16B0) |= v5; /*0x74739c*/
    *(_BYTE *)(v6 + *(_DWORD *)(a1 + 0x14)) = *(_BYTE *)(a1 + 0x16B0); /*0x7473ad*/
    v7 = *(_BYTE *)(a1 + 0x16B1); /*0x7473b0*/
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = v7; /*0x7473c1*/
    v8 = *(_DWORD *)(a1 + 0x16B4); /*0x7473c4*/
    ++*(_DWORD *)(a1 + 0x14); /*0x7473ca*/
    *(_DWORD *)(a1 + 0x16B4) = v8 - 0xD; /*0x7473dc*/
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)a4 >> (0x10 - v8); /*0x7473e6*/
  }
  return sub_746F20(a1, a2, a3, 1); /*0x7473f7*/
}
