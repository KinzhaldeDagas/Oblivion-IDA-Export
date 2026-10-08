int __cdecl sub_8CB740(int a1, int a2, const void **a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // esi
  int v6; // ebp
  int i; // [esp+0h] [ebp-4h]

  v3 = a2; /*0x8cb741*/
  result = 0; /*0x8cb74b*/
  for ( i = 0; i < *(_DWORD *)(a2 + 0xBC); ++i ) /*0x8cb752*/
  {
    v5 = *(_DWORD *)(*(_DWORD *)(v3 + 0xB8) + 4 * result); /*0x8cb76a*/
    if ( v5 ) /*0x8cb76f*/
    {
      if ( *(_DWORD *)(v5 + 0xC) == *(_DWORD *)(a1 + 0x30) ) /*0x8cb77b*/
      {
        if ( a3[1] == (const void *)((unsigned int)a3[2] & 0x3FFFFFFF) ) /*0x8cb78a*/
          sub_8A6EE0(a3, 4); /*0x8cb78f*/
        *((_DWORD *)*a3 + (_DWORD)a3[1]) = v5; /*0x8cb79c*/
        a3[1] = (char *)a3[1] + 1; /*0x8cb79f*/
        if ( *(_WORD *)(v5 + 4) ) /*0x8cb7a2*/
          ++*(_WORD *)(v5 + 6); /*0x8cb7a9*/
        sub_8DDC90(*(_DWORD *)(a1 + 0x30), v5); /*0x8cb7b1*/
        *(_BYTE *)(*(_DWORD *)(a1 + 0x30) + 0x27) = 1; /*0x8cb7b9*/
        v6 = *(_DWORD *)(a1 + 0x30); /*0x8cb7bd*/
        if ( *(_WORD *)(v6 + 0x22) == 0xFFFF ) /*0x8cb7c6*/
        {
          *(_WORD *)(v6 + 0x22) = *(_WORD *)(a1 + 0x54); /*0x8cb7cf*/
          if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) ) /*0x8cb7e1*/
            sub_8A6EE0((const void **)(a1 + 0x50), 4); /*0x8cb7e6*/
          *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * (*(_DWORD *)(a1 + 0x54))++) = v6; /*0x8cb7f3*/
        }
      }
    }
    v3 = a2; /*0x8cb7fd*/
    result = i + 1; /*0x8cb807*/
  }
  return result; /*0x8cb819*/
}
