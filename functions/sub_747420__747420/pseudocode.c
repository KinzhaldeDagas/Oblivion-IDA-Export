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

  v1 = *(_DWORD *)(a1 + 0x16B4);
  *(_WORD *)(a1 + 0x16B0) |= 2 << v1;
  if ( v1 <= 0xD )
  {
    *(_DWORD *)(a1 + 0x16B4) = v1 + 3;
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0);
    *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
    v2 = *(_DWORD *)(a1 + 0x16B4);
    ++*(_DWORD *)(a1 + 0x14);
    *(_DWORD *)(a1 + 0x16B4) = v2 - 0xD;
    *(_WORD *)(a1 + 0x16B0) = 2u >> (0x10 - v2);
  }
  v3 = *(_DWORD *)(a1 + 0x16B4);
  *(_WORD *)(a1 + 0x16B0) = *(_WORD *)(a1 + 0x16B0);
  if ( v3 <= 9 )
  {
    *(_DWORD *)(a1 + 0x16B4) = v3 + 7;
  }
  else
  {
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + (*(_DWORD *)(a1 + 0x14))++) = *(_BYTE *)(a1 + 0x16B0);
    *(_BYTE *)(*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = *(_BYTE *)(a1 + 0x16B1);
    v4 = *(_DWORD *)(a1 + 0x16B4);
    ++*(_DWORD *)(a1 + 0x14);
    *(_DWORD *)(a1 + 0x16B4) = v4 - 9;
    *(_WORD *)(a1 + 0x16B0) = 0;
  }
  result = sub_746E20(a1);
  v6 = *(_DWORD *)(result + 0x16B4);
  if ( *(_DWORD *)(result + 0x16AC) - v6 + 0xB < 9 )
  {
    *(_WORD *)(result + 0x16B0) |= 2 << v6;
    if ( v6 <= 0xD )
    {
      *(_DWORD *)(result + 0x16B4) = v6 + 3;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
      *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
      v7 = *(_DWORD *)(result + 0x16B4);
      ++*(_DWORD *)(result + 0x14);
      *(_DWORD *)(result + 0x16B4) = v7 - 0xD;
      *(_WORD *)(result + 0x16B0) = 2u >> (0x10 - v7);
    }
    v8 = *(_DWORD *)(result + 0x16B4);
    *(_WORD *)(result + 0x16B0) = *(_WORD *)(result + 0x16B0);
    if ( v8 > 9 )
    {
      *(_BYTE *)(*(_DWORD *)(result + 8) + (*(_DWORD *)(result + 0x14))++) = *(_BYTE *)(result + 0x16B0);
      *(_BYTE *)(*(_DWORD *)(result + 0x14) + *(_DWORD *)(result + 8)) = *(_BYTE *)(result + 0x16B1);
      v9 = *(_DWORD *)(result + 0x16B4);
      ++*(_DWORD *)(result + 0x14);
      *(_DWORD *)(result + 0x16B4) = v9 - 9;
      *(_WORD *)(result + 0x16B0) = 0;
      result = sub_746E20(result);
      *(_DWORD *)(result + 0x16AC) = 7;
      return result;
    }
    *(_DWORD *)(result + 0x16B4) = v8 + 7;
    result = sub_746E20(result);
  }
  *(_DWORD *)(result + 0x16AC) = 7;
  return result;
}
