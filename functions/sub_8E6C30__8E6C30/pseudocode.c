int __cdecl sub_8E6C30(int a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int result; // eax

  while ( *(_DWORD *)(a1 + 0x10) != *(unsigned __int16 *)(a1 + 0x16) ) /*0x8e6c41*/
  {
    v2 = *(_DWORD *)(a2 + 4); /*0x8e6c50*/
    if ( !v2 ) /*0x8e6c55*/
      break; /*0x8e6c55*/
    sub_8E68A0( /*0x8e6c6e*/
      a1,
      (const void *)(*(_DWORD *)(a2 + 0x10) + *(_DWORD *)(*(_DWORD *)a2 + 4 * v2 - 4) - *(unsigned __int16 *)(a2 + 0x14)));
    v3 = *(_DWORD *)(a2 + 0x10) - *(unsigned __int16 *)(a2 + 0x14); /*0x8e6c7d*/
    *(_DWORD *)(a2 + 0x10) = v3; /*0x8e6c7f*/
    if ( !v3 ) /*0x8e6c82*/
    {
      v4 = *(_DWORD *)(a2 + 4); /*0x8e6c84*/
      v5 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v4 - 4); /*0x8e6c89*/
      v6 = v4 - 1; /*0x8e6c8d*/
      v7 = *(_DWORD *)(a2 + 8); /*0x8e6c90*/
      *(_DWORD *)(a2 + 4) = v6; /*0x8e6c95*/
      if ( v7 >= 0 ) /*0x8e6c98*/
      {
        v8 = v6 + 1; /*0x8e6c9a*/
        if ( v8 < 1 || 2 * v8 < (v7 & 0x3FFFFFFF) ) /*0x8e6ca9*/
          sub_8A6F90((const void **)a2, 4, (_DWORD *)(a2 + 0xC), 1); /*0x8e6cb4*/
      }
      (*(void (__stdcall **)(int, _DWORD, int))(*(_DWORD *)unk_BA7D98 + 0x14))( /*0x8e6ccc*/
        v5,
        *(unsigned __int16 *)(a2 + 0x16),
        0x24);
      *(_DWORD *)(a2 + 0x10) = *(unsigned __int16 *)(a2 + 0x16); /*0x8e6cd3*/
    }
  }
  result = *(_DWORD *)(a2 + 4); /*0x8e6ce4*/
  if ( result ) /*0x8e6ce9*/
  {
    sub_8E6720((const void **)a1, *(_DWORD *)(a1 + 4), (_DWORD *)a2); /*0x8e6cf2*/
    result = *(_DWORD *)(a2 + 0x10); /*0x8e6cf7*/
    *(_DWORD *)(a1 + 0x10) = result; /*0x8e6cfa*/
    *(_DWORD *)(a2 + 4) = 0; /*0x8e6cfd*/
    *(_DWORD *)(a2 + 0x10) = *(unsigned __int16 *)(a1 + 0x16); /*0x8e6d08*/
  }
  return result; /*0x8e6d0b*/
}
