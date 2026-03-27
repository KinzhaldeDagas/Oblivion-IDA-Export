int __cdecl sub_770CB0(int a1)
{
  _BYTE *v2; // ebx
  int v3; // ebp
  _BYTE *v4; // edi
  int v5; // eax
  unsigned __int16 v7; // dx
  _BYTE *v8; // ecx
  _BYTE *v9; // eax
  int v10; // ebp
  int v11; // [esp+10h] [ebp-Ch]
  int i; // [esp+14h] [ebp-8h]
  unsigned __int16 v13; // [esp+20h] [ebp+4h]

  v2 = *(_BYTE **)(a1 + 0x10);
  v3 = 0;
  v4 = *(_BYTE **)(a1 + 0x24);
  v11 = 0;
  if ( v2 )
  {
    if ( (__int16)(*(_WORD *)(a1 + 4) - 0x10) < 0 || *(_WORD *)(a1 + 4) == 0x10 )
      v13 = *(_WORD *)(a1 + 4) - 0xC;
    else
      v13 = 4;
    for ( i = 0; (unsigned __int16)i < *(_WORD *)(a1 + 8); ++i )
    {
      v7 = 0;
      v8 = v2;
      v9 = v4;
      if ( !v13 )
        goto LABEL_14;
      v10 = v13;
      do
      {
        *v9++ = *v8;
        v8 += 2;
        --v10;
      }
      while ( v10 );
      v7 = v13;
      if ( v13 < 4u )
LABEL_14:
        _memset(v9, 0, (unsigned __int16)(4 - v7));
      v11 += *(_DWORD *)(a1 + 0x1C);
      v2 += *(_DWORD *)(a1 + 0x18);
      v4 += *(_DWORD *)(a1 + 0x20);
    }
    return v11;
  }
  if ( !*(_WORD *)(a1 + 8) )
    return v11;
  v5 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v4, 0, v5);
    v5 = *(_DWORD *)(a1 + 0x1C);
    v4 += *(_DWORD *)(a1 + 0x20);
    v11 += v5;
    ++v3;
  }
  while ( (unsigned __int16)v3 < *(_WORD *)(a1 + 8) );
  return v11;
}
