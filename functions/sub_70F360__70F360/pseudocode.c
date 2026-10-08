_BYTE *__cdecl sub_70F360(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6)
{
  int v6; // edi
  int v7; // edx
  char v8; // al
  BOOL v9; // ecx
  unsigned int v10; // eax
  char v11; // cl
  unsigned int v12; // ecx
  char v13; // al
  unsigned int v14; // ecx
  char v15; // al
  char v16; // cl
  unsigned int v17; // eax
  int v18; // esi
  int v19; // edx
  char *v20; // ecx
  int v21; // eax
  unsigned int v22; // ebx
  unsigned int v23; // ebp
  char v24; // dl
  int v25; // edi
  unsigned int v26; // esi
  int v27; // ecx
  _BYTE *v28; // eax
  int v29; // edx
  unsigned int v30; // ecx
  _BYTE *v31; // eax
  _DWORD v33[4]; // [esp+Ch] [ebp-20h] BYREF
  _DWORD v34[4]; // [esp+1Ch] [ebp-10h]

  v6 = a1; /*0x70f366*/
  InitSurfacEData((NiSurfaceData *)a1); /*0x70f36c*/
  v7 = a6; /*0x70f371*/
  v8 = a2; /*0x70f375*/
  v9 = a6 != 0; /*0x70f37f*/
  *(_BYTE *)a1 |= 1u; /*0x70f382*/
  *(_BYTE *)(a1 + 1) = v8; /*0x70f385*/
  v10 = a3; /*0x70f388*/
  *(_DWORD *)(a1 + 0xC) = 0xFFFFFFFF; /*0x70f38c*/
  *(_DWORD *)(a1 + 8) = 0; /*0x70f393*/
  v33[0] = v10; /*0x70f396*/
  *(_DWORD *)(a1 + 4) = v9; /*0x70f39a*/
  v11 = 0; /*0x70f39d*/
  for ( v34[0] = 0; v10; v10 >>= 1 ) /*0x70f3a5*/
    v11 += v10 & 1; /*0x70f3ac*/
  LOBYTE(a2) = v11; /*0x70f3b2*/
  v12 = a4; /*0x70f3b6*/
  v13 = 0; /*0x70f3ba*/
  v33[1] = a4; /*0x70f3be*/
  for ( v34[1] = 1; v12; v12 >>= 1 ) /*0x70f3ca*/
    v13 += v12 & 1; /*0x70f3d5*/
  v14 = a5; /*0x70f3db*/
  BYTE1(a2) = v13; /*0x70f3df*/
  v15 = 0; /*0x70f3e3*/
  v33[2] = a5; /*0x70f3e7*/
  for ( v34[2] = 2; v14; v14 >>= 1 ) /*0x70f3f3*/
    v15 += v14 & 1; /*0x70f3fa*/
  v16 = 0; /*0x70f400*/
  BYTE2(a2) = v15; /*0x70f404*/
  v33[3] = v7; /*0x70f408*/
  v34[3] = 3; /*0x70f40c*/
  v17 = v7; /*0x70f414*/
  if ( v7 ) /*0x70f416*/
  {
    do /*0x70f421*/
    {
      v16 += v17 & 1; /*0x70f41d*/
      v17 >>= 1; /*0x70f41f*/
    }
    while ( v17 ); /*0x70f421*/
  }
  v18 = 0; /*0x70f42c*/
  v19 = 4 - (_DWORD)v33; /*0x70f42e*/
  HIBYTE(a2) = v16; /*0x70f430*/
  a6 = 4 - (_DWORD)v33; /*0x70f434*/
  do /*0x70f4a0*/
  {
    if ( v33[v18] ) /*0x70f440*/
    {
      if ( v18 < 2 ) /*0x70f44d*/
      {
        v20 = (char *)&a2 + v18 + 1; /*0x70f44f*/
        v21 = (int)&v33[v18] + v19; /*0x70f453*/
        do /*0x70f492*/
        {
          v22 = v33[v18]; /*0x70f455*/
          v23 = *(_DWORD *)((char *)v33 + v21); /*0x70f459*/
          if ( v22 > v23 ) /*0x70f45f*/
          {
            v24 = *v20; /*0x70f461*/
            v25 = *(_DWORD *)((char *)v34 + v21); /*0x70f463*/
            *(_DWORD *)((char *)v33 + v21) = v22; /*0x70f467*/
            *v20 = *((_BYTE *)&a2 + v18); /*0x70f46f*/
            *(_DWORD *)((char *)v34 + v21) = v34[v18]; /*0x70f475*/
            v34[v18] = v25; /*0x70f479*/
            v6 = a1; /*0x70f47d*/
            v33[v18] = v23; /*0x70f481*/
            *((_BYTE *)&a2 + v18) = v24; /*0x70f485*/
          }
          v21 += 4; /*0x70f489*/
          ++v20; /*0x70f48c*/
        }
        while ( v21 < 0xC ); /*0x70f492*/
        v19 = a6; /*0x70f494*/
      }
    }
    ++v18; /*0x70f49a*/
  }
  while ( v18 < 3 ); /*0x70f4a0*/
  v26 = 0; /*0x70f4a2*/
  v27 = 0; /*0x70f4a4*/
  v28 = (_BYTE *)(v6 + 0x1C); /*0x70f4a6*/
  do /*0x70f4d6*/
  {
    if ( v33[v27] ) /*0x70f4b0*/
    {
      *v28 = *((_BYTE *)&a2 + v27); /*0x70f4ba*/
      v29 = v34[v27]; /*0x70f4bc*/
      v28[1] = 1; /*0x70f4c0*/
      *((_DWORD *)v28 + 0xFFFFFFFF) = 0; /*0x70f4c4*/
      *((_DWORD *)v28 + 0xFFFFFFFE) = v29; /*0x70f4c7*/
      ++v26; /*0x70f4ca*/
      v28 += 0xC; /*0x70f4cd*/
    }
    ++v27; /*0x70f4d0*/
  }
  while ( v27 < 4 ); /*0x70f4d6*/
  if ( v26 < 4 ) /*0x70f4db*/
  {
    v30 = 4 - v26; /*0x70f4e5*/
    v31 = (_BYTE *)(v6 + 0xC * v26 + 0x1C); /*0x70f4e7*/
    do /*0x70f508*/
    {
      v31[1] = 1; /*0x70f4f5*/
      *v31 = 0; /*0x70f4f9*/
      *((_DWORD *)v31 + 0xFFFFFFFF) = 5; /*0x70f4fc*/
      *((_DWORD *)v31 + 0xFFFFFFFE) = 0x13; /*0x70f4ff*/
      v31 += 0xC; /*0x70f502*/
      --v30; /*0x70f505*/
    }
    while ( v30 ); /*0x70f508*/
  }
  return (_BYTE *)v6; /*0x70f50c*/
}
