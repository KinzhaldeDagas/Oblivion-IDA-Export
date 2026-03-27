char __cdecl sub_8CBC00(int a1, int a2)
{
  int v2; // eax
  bool v3; // zf
  const void **v4; // esi

  *(_BYTE *)(a2 + 0x28) = 1;
  LOBYTE(v2) = 0;
  v3 = *(_WORD *)(a2 + 0x22) == 0xFFFF;
  *(_BYTE *)(a2 + 0x25) = 0;
  *(_BYTE *)(a2 + 0x24) = 0;
  if ( v3 )
  {
    v4 = (const void **)(a1 + 0x50);
    *(_WORD *)(a2 + 0x22) = *(_WORD *)(a1 + 0x54);
    if ( *(_DWORD *)(a1 + 0x54) == (*(_DWORD *)(a1 + 0x58) & 0x3FFFFFFF) )
      sub_8A6EE0(v4, 4);
    v2 = *(_DWORD *)(a1 + 0x54);
    *((_DWORD *)*v4 + v2) = a2;
    ++*(_DWORD *)(a1 + 0x54);
  }
  return v2;
}
