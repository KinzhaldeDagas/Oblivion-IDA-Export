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

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71cf50*/
  v25 = *a6; /*0x71cf60*/
  v21 = *((_BYTE *)a6 + 0x12); /*0x71cf68*/
  v24 = *((_BYTE *)a6 + 0x16); /*0x71cf70*/
  v23 = *((_BYTE *)a6 + 0x15); /*0x71cf77*/
  v8 = *((_BYTE *)a6 + 0x14); /*0x71cf7e*/
  v9 = *((_BYTE *)a6 + 0x10); /*0x71cf82*/
  v22 = a6[2]; /*0x71cf86*/
  v26 = a6[1]; /*0x71cf8e*/
  v27 = *((_BYTE *)a6 + 0x11); /*0x71cf96*/
  v31 = &v33[-v7]; /*0x71cfad*/
  v10 = a6[3] & (0xFFu >> *((_BYTE *)a6 + 0x17) << *((_BYTE *)a6 + 0x13)); /*0x71cfb1*/
  v29 = &v34[-v7]; /*0x71cfba*/
  v28 = 0; /*0x71cfc4*/
  v11 = (unsigned __int8 *)(v7 + 1); /*0x71cfcc*/
  v30 = &v35[-v7]; /*0x71cfcf*/
  do /*0x71d105*/
  {
    *(_DWORD *)&v32[4 * v28] = v10 /*0x71d017*/
                             | v26 & (*v11 >> v23 << v27)
                             | v22 & (v11[1] >> v24 << v21)
                             | v25 & (v11[0xFFFFFFFF] >> v8 << v9);
    v12 = v11[8]; /*0x71d05d*/
    *(_DWORD *)&v11[(_DWORD)v31] = v10 /*0x71d063*/
                                 | v22 & (v11[5] >> v24 << v21)
                                 | v26 & (v11[4] >> v23 << v27)
                                 | v25 & (v11[3] >> v8 << v9);
    v13 = v22 & (v11[9] >> v24 << v21) | v26 & (v12 >> v23 << v27) | v25 & (v11[7] >> v8 << v9); /*0x71d0a2*/
    v14 = v11[0xC]; /*0x71d0a4*/
    *(_DWORD *)&v11[(_DWORD)v29] = v10 | v13; /*0x71d0aa*/
    v15 = v26 & (v14 >> v23 << v27) | v25 & (v11[0xB] >> v8 << v9); /*0x71d0d3*/
    v16 = v11[0xD] >> v24; /*0x71d0d9*/
    v11 += 0x10; /*0x71d0df*/
    *(_DWORD *)&v11[(_DWORD)v30 - 0x10] = v10 | v22 & (v16 << v21) | v15; /*0x71d0f0*/
    v28 += 4; /*0x71d101*/
  }
  while ( v28 < 0x100 ); /*0x71d105*/
  result = a4; /*0x71d114*/
  if ( a2 ) /*0x71d11c*/
  {
    v18 = a2; /*0x71d125*/
    do /*0x71d14d*/
    {
      if ( a1 ) /*0x71d132*/
      {
        v20 = a1; /*0x71d134*/
        do /*0x71d148*/
        {
          *result++ = *(_DWORD *)&v32[4 * *a7++]; /*0x71d13d*/
          --v20; /*0x71d145*/
        }
        while ( v20 ); /*0x71d148*/
      }
      --v18; /*0x71d14a*/
    }
    while ( v18 ); /*0x71d14d*/
  }
  return result; /*0x71d11b*/
}
