_DWORD *__cdecl sub_71CF40(int a1, int a2, int a3, _DWORD *a4, int a5, int *a6, unsigned __int8 *a7)
{
  int v7; // edi
  char v8; // bl
  char v9; // si
  unsigned int v10; // edx
  unsigned __int8 *v11; // eax
  unsigned int v12; // ebp
  int v13; // edi
  unsigned int v14; // ebp
  int v15; // edi
  int v16; // ebp
  _DWORD *result; // eax
  int v18; // edi
  int v20; // edx
  char v21; // [esp+10h] [ebp-42Ch]
  int v22; // [esp+14h] [ebp-428h]
  char v23; // [esp+18h] [ebp-424h]
  char v24; // [esp+1Ch] [ebp-420h]
  int v25; // [esp+20h] [ebp-41Ch]
  int v26; // [esp+24h] [ebp-418h]
  char v27; // [esp+28h] [ebp-414h]
  unsigned int v28; // [esp+2Ch] [ebp-410h]
  char *v29; // [esp+30h] [ebp-40Ch]
  char *v30; // [esp+34h] [ebp-408h]
  char *v31; // [esp+38h] [ebp-404h]
  _BYTE v32[3]; // [esp+3Ch] [ebp-400h]
  char v33[4]; // [esp+3Fh] [ebp-3FDh] BYREF
  char v34[4]; // [esp+43h] [ebp-3F9h] BYREF
  char v35[1013]; // [esp+47h] [ebp-3F5h] BYREF

  v7 = *(_DWORD *)(a5 + 0x14);
  v25 = *a6;
  v21 = *((_BYTE *)a6 + 0x12);
  v24 = *((_BYTE *)a6 + 0x16);
  v23 = *((_BYTE *)a6 + 0x15);
  v8 = *((_BYTE *)a6 + 0x14);
  v9 = *((_BYTE *)a6 + 0x10);
  v22 = a6[2];
  v26 = a6[1];
  v27 = *((_BYTE *)a6 + 0x11);
  v31 = &v33[-v7];
  v10 = a6[3] & (0xFFu >> *((_BYTE *)a6 + 0x17) << *((_BYTE *)a6 + 0x13));
  v29 = &v34[-v7];
  v28 = 0;
  v11 = (unsigned __int8 *)(v7 + 1);
  v30 = &v35[-v7];
  do
  {
    *(_DWORD *)&v32[4 * v28] = v10
                             | v26 & (*v11 >> v23 << v27)
                             | v22 & (v11[1] >> v24 << v21)
                             | v25 & (v11[0xFFFFFFFF] >> v8 << v9);
    v12 = v11[8];
    *(_DWORD *)&v11[(_DWORD)v31] = v10
                                 | v22 & (v11[5] >> v24 << v21)
                                 | v26 & (v11[4] >> v23 << v27)
                                 | v25 & (v11[3] >> v8 << v9);
    v13 = v22 & (v11[9] >> v24 << v21) | v26 & (v12 >> v23 << v27) | v25 & (v11[7] >> v8 << v9);
    v14 = v11[0xC];
    *(_DWORD *)&v11[(_DWORD)v29] = v10 | v13;
    v15 = v26 & (v14 >> v23 << v27) | v25 & (v11[0xB] >> v8 << v9);
    v16 = v11[0xD] >> v24;
    v11 += 0x10;
    *(_DWORD *)&v11[(_DWORD)v30 - 0x10] = v10 | v22 & (v16 << v21) | v15;
    v28 += 4;
  }
  while ( v28 < 0x100 );
  result = a4;
  if ( a2 )
  {
    v18 = a2;
    do
    {
      if ( a1 )
      {
        v20 = a1;
        do
        {
          *result++ = *(_DWORD *)&v32[4 * *a7++];
          --v20;
        }
        while ( v20 );
      }
      --v18;
    }
    while ( v18 );
  }
  return result;
}
