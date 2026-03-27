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

  while ( *(_DWORD *)(a1 + 0x10) != *(unsigned __int16 *)(a1 + 0x16) )
  {
    v2 = *(_DWORD *)(a2 + 4);
    if ( !v2 )
      break;
    sub_8E68A0(
      a1,
      (const void *)(*(_DWORD *)(a2 + 0x10) + *(_DWORD *)(*(_DWORD *)a2 + 4 * v2 - 4) - *(unsigned __int16 *)(a2 + 0x14)));
    v3 = *(_DWORD *)(a2 + 0x10) - *(unsigned __int16 *)(a2 + 0x14);
    *(_DWORD *)(a2 + 0x10) = v3;
    if ( !v3 )
    {
      v4 = *(_DWORD *)(a2 + 4);
      v5 = *(_DWORD *)(*(_DWORD *)a2 + 4 * v4 - 4);
      v6 = v4 - 1;
      v7 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 4) = v6;
      if ( v7 >= 0 )
      {
        v8 = v6 + 1;
        if ( v8 < 1 || 2 * v8 < (v7 & 0x3FFFFFFF) )
          sub_8A6F90((const void **)a2, 4, (_DWORD *)(a2 + 0xC), 1);
      }
      (*(void (__stdcall **)(int, _DWORD, int))(*(_DWORD *)dword_BA7D98 + 0x14))(
        v5,
        *(unsigned __int16 *)(a2 + 0x16),
        0x24);
      *(_DWORD *)(a2 + 0x10) = *(unsigned __int16 *)(a2 + 0x16);
    }
  }
  result = *(_DWORD *)(a2 + 4);
  if ( result )
  {
    sub_8E6720((const void **)a1, *(_DWORD *)(a1 + 4), (_DWORD *)a2);
    result = *(_DWORD *)(a2 + 0x10);
    *(_DWORD *)(a1 + 0x10) = result;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)(a2 + 0x10) = *(unsigned __int16 *)(a1 + 0x16);
  }
  return result;
}
