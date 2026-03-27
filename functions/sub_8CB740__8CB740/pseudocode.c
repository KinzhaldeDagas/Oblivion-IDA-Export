int __cdecl sub_8CB740(int a1, int a2, const void **a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  int v6; // ebp
  int i; // [esp+0h] [ebp-4h]

  v3 = a2;
  result = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 0xBC); ++i )
  {
    v5 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB8) + 4 * result);
    if ( v5 )
    {
      if ( *(_DWORD *)(v5 + 0xC) == *(_DWORD *)(a1 + 0x30) )
      {
        if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a3, 4);
        *((_DWORD *)*a3 + (_DWORD)a3[1]) = v5;
        a3[1] = (char *)a3[1] + 1;
        if ( *(_WORD *)(v5 + 4) )
          ++*(_WORD *)(v5 + 6);
        sub_8DDC90(*(_DWORD *)(a1 + 0x30), v5);
        *(_BYTE *)(*(_DWORD *)(a1 + 0x30) + 0x27) = 1;
        v6 = *(_DWORD *)(a1 + 0x30);
        if ( *(_WORD *)(v6 + 0x22) == 0xFFFF )
        {
          *(_WORD *)(v6 + 0x22) = *(_WORD *)(a1 + 0x54);
          if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)(a1 + 0x50), 4);
          *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * (*(_DWORD *)(a1 + 0x54))++) = v6;
        }
      }
    }
    v3 = a2;
    result = i + 1;
  }
  return result;
}
