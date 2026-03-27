int __cdecl sub_76E430(int a1)
{
  char *v1; // ebx
  int v2; // ebp
  char *v3; // edi
  int v4; // ebx
  int v5; // eax
  int v7; // eax
  size_t v8; // [esp-4h] [ebp-18h]
  int v9; // [esp+10h] [ebp-4h]

  v1 = *(char **)(a1 + 0x10);
  v2 = 0;
  v3 = *(char **)(a1 + 0x24);
  v9 = 0;
  if ( v1 )
  {
    if ( *(_WORD *)(a1 + 8) )
    {
      v7 = *(_DWORD *)(a1 + 0x1C);
      do
      {
        LODWORD(v8) = v7;
        memcpy(v3, v1, v8);
        v7 = *(_DWORD *)(a1 + 0x1C);
        v1 += *(_DWORD *)(a1 + 0x18);
        v3 += *(_DWORD *)(a1 + 0x20);
        v9 += v7;
        ++v2;
      }
      while ( (unsigned __int16)v2 < *(_WORD *)(a1 + 8) );
    }
    return v9;
  }
  v4 = 0;
  if ( !*(_WORD *)(a1 + 8) )
    return v9;
  v5 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0, v5);
    v5 = *(_DWORD *)(a1 + 0x1C);
    v3 += *(_DWORD *)(a1 + 0x20);
    v9 += v5;
    ++v4;
  }
  while ( (unsigned __int16)v4 < *(_WORD *)(a1 + 8) );
  return v9;
}
