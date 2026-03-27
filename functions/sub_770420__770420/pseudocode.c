int __cdecl sub_770420(int a1)
{
  _WORD *v2; // edx
  _WORD *v3; // ebx
  int v4; // ebp
  int v5; // edi
  int v6; // eax
  _WORD *v8; // eax
  _WORD *v9; // edi
  int v10; // ecx
  int v11; // ecx
  _WORD *v12; // edi
  int i; // ecx
  bool v14; // cf
  unsigned __int16 v15; // [esp+10h] [ebp-10h]
  int v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h]
  unsigned __int16 v18; // [esp+1Ch] [ebp-4h]
  unsigned __int16 v19; // [esp+24h] [ebp+4h]

  v2 = *(_WORD **)(a1 + 0x10);
  v3 = *(_WORD **)(a1 + 0x24);
  v4 = 0;
  v16 = 0;
  if ( v2 )
  {
    v18 = 2 * (*(_DWORD *)a1 != 6) + 2;
    if ( (__int16)(*(_WORD *)(a1 + 4) - 8 - v18) <= 0 )
      v19 = *(_WORD *)(a1 + 4) - 8;
    else
      v19 = 2 * (*(_DWORD *)a1 != 6) + 2;
    v17 = 0;
    if ( *(_WORD *)(a1 + 8) )
    {
      do
      {
        v8 = v2;
        v9 = v3;
        v15 = 0;
        if ( v19 )
        {
          v10 = v19;
          v15 = v19;
          do
          {
            *v9++ = *v8;
            v8 += 2;
            --v10;
          }
          while ( v10 );
          v4 = v16;
        }
        if ( v15 < v18 )
        {
          v11 = (unsigned __int16)(v18 - v15) >> 1;
          memset(v9, 0, 4 * v11);
          v12 = &v9[2 * v11];
          for ( i = ((_BYTE)v18 - (_BYTE)v15) & 1; i; --i )
            *v12++ = 0;
        }
        v4 += *(_DWORD *)(a1 + 0x1C);
        v2 = (_WORD *)((char *)v2 + *(_DWORD *)(a1 + 0x18));
        v3 = (_WORD *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
        v14 = (unsigned __int16)(v17 + 1) < *(_WORD *)(a1 + 8);
        v16 = v4;
        ++v17;
      }
      while ( v14 );
    }
    return v4;
  }
  v5 = 0;
  if ( !*(_WORD *)(a1 + 8) )
    return v4;
  v6 = *(_DWORD *)(a1 + 0x1C);
  do
  {
    _memset(v3, 0, v6);
    v6 = *(_DWORD *)(a1 + 0x1C);
    v3 = (_WORD *)((char *)v3 + *(_DWORD *)(a1 + 0x20));
    ++v5;
    v4 += v6;
  }
  while ( (unsigned __int16)v5 < *(_WORD *)(a1 + 8) );
  return v4;
}
