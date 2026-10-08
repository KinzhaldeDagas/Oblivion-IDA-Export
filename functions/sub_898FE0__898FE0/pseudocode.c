int __cdecl sub_898FE0(int a1, const void **a2)
{
  int result; // eax
  int i; // ebx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // edi

  result = *(_DWORD *)(a1 + 0x38); /*0x898fe6*/
  for ( i = 0; i < result; ++i ) /*0x898fed*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0x34) + 4 * i); /*0x898ff4*/
    v5 = *(_DWORD *)(v4 + 0x68); /*0x898ff7*/
    v6 = *(_DWORD *)(v4 + 0x6C) - 1; /*0x898ffd*/
    if ( v6 >= 0 ) /*0x898ffe*/
    {
      v7 = v6 + 1; /*0x899000*/
      do /*0x899020*/
      {
        if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 0xC) + 0xC))(*(_DWORD *)(v5 + 0xC)) != 0xB ) /*0x89900e*/
          sub_8DA100(a2, *(_DWORD *)v5); /*0x899017*/
        v5 += 0x1C; /*0x89901c*/
        --v7; /*0x89901f*/
      }
      while ( v7 ); /*0x899020*/
    }
    result = *(_DWORD *)(a1 + 0x38); /*0x899022*/
  }
  return result; /*0x89902c*/
}
