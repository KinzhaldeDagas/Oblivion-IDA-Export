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

  v6 = a1;
  InitSurfacEData((NiSurfaceData *)a1);
  v7 = a6;
  v8 = a2;
  v9 = a6 != 0;
  *(_BYTE *)a1 |= 1u;
  *(_BYTE *)(a1 + 1) = v8;
  v10 = a3;
  *(_DWORD *)(a1 + 0xC) = 0xFFFFFFFF;
  *(_DWORD *)(a1 + 8) = 0;
  v33[0] = v10;
  *(_DWORD *)(a1 + 4) = v9;
  v11 = 0;
  for ( v34[0] = 0; v10; v10 >>= 1 )
    v11 += v10 & 1;
  LOBYTE(a2) = v11;
  v12 = a4;
  v13 = 0;
  v33[1] = a4;
  for ( v34[1] = 1; v12; v12 >>= 1 )
    v13 += v12 & 1;
  v14 = a5;
  BYTE1(a2) = v13;
  v15 = 0;
  v33[2] = a5;
  for ( v34[2] = 2; v14; v14 >>= 1 )
    v15 += v14 & 1;
  v16 = 0;
  BYTE2(a2) = v15;
  v33[3] = v7;
  v34[3] = 3;
  v17 = v7;
  if ( v7 )
  {
    do
    {
      v16 += v17 & 1;
      v17 >>= 1;
    }
    while ( v17 );
  }
  v18 = 0;
  v19 = 4 - (_DWORD)v33;
  HIBYTE(a2) = v16;
  a6 = 4 - (_DWORD)v33;
  do
  {
    if ( v33[v18] )
    {
      if ( v18 < 2 )
      {
        v20 = (char *)&a2 + v18 + 1;
        v21 = (int)&v33[v18] + v19;
        do
        {
          v22 = v33[v18];
          v23 = *(_DWORD *)((char *)v33 + v21);
          if ( v22 > v23 )
          {
            v24 = *v20;
            v25 = *(_DWORD *)((char *)v34 + v21);
            *(_DWORD *)((char *)v33 + v21) = v22;
            *v20 = *((_BYTE *)&a2 + v18);
            *(_DWORD *)((char *)v34 + v21) = v34[v18];
            v34[v18] = v25;
            v6 = a1;
            v33[v18] = v23;
            *((_BYTE *)&a2 + v18) = v24;
          }
          v21 += 4;
          ++v20;
        }
        while ( v21 < 0xC );
        v19 = a6;
      }
    }
    ++v18;
  }
  while ( v18 < 3 );
  v26 = 0;
  v27 = 0;
  v28 = (_BYTE *)(v6 + 0x1C);
  do
  {
    if ( v33[v27] )
    {
      *v28 = *((_BYTE *)&a2 + v27);
      v29 = v34[v27];
      v28[1] = 1;
      *((_DWORD *)v28 + 0xFFFFFFFF) = 0;
      *((_DWORD *)v28 + 0xFFFFFFFE) = v29;
      ++v26;
      v28 += 0xC;
    }
    ++v27;
  }
  while ( v27 < 4 );
  if ( v26 < 4 )
  {
    v30 = 4 - v26;
    v31 = (_BYTE *)(v6 + 0xC * v26 + 0x1C);
    do
    {
      v31[1] = 1;
      *v31 = 0;
      *((_DWORD *)v31 + 0xFFFFFFFF) = 5;
      *((_DWORD *)v31 + 0xFFFFFFFE) = 0x13;
      v31 += 0xC;
      --v30;
    }
    while ( v30 );
  }
  return (_BYTE *)v6;
}
