int __cdecl sub_8D3CF0(float *a1, int a2, float a3, _DWORD *a4, _DWORD *a5, int a6, int a7)
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

  v7 = a4; /*0x8d3cf3*/
  result = 0; /*0x8d3cfd*/
  for ( i = 0; i < a4[1]; ++i ) /*0x8d3d05*/
  {
    v9 = *(_DWORD *)(*v7 + 4 * result); /*0x8d3d22*/
    v10 = *(unsigned __int16 *)(v9 + 0x8C); /*0x8d3d25*/
    if ( !*(_BYTE *)(*a5 + v10) ) /*0x8d3d32*/
    {
      *(_BYTE *)(v10 + *a5) = 1; /*0x8d3d3f*/
      sub_8DD150((__m128 *)(*(_DWORD *)(v9 + 0x50) + 0x50), a3, (__m128 *)(*(_DWORD *)(v9 + 0x50) + 0x10)); /*0x8d3d4e*/
    }
    *(_BYTE *)(*(unsigned __int16 *)(v9 + 0x8C) + *a5) = 8; /*0x8d3d64*/
    sub_8D3850(v9, a2, a1, a3, a5); /*0x8d3d74*/
    v20 = 0; /*0x8d3d81*/
    if ( *(int *)(v9 + 0x6C) > 0 ) /*0x8d3d85*/
    {
      v19 = 0; /*0x8d3d8b*/
      do /*0x8d3ec0*/
      {
        v11 = (_DWORD *)(v19 + *(_DWORD *)(v9 + 0x68)); /*0x8d3d9b*/
        if ( a2 <= *(unsigned __int8 *)(*v11 + 0x18) ) /*0x8d3da5*/
        {
          v12 = v9 ^ v11[1] ^ v11[2]; /*0x8d3db1*/
          if ( *(_BYTE *)(v12 + 0x91) ) /*0x8d3db3*/
          {
            if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) ) /*0x8d3dca*/
              sub_8A6EE0((const void **)a7, 4); /*0x8d3dcf*/
            *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v11; /*0x8d3dde*/
          }
          else if ( *(_BYTE *)(*(unsigned __int16 *)(v12 + 0x8C) + *a5) != 8 ) /*0x8d3dfa*/
          {
            if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) ) /*0x8d3e0e*/
              sub_8A6EE0((const void **)a7, 4); /*0x8d3e13*/
            *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v11; /*0x8d3e22*/
            if ( *(_BYTE *)(*(unsigned __int16 *)(v12 + 0x8C) + *a5) < 2u ) /*0x8d3e3d*/
            {
              if ( *(_DWORD *)(a6 + 4) == (*(_DWORD *)(a6 + 8) & 0x3FFFFFFF) ) /*0x8d3e51*/
                sub_8A6EE0((const void **)a6, 4); /*0x8d3e56*/
              *(_DWORD *)(*(_DWORD *)a6 + 4 * (*(_DWORD *)(a6 + 4))++) = v12; /*0x8d3e63*/
              v13 = *(unsigned __int16 *)(v12 + 0x8C); /*0x8d3e69*/
              if ( !*(_BYTE *)(*a5 + v13) ) /*0x8d3e76*/
              {
                *(_BYTE *)(v13 + *a5) = 1; /*0x8d3e83*/
                sub_8DD150((__m128 *)(*(_DWORD *)(v12 + 0x50) + 0x50), a3, (__m128 *)(*(_DWORD *)(v12 + 0x50) + 0x10)); /*0x8d3e92*/
              }
              *(_BYTE *)(*(unsigned __int16 *)(v12 + 0x8C) + *a5) = 2; /*0x8d3ea3*/
            }
          }
        }
        v14 = ++v20 < *(_DWORD *)(v9 + 0x6C); /*0x8d3eb6*/
        v19 += 0x1C; /*0x8d3ebc*/
      }
      while ( v14 ); /*0x8d3ec0*/
    }
    v15 = 0; /*0x8d3ec9*/
    for ( j = 0; j < *(_DWORD *)(v9 + 0x78); ++j ) /*0x8d3ed1*/
    {
      v16 = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v9 + 0x74) + 4 * v15) + 0x24); /*0x8d3edd*/
      if ( a2 <= *(unsigned __int8 *)(*v16 + 0x18) ) /*0x8d3eea*/
      {
        v17 = v9 ^ v16[1] ^ v16[2]; /*0x8d3ef6*/
        if ( *(_BYTE *)(v17 + 0x91) ) /*0x8d3ef8*/
        {
          if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) ) /*0x8d3f10*/
            sub_8A6EE0((const void **)a7, 4); /*0x8d3f15*/
          *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v16; /*0x8d3f24*/
        }
        else if ( *(_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5) != 8 ) /*0x8d3f40*/
        {
          if ( *(_DWORD *)(a7 + 4) == (*(_DWORD *)(a7 + 8) & 0x3FFFFFFF) ) /*0x8d3f53*/
            sub_8A6EE0((const void **)a7, 4); /*0x8d3f58*/
          *(_DWORD *)(*(_DWORD *)a7 + 4 * (*(_DWORD *)(a7 + 4))++) = *v16; /*0x8d3f67*/
          if ( *(_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5) < 2u ) /*0x8d3f82*/
          {
            if ( *(_DWORD *)(a6 + 4) == (*(_DWORD *)(a6 + 8) & 0x3FFFFFFF) ) /*0x8d3f96*/
              sub_8A6EE0((const void **)a6, 4); /*0x8d3f9b*/
            *(_DWORD *)(*(_DWORD *)a6 + 4 * (*(_DWORD *)(a6 + 4))++) = v17; /*0x8d3fa8*/
            v18 = (_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5); /*0x8d3fbb*/
            if ( !*v18 ) /*0x8d3fbe*/
            {
              *v18 = 1; /*0x8d3fc7*/
              sub_8DD150((__m128 *)(*(_DWORD *)(v17 + 0x50) + 0x50), a3, (__m128 *)(*(_DWORD *)(v17 + 0x50) + 0x10)); /*0x8d3fd6*/
            }
            *(_BYTE *)(*(unsigned __int16 *)(v17 + 0x8C) + *a5) = 2; /*0x8d3fe7*/
          }
        }
      }
      v15 = j + 1; /*0x8d3ff2*/
    }
    v7 = a4; /*0x8d4003*/
    result = i + 1; /*0x8d400a*/
  }
  return result; /*0x8d401a*/
}
