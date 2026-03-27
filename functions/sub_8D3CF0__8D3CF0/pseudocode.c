int __cdecl sub_8D3CF0(int *a1, int a2, float a3, _DWORD *a4, _DWORD *a5, int a6, int a7)
{
  _DWORD *v7; // ecx
  int result; // eax
  int v9; // ebp
  int v10; // edx
  _DWORD *v11; // ebx
  int v12; // esi
  int v13; // edx
  bool v14; // cc
  int v15; // eax
  _DWORD *v16; // ebx
  int v17; // esi
  _BYTE *v18; // eax
  int v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  int j; // [esp+8h] [ebp-8h]
  int i; // [esp+Ch] [ebp-4h]

  v7 = a4;
  result = 0;
  for ( i = 0; i < a4[1]; ++i )
  {
    v9 = *(_DWORD *)(*v7 + 4 * result);
    v10 = *(unsigned __int16 *)(v9 + 0x8C);
    if ( !*(_BYTE *)(*a5 + v10) )
    {
      *(_BYTE *)(v10 + *a5) = 1;
      sub_8DD150(*(_DWORD *)(v9 + 0x50) + 0x50, a3, *(_DWORD *)(v9 + 0x50) + 0x10);
    }
    *(_BYTE *)(*(unsigned __int16 *)(v9 + 0x8C) + *a5) = 8;
    sub_8D3850(v9, a2, a1, a3, a5);
    v20 = 0;
    if ( *(int *)(v9 + 0x6C) > 0 )
    {
      v19 = 0;
      do
      {
        v11 = (_DWORD *)(v19 + *(_DWORD *)(v9 + 0x68));
        if ( a2 <= *(unsigned __int8 *)(*v11 + 0x18) )
        {
          v12 = v9 ^ v11[1] ^ v11[2];
          if ( *(_BYTE *)(v12 + 0x91) )
          {
            if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)a7, 4);
            *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v11;
          }
          else if ( *(_BYTE *)(*(unsigned __int16 *)(v12 + 0x8C) + *a5) != 8 )
          {
            if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)a7, 4);
            *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v11;
            if ( *(_BYTE *)(*(unsigned __int16 *)(v12 + 0x8C) + *a5) < 2u )
            {
              if ( *(_DWORD *)(a6 + 4) == (*(_DWORD *)(a6 + 8) & 0x3FFFFFFF) )
                sub_8A6EE0((const void **)a6, 4);
              *(_DWORD *)(*(_DWORD *)a6 + 4 * (*(_DWORD *)(a6 + 4))++) = v12;
              v13 = *(unsigned __int16 *)(v12 + 0x8C);
              if ( !*(_BYTE *)(*a5 + v13) )
              {
                *(_BYTE *)(v13 + *a5) = 1;
                sub_8DD150(*(_DWORD *)(v12 + 0x50) + 0x50, a3, *(_DWORD *)(v12 + 0x50) + 0x10);
              }
              *(_BYTE *)(*(unsigned __int16 *)(v12 + 0x8C) + *a5) = 2;
            }
          }
        }
        v14 = ++v20 < *(_DWORD *)(v9 + 0x6C);
        v19 += 0x1C;
      }
      while ( v14 );
    }
    v15 = 0;
    for ( j = 0; j < *(_DWORD *)(v9 + 0x78); ++j )
    {
      v16 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v9 + 0x74) + 4 * v15) + 0x24);
      if ( a2 <= *(unsigned __int8 *)(*v16 + 0x18) )
      {
        v17 = v9 ^ v16[1] ^ v16[2];
        if ( *(_BYTE *)(v17 + 0x91) )
        {
          if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)a7, 4);
          *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v16;
        }
        else if ( *(_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5) != 8 )
        {
          if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)a7, 4);
          *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v16;
          if ( *(_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5) < 2u )
          {
            if ( *(_DWORD *)(a6 + 4) == (*(_DWORD *)(a6 + 8) & 0x3FFFFFFF) )
              sub_8A6EE0((const void **)a6, 4);
            *(_DWORD *)(*(_DWORD *)a6 + 4 * (*(_DWORD *)(a6 + 4))++) = v17;
            v18 = (_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5);
            if ( !*v18 )
            {
              *v18 = 1;
              sub_8DD150(*(_DWORD *)(v17 + 0x50) + 0x50, a3, *(_DWORD *)(v17 + 0x50) + 0x10);
            }
            *(_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5) = 2;
          }
        }
      }
      v15 = j + 1;
    }
    v7 = a4;
    result = i + 1;
  }
  return result;
}
