void __cdecl sub_71C980(unsigned int a1, int a2, int a3, _DWORD *a4, int a5, int *a6, int a7)
{
  int v7; // ebp
  unsigned __int8 *v8; // eax
  unsigned int v9; // esi
  unsigned __int8 *v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // eax
  char v13; // si
  int v14; // edi
  char v15; // dl
  unsigned __int8 *v16; // eax
  unsigned int v17; // ebp
  int v18; // ebx
  int v19; // ebp
  int v20; // ebx
  unsigned int v21; // ebp
  int v23; // edi
  unsigned __int8 *v24; // ecx
  unsigned int v25; // edx
  char v26; // [esp+10h] [ebp-7Ch]
  char v27; // [esp+14h] [ebp-78h]
  int v28; // [esp+18h] [ebp-74h]
  char v29; // [esp+1Ch] [ebp-70h]
  char v30; // [esp+20h] [ebp-6Ch]
  int v31; // [esp+24h] [ebp-68h]
  char v32; // [esp+28h] [ebp-64h]
  char v33; // [esp+2Ch] [ebp-60h]
  int v34; // [esp+30h] [ebp-5Ch]
  unsigned int v35; // [esp+34h] [ebp-58h]
  char *v36; // [esp+38h] [ebp-54h]
  char *v37; // [esp+3Ch] [ebp-50h]
  char *v38; // [esp+40h] [ebp-4Ch]
  unsigned __int8 *v39; // [esp+44h] [ebp-48h]
  unsigned int i; // [esp+48h] [ebp-44h]
  _BYTE v41[2]; // [esp+4Ch] [ebp-40h]
  char v42[4]; // [esp+4Eh] [ebp-3Eh] BYREF
  char v43[4]; // [esp+52h] [ebp-3Ah] BYREF
  char v44[54]; // [esp+56h] [ebp-36h] BYREF

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71c98c*/
  v8 = (unsigned __int8 *)FormHeapAlloc(a2 * a1); /*0x71c9a5*/
  v9 = a2 * (a1 >> 1); /*0x71c9ac*/
  v10 = v8; /*0x71c9b2*/
  v11 = 0; /*0x71c9b4*/
  for ( i = (unsigned int)v8; v11 < v9; v8 = v12 + 1 ) /*0x71c9bc*/
  {
    *v8 = *(_BYTE *)(v11 + a7) >> 4; /*0x71c9cc*/
    v12 = v8 + 1; /*0x71c9d2*/
    *v12 = *(_BYTE *)(v11 + a7) & 0xF; /*0x71c9d8*/
    ++v11; /*0x71c9da*/
  }
  v32 = *((_BYTE *)a6 + 0x17); /*0x71c9ef*/
  v33 = *((_BYTE *)a6 + 0x13); /*0x71c9f7*/
  v34 = a6[3]; /*0x71c9fe*/
  v29 = *((_BYTE *)a6 + 0x16); /*0x71ca06*/
  v13 = *((_BYTE *)a6 + 0x10); /*0x71ca0e*/
  v14 = *a6; /*0x71ca12*/
  v30 = *((_BYTE *)a6 + 0x12); /*0x71ca14*/
  v31 = a6[2]; /*0x71ca1b*/
  v26 = *((_BYTE *)a6 + 0x15); /*0x71ca23*/
  v27 = *((_BYTE *)a6 + 0x11); /*0x71ca2b*/
  v36 = &v42[-v7]; /*0x71ca35*/
  v37 = &v43[-v7]; /*0x71ca3f*/
  v39 = v10; /*0x71ca43*/
  v15 = *((_BYTE *)a6 + 0x14); /*0x71ca47*/
  v28 = a6[1]; /*0x71ca54*/
  v35 = 0; /*0x71ca58*/
  v16 = (unsigned __int8 *)(v7 + 2); /*0x71ca60*/
  v38 = &v44[-v7]; /*0x71ca63*/
  do /*0x71cbeb*/
  {
    *(_DWORD *)&v41[4 * v35] = v31 & (*v16 >> v29 << v30) /*0x71cac6*/
                             | v34 & (v16[1] >> v32 << v33)
                             | v28 & (v16[0xFFFFFFFF] >> v26 << v27)
                             | v14 & (v16[0xFFFFFFFE] >> v15 << v13);
    v17 = v16[7]; /*0x71cb21*/
    *(_DWORD *)&v16[(_DWORD)v36] = v34 & (v16[5] >> v32 << v33) /*0x71cb25*/
                                 | v31 & (v16[4] >> v29 << v30)
                                 | v28 & (v16[3] >> v26 << v27)
                                 | v14 & (v16[2] >> v15 << v13);
    v18 = v31 & (v16[8] >> v29 << v30) | v28 & (v17 >> v26 << v27) | v14 & (v16[6] >> v15 << v13); /*0x71cb63*/
    v19 = v16[9] >> v32 << v33; /*0x71cb6f*/
    v16 += 0x10; /*0x71cb75*/
    v20 = v34 & v19 | v18; /*0x71cb7c*/
    v21 = v16[0xFFFFFFFB]; /*0x71cb7e*/
    *(_DWORD *)&v16[(_DWORD)v37 - 0x10] = v20; /*0x71cb82*/
    *(_DWORD *)&v16[(_DWORD)v38 - 0x10] = v34 & (v16[0xFFFFFFFD] >> v32 << v33) /*0x71cbd9*/
                                        | v31 & (v16[0xFFFFFFFC] >> v29 << v30)
                                        | v28 & (v21 >> v26 << v27)
                                        | v14 & (v16[0xFFFFFFFA] >> v15 << v13);
    v35 += 4; /*0x71cbe7*/
  }
  while ( v35 < 0x10 ); /*0x71cbeb*/
  if ( a2 ) /*0x71cc01*/
  {
    v23 = a2; /*0x71cc0a*/
    v24 = v39; /*0x71cc0c*/
    do /*0x71cc2d*/
    {
      if ( a1 ) /*0x71cc12*/
      {
        v25 = a1; /*0x71cc14*/
        do /*0x71cc28*/
        {
          *a4++ = *(_DWORD *)&v41[4 * *v24++]; /*0x71cc1d*/
          --v25; /*0x71cc25*/
        }
        while ( v25 ); /*0x71cc28*/
      }
      --v23; /*0x71cc2a*/
    }
    while ( v23 ); /*0x71cc2d*/
  }
  FormHeapFree(i); /*0x71cc34*/
}
