int __cdecl sub_8CBBB0(int a1, int a2)
{
  const void **v2; // esi
  int result; // eax

  *(_BYTE *)(a2 + 0x28) = 0;
  if ( *(_WORD *)(a2 + 0x22) == 0xFFFF )
  {
    v2 = (const void **)(a1 + 0x50);
    *(_WORD *)(a2 + 0x22) = *(_WORD *)(a1 + 0x54);
    if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) )
      sub_8A6EE0(v2, 4);
    result = *(_DWORD *)(a1 + 0x54);
    *((_DWORD *)*v2 + result) = a2;
    ++*(_DWORD *)(a1 + 0x54);
  }
  return result;
}
