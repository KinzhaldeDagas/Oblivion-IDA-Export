int __cdecl sub_770EB0(size_t Size)
{
  int v1; // esi
  char *v2; // ebx
  int v3; // ebp
  char *v4; // edi
  int v5; // ebx
  int v6; // eax
  size_t v8; // [esp-4h] [ebp-1Ch]
  __int16 v9; // [esp+10h] [ebp-8h]
  int i; // [esp+14h] [ebp-4h]
  int Sizea; // [esp+1Ch] [ebp+4h]

  v1 = Size;
  v2 = *(char **)(Size + 0x10);
  v3 = 0;
  v4 = *(char **)(Size + 0x24);
  if ( v2 )
  {
    if ( (__int16)(*(_WORD *)(Size + 4) - 0x18) < 0 || *(_WORD *)(Size + 4) == 0x18 )
    {
      v9 = *(_WORD *)(Size + 4) - 0x14;
      Sizea = *(_DWORD *)(Size + 0x14);
    }
    else
    {
      v9 = 4;
      Sizea = *(_DWORD *)(Size + 0x1C);
    }
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(v1 + 8); ++i )
    {
      LODWORD(v8) = Sizea;
      memcpy(v4, v2, v8);
      if ( (unsigned __int16)v9 < 4u )
        _memset(v4 + 1, 0, (unsigned __int16)(4 - v9));
      v2 += *(_DWORD *)(v1 + 0x18);
      v4 += *(_DWORD *)(v1 + 0x20);
      v3 += *(_DWORD *)(v1 + 0x1C);
    }
    return v3;
  }
  v5 = 0;
  if ( !*(_WORD *)(Size + 8) )
    return v3;
  v6 = *(_DWORD *)(Size + 0x1C);
  do
  {
    _memset(v4, 0, v6);
    v6 = *(_DWORD *)(Size + 0x1C);
    v4 += *(_DWORD *)(Size + 0x20);
    ++v5;
    v3 += v6;
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(Size + 8) );
  return v3;
}
