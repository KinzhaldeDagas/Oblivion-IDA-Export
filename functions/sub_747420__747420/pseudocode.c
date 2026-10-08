int __cdecl sub_747420(int a1)
{
  int v1; // ecx
  int v2; // edx
  int v3; // ecx
  int v4; // edx
  int result; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // ecx
  int v9; // edx

  v1 = *(_DWORD *)(a1 + 0x16B4); /*0x747424*/
  *(_WORD *)(a1 + 0x16B0) |= 2 << v1; /*0x747434*/
  if ( v1 <= 0xD ) /*0x747443*/
  {
    *(_DWORD *)(a1 + 0x16B4) = v1 + 3; /*0x747492*/
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0); /*0x747452*/
    *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x747465*/
    v2 = *(_DWORD *)(a1 + 0x16B4); /*0x747468*/
    ++*(_DWORD *)(a1 + 0x14); /*0x74746e*/
    *(_DWORD *)(a1 + 0x16B4) = v2 - 0xD; /*0x747480*/
    *(_WORD *)(a1 + 0x16B0) = 2u >> (0x10 - v2); /*0x747486*/
  }
  v3 = *(_DWORD *)(a1 + 0x16B4); /*0x747498*/
  *(_WORD *)(a1 + 0x16B0) = *(_WORD *)(a1 + 0x16B0); /*0x7474a2*/
  if ( v3 <= 9 ) /*0x7474ac*/
  {
    *(_DWORD *)(a1 + 0x16B4) = v3 + 7; /*0x7474f8*/
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0); /*0x7474bb*/
    *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1); /*0x7474ce*/
    v4 = *(_DWORD *)(a1 + 0x16B4); /*0x7474d1*/
    ++*(_DWORD *)(a1 + 0x14); /*0x7474d7*/
    *(_DWORD *)(a1 + 0x16B4) = v4 - 9; /*0x7474e6*/
    *(_WORD *)(a1 + 0x16B0) = 0; /*0x7474ec*/
  }
  result = sub_746E20(a1); /*0x7474fe*/
  v6 = *(_DWORD *)(result + 0x16B4); /*0x747503*/
  if ( *(_DWORD *)(result + 0x16AC) - v6 + 0xB < 9 ) /*0x747517*/
  {
    *(_WORD *)(result + 0x16B0) |= 2 << v6; /*0x747524*/
    if ( v6 <= 0xD ) /*0x74752e*/
    {
      *(_DWORD *)(result + 0x16B4) = v6 + 3; /*0x74757d*/
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x74753d*/
      *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x747550*/
      v7 = *(_DWORD *)(result + 0x16B4); /*0x747553*/
      ++*(_DWORD *)(result + 0x14); /*0x747559*/
      *(_DWORD *)(result + 0x16B4) = v7 - 0xD; /*0x74756b*/
      *(_WORD *)(result + 0x16B0) = 2u >> (0x10 - v7); /*0x747571*/
    }
    v8 = *(_DWORD *)(result + 0x16B4); /*0x747583*/
    *(_WORD *)(result + 0x16B0) = *(_WORD *)(result + 0x16B0); /*0x74758d*/
    if ( v8 > 9 ) /*0x747597*/
    {
      *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0); /*0x7475a6*/
      *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1); /*0x7475b9*/
      v9 = *(_DWORD *)(result + 0x16B4); /*0x7475bc*/
      ++*(_DWORD *)(result + 0x14); /*0x7475c2*/
      *(_DWORD *)(result + 0x16B4) = v9 - 9; /*0x7475d1*/
      *(_WORD *)(result + 0x16B0) = 0; /*0x7475d7*/
      result = sub_746E20(result); /*0x7475de*/
      *(_DWORD *)(result + 0x16AC) = 7; /*0x7475e5*/
      return result; /*0x7475f0*/
    }
    *(_DWORD *)(result + 0x16B4) = v8 + 7; /*0x7475f4*/
    result = sub_746E20(result); /*0x7475fa*/
  }
  *(_DWORD *)(result + 0x16AC) = 7; /*0x747601*/
  return result; /*0x7475e3*/
}
