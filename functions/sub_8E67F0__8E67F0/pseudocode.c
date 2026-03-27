int __cdecl sub_8E67F0(int a1, int a2)
{
  const void *v2; // eax
  unsigned __int16 v3; // ax
  int result; // eax
  bool v5; // zf
  int v6; // eax
  int v7; // edi
  int v8; // ecx
  int v9; // eax
  int v10; // ecx

  v2 = (const void *)(*(_DWORD *)(a1 + 0x10)
                    + *(_DWORD *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4) - 4)
                    - *(unsigned __int16 *)(a1 + 0x14));
  if ( (const void *)a2 != v2 )
  {
    sub_8B1890((void *)a2, v2, *(unsigned __int16 *)(a1 + 0x14));
    v3 = *(_WORD *)(a2 + 0xE);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x14) + 0x24) + 8 * *(unsigned __int16 *)(a2 + 0xC)) = a2;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x18) + 0x24) + 8 * v3) = a2;
  }
  result = *(unsigned __int16 *)(a1 + 0x14);
  v5 = *(_DWORD *)(a1 + 0x10) == result;
  *(_DWORD *)(a1 + 0x10) -= result;
  if ( v5 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    v7 = *(_DWORD *)(*(_DWORD *)a1 + 4 * v6 - 4);
    v8 = v6 - 1;
    v9 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 4) = v8;
    if ( v9 >= 0 )
    {
      v10 = v8 + 1;
      if ( v10 < 1 || 2 * v10 < (v9 & 0x3FFFFFFF) )
        sub_8A6F90((const void **)a1, 4, (_DWORD *)(a1 + 0xC), 1);
    }
    result = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
               v7,
               *(unsigned __int16 *)(a1 + 0x16),
               0x24);
    *(_DWORD *)(a1 + 0x10) = *(unsigned __int16 *)(a1 + 0x16);
  }
  return result;
}
