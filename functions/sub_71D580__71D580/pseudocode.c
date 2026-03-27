_DWORD *__cdecl sub_71D580(int a1, int a2, int a3, _DWORD *a4, int a5, int *a6, unsigned __int8 *a7)
{
  int v7; // ebp
  char v8; // dl
  char v9; // si
  int v10; // edi
  unsigned __int8 *v11; // eax
  unsigned int v12; // ebp
  int v13; // ebx
  int v14; // ebp
  int v15; // ebx
  unsigned int v16; // ebp
  _DWORD *result; // eax
  int v18; // edi
  int v20; // edx
  char v21; // [esp+10h] [ebp-434h]
  char v22; // [esp+14h] [ebp-430h]
  char v23; // [esp+18h] [ebp-42Ch]
  int v24; // [esp+1Ch] [ebp-428h]
  char v25; // [esp+20h] [ebp-424h]
  char v26; // [esp+24h] [ebp-420h]
  int v27; // [esp+28h] [ebp-41Ch]
  int v28; // [esp+2Ch] [ebp-418h]
  char v29; // [esp+30h] [ebp-414h]
  unsigned int v30; // [esp+34h] [ebp-410h]
  char *v31; // [esp+38h] [ebp-40Ch]
  char *v32; // [esp+3Ch] [ebp-408h]
  char *v33; // [esp+40h] [ebp-404h]
  _BYTE v34[2]; // [esp+44h] [ebp-400h]
  char v35[4]; // [esp+46h] [ebp-3FEh] BYREF
  char v36[4]; // [esp+4Ah] [ebp-3FAh] BYREF
  char v37[1014]; // [esp+4Eh] [ebp-3F6h] BYREF

  v7 = *(_DWORD *)(a5 + 0x14);
  v26 = *((_BYTE *)a6 + 0x17);
  v23 = *((_BYTE *)a6 + 0x13);
  v27 = a6[3];
  v21 = *((_BYTE *)a6 + 0x16);
  v8 = *((_BYTE *)a6 + 0x14);
  v22 = *((_BYTE *)a6 + 0x12);
  v24 = a6[2];
  v25 = *((_BYTE *)a6 + 0x15);
  v29 = *((_BYTE *)a6 + 0x11);
  v33 = &v35[-v7];
  v9 = *((_BYTE *)a6 + 0x10);
  v31 = &v36[-v7];
  v10 = *a6;
  v28 = a6[1];
  v30 = 0;
  v11 = (unsigned __int8 *)(v7 + 2);
  v32 = &v37[-v7];
  do
  {
    *(_DWORD *)&v34[4 * v30] = v24 & (*v11 >> v21 << v22)
                             | v28 & (v11[0xFFFFFFFF] >> v25 << v29)
                             | v10 & (v11[0xFFFFFFFE] >> v8 << v9)
                             | v27 & (v11[1] >> v26 << v23);
    v12 = v11[6];
    *(_DWORD *)&v11[(_DWORD)v33] = v24 & (v11[4] >> v21 << v22)
                                 | v28 & (v11[3] >> v25 << v29)
                                 | v10 & (v11[2] >> v8 << v9)
                                 | v27 & (v11[5] >> v26 << v23);
    v13 = v28 & (v11[7] >> v25 << v29) | v10 & (v12 >> v8 << v9) | v27 & (v11[9] >> v26 << v23);
    v14 = v11[8] >> v21 << v22;
    v11 += 0x10;
    v15 = v24 & v14 | v13;
    v16 = v11[0xFFFFFFFA];
    *(_DWORD *)&v11[(_DWORD)v31 - 0x10] = v15;
    *(_DWORD *)&v11[(_DWORD)v32 - 0x10] = v24 & (v11[0xFFFFFFFC] >> v21 << v22)
                                        | v28 & (v11[0xFFFFFFFB] >> v25 << v29)
                                        | v10 & (v16 >> v8 << v9)
                                        | v27 & (v11[0xFFFFFFFD] >> v26 << v23);
    v30 += 4;
  }
  while ( v30 < 0x100 );
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
          *result++ = *(_DWORD *)&v34[4 * *a7++];
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
