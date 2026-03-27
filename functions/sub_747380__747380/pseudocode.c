_DWORD *__cdecl sub_747380(int a1, _BYTE *a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // edx
  int v6; // ecx
  char v7; // bl
  int v8; // edx

  v4 = *(_DWORD *)(a1 + 0x16B4);
  if ( v4 <= 0xD )
  {
    *(_DWORD *)(a1 + 0x16B4) = v4 + 3;
    *(_WORD *)(a1 + 0x16B0) |= a4 << v4;
  }
  else
  {
    v5 = a4 << v4;
    v6 = *(_DWORD *)(a1 + 8);
    *(_WORD *)(a1 + 0x16B0) |= v5;
    *(_BYTE *)(v6 + *(_DWORD *)(a1 + 0x14)) = *(_BYTE *)(a1 + 0x16B0);
    v7 = *(_BYTE *)(a1 + 0x16B1);
    *(_BYTE *)(++*(_DWORD *)(a1 + 0x14) + *(_DWORD *)(a1 + 8)) = v7;
    v8 = *(_DWORD *)(a1 + 0x16B4);
    ++*(_DWORD *)(a1 + 0x14);
    *(_DWORD *)(a1 + 0x16B4) = v8 - 0xD;
    *(_WORD *)(a1 + 0x16B0) = (unsigned __int16)a4 >> (0x10 - v8);
  }
  return sub_746F20(a1, a2, a3, 1);
}
