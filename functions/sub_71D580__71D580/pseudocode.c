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

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71d591*/
  v26 = *((_BYTE *)a6 + 0x17); /*0x71d59f*/
  v23 = *((_BYTE *)a6 + 0x13); /*0x71d5a7*/
  v27 = a6[3]; /*0x71d5ae*/
  v21 = *((_BYTE *)a6 + 0x16); /*0x71d5b6*/
  v8 = *((_BYTE *)a6 + 0x14); /*0x71d5be*/
  v22 = *((_BYTE *)a6 + 0x12); /*0x71d5c2*/
  v24 = a6[2]; /*0x71d5c9*/
  v25 = *((_BYTE *)a6 + 0x15); /*0x71d5d1*/
  v29 = *((_BYTE *)a6 + 0x11); /*0x71d5d9*/
  v33 = &v35[-v7]; /*0x71d5e3*/
  v9 = *((_BYTE *)a6 + 0x10); /*0x71d5ed*/
  v31 = &v36[-v7]; /*0x71d5f1*/
  v10 = *a6; /*0x71d5f5*/
  v28 = a6[1]; /*0x71d600*/
  v30 = 0; /*0x71d604*/
  v11 = (unsigned __int8 *)(v7 + 2); /*0x71d60c*/
  v32 = &v37[-v7]; /*0x71d60f*/
  do /*0x71d791*/
  {
    *(_DWORD *)&v34[4 * v30] = v24 & (*v11 >> v21 << v22) /*0x71d669*/
                             | v28 & (v11[0xFFFFFFFF] >> v25 << v29)
                             | v10 & (v11[0xFFFFFFFE] >> v8 << v9)
                             | v27 & (v11[1] >> v26 << v23);
    v12 = v11[6]; /*0x71d6c4*/
    *(_DWORD *)&v11[(_DWORD)v33] = v24 & (v11[4] >> v21 << v22) /*0x71d6c8*/
                                 | v28 & (v11[3] >> v25 << v29)
                                 | v10 & (v11[2] >> v8 << v9)
                                 | v27 & (v11[5] >> v26 << v23);
    v13 = v28 & (v11[7] >> v25 << v29) | v10 & (v12 >> v8 << v9) | v27 & (v11[9] >> v26 << v23); /*0x71d706*/
    v14 = v11[8] >> v21 << v22; /*0x71d712*/
    v11 += 0x10; /*0x71d718*/
    v15 = v24 & v14 | v13; /*0x71d71f*/
    v16 = v11[0xFFFFFFFA]; /*0x71d721*/
    *(_DWORD *)&v11[(_DWORD)v31 - 0x10] = v15; /*0x71d725*/
    *(_DWORD *)&v11[(_DWORD)v32 - 0x10] = v24 & (v11[0xFFFFFFFC] >> v21 << v22) /*0x71d77c*/
                                        | v28 & (v11[0xFFFFFFFB] >> v25 << v29)
                                        | v10 & (v16 >> v8 << v9)
                                        | v27 & (v11[0xFFFFFFFD] >> v26 << v23);
    v30 += 4; /*0x71d78d*/
  }
  while ( v30 < 0x100 ); /*0x71d791*/
  result = a4; /*0x71d7a0*/
  if ( a2 ) /*0x71d7a7*/
  {
    v18 = a2; /*0x71d7b0*/
    do /*0x71d7dd*/
    {
      if ( a1 ) /*0x71d7c2*/
      {
        v20 = a1; /*0x71d7c4*/
        do /*0x71d7d8*/
        {
          *result++ = *(_DWORD *)&v34[4 * *a7++]; /*0x71d7cd*/
          --v20; /*0x71d7d5*/
        }
        while ( v20 ); /*0x71d7d8*/
      }
      --v18; /*0x71d7da*/
    }
    while ( v18 ); /*0x71d7dd*/
  }
  return result; /*0x71d7df*/
}
