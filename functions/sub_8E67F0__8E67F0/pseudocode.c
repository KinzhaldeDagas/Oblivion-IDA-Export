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

  v2 = (const void *)(*(_DWORD *)(a1 + 0x10) /*0x8e6808*/
                    + *(_DWORD *)(*(_DWORD *)a1 + 4 * *(_DWORD *)(a1 + 4) - 4)
                    - *(unsigned __int16 *)(a1 + 0x14));
  if ( (const void *)a2 != v2 ) /*0x8e6810*/
  {
    sub_8B1890((void *)a2, v2, *(unsigned __int16 *)(a1 + 0x14)); /*0x8e6815*/
    v3 = *(_WORD *)(a2 + 0xE); /*0x8e6824*/
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x14) + 0x24) + 8 * *(unsigned __int16 *)(a2 + 0xC)) = a2; /*0x8e6828*/
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x18) + 0x24) + 8 * v3) = a2; /*0x8e6837*/
  }
  result = *(unsigned __int16 *)(a1 + 0x14); /*0x8e683a*/
  v5 = *(_DWORD *)(a1 + 0x10) == result; /*0x8e683e*/
  *(_DWORD *)(a1 + 0x10) -= result; /*0x8e683e*/
  if ( v5 ) /*0x8e6841*/
  {
    v6 = *(_DWORD *)(a1 + 4); /*0x8e6843*/
    v7 = *(_DWORD *)(*(_DWORD *)a1 + 4 * v6 - 4); /*0x8e6848*/
    v8 = v6 - 1; /*0x8e684c*/
    v9 = *(_DWORD *)(a1 + 8); /*0x8e684f*/
    *(_DWORD *)(a1 + 4) = v8; /*0x8e6854*/
    if ( v9 >= 0 ) /*0x8e6857*/
    {
      v10 = v8 + 1; /*0x8e6859*/
      if ( v10 < 1 || 2 * v10 < (v9 & 0x3FFFFFFF) ) /*0x8e6869*/
        sub_8A6F90((const void **)a1, 4, (_DWORD *)(a1 + 0xC), 1); /*0x8e6874*/
    }
    result = (*(int (__stdcall **)(int, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e688c*/
               v7,
               *(unsigned __int16 *)(a1 + 0x16),
               0x24);
    *(_DWORD *)(a1 + 0x10) = *(unsigned __int16 *)(a1 + 0x16); /*0x8e6893*/
  }
  return result; /*0x8e6896*/
}
