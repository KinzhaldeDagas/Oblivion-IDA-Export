void __cdecl sub_71C5C0(unsigned int a1, int a2, int a3, _DWORD *a4, int a5, int *a6, int a7)
{
  int v7; // edi
  unsigned __int8 *v8; // eax
  unsigned int v9; // esi
  unsigned __int8 *v10; // edx
  unsigned int v11; // ecx
  _BYTE *v12; // eax
  char v13; // bl
  char v14; // si
  unsigned int v15; // edx
  unsigned __int8 *v16; // eax
  unsigned int v17; // ebp
  int v18; // edi
  unsigned int v19; // ebp
  int v20; // edi
  int v21; // ebp
  int v23; // edi
  unsigned __int8 *v24; // ecx
  unsigned int v25; // edx
  int v26; // [esp+10h] [ebp-74h]
  char v27; // [esp+14h] [ebp-70h]
  char v28; // [esp+18h] [ebp-6Ch]
  int v29; // [esp+1Ch] [ebp-68h]
  char v30; // [esp+20h] [ebp-64h]
  char v31; // [esp+24h] [ebp-60h]
  int v32; // [esp+28h] [ebp-5Ch]
  unsigned int v33; // [esp+2Ch] [ebp-58h]
  char *v34; // [esp+30h] [ebp-54h]
  char *v35; // [esp+34h] [ebp-50h]
  char *v36; // [esp+38h] [ebp-4Ch]
  unsigned __int8 *v37; // [esp+3Ch] [ebp-48h]
  unsigned int i; // [esp+40h] [ebp-44h]
  _BYTE v39[3]; // [esp+44h] [ebp-40h]
  char v40[4]; // [esp+47h] [ebp-3Dh] BYREF
  char v41[4]; // [esp+4Bh] [ebp-39h] BYREF
  char v42[53]; // [esp+4Fh] [ebp-35h] BYREF

  v7 = *(_DWORD *)(a5 + 0x14); /*0x71c5e1*/
  v8 = (unsigned __int8 *)FormHeapAlloc(a2 * a1); /*0x71c5e5*/
  v9 = a2 * (a1 >> 1); /*0x71c5ec*/
  v10 = v8; /*0x71c5f2*/
  v11 = 0; /*0x71c5f4*/
  for ( i = (unsigned int)v8; v11 < v9; v8 = v12 + 1 ) /*0x71c5fc*/
  {
    *v8 = *(_BYTE *)(v11 + a7) >> 4; /*0x71c60c*/
    v12 = v8 + 1; /*0x71c612*/
    *v12 = *(_BYTE *)(v11 + a7) & 0xF; /*0x71c618*/
    ++v11; /*0x71c61a*/
  }
  v37 = v10; /*0x71c62f*/
  v26 = *a6; /*0x71c635*/
  v30 = *((_BYTE *)a6 + 0x16); /*0x71c63d*/
  v32 = a6[2]; /*0x71c644*/
  v31 = *((_BYTE *)a6 + 0x12); /*0x71c64c*/
  v13 = *((_BYTE *)a6 + 0x14); /*0x71c654*/
  v14 = *((_BYTE *)a6 + 0x10); /*0x71c658*/
  v28 = *((_BYTE *)a6 + 0x11); /*0x71c65c*/
  v27 = *((_BYTE *)a6 + 0x15); /*0x71c664*/
  v29 = a6[1]; /*0x71c66b*/
  v34 = &v40[-v7]; /*0x71c682*/
  v15 = a6[3] & (0xFFu >> *((_BYTE *)a6 + 0x17) << *((_BYTE *)a6 + 0x13)); /*0x71c686*/
  v35 = &v41[-v7]; /*0x71c68f*/
  v33 = 0; /*0x71c699*/
  v16 = (unsigned __int8 *)(v7 + 1); /*0x71c6a1*/
  v36 = &v42[-v7]; /*0x71c6a4*/
  do /*0x71c7de*/
  {
    *(_DWORD *)&v39[4 * v33] = v15 /*0x71c6f3*/
                             | v29 & (*v16 >> v27 << v28)
                             | v32 & (v16[1] >> v30 << v31)
                             | v26 & (v16[0xFFFFFFFF] >> v13 << v14);
    v17 = v16[8]; /*0x71c739*/
    *(_DWORD *)&v16[(_DWORD)v34] = v15 /*0x71c73f*/
                                 | v32 & (v16[5] >> v30 << v31)
                                 | v29 & (v16[4] >> v27 << v28)
                                 | v26 & (v16[3] >> v13 << v14);
    v18 = v32 & (v16[9] >> v30 << v31) | v29 & (v17 >> v27 << v28) | v26 & (v16[7] >> v13 << v14); /*0x71c77e*/
    v19 = v16[0xC]; /*0x71c780*/
    *(_DWORD *)&v16[(_DWORD)v35] = v15 | v18; /*0x71c786*/
    v20 = v29 & (v19 >> v27 << v28) | v26 & (v16[0xB] >> v13 << v14); /*0x71c7af*/
    v21 = v16[0xD] >> v30; /*0x71c7b5*/
    v16 += 0x10; /*0x71c7bb*/
    *(_DWORD *)&v16[(_DWORD)v36 - 0x10] = v15 | v32 & (v21 << v31) | v20; /*0x71c7cc*/
    v33 += 4; /*0x71c7da*/
  }
  while ( v33 < 0x10 ); /*0x71c7de*/
  if ( a2 ) /*0x71c7f4*/
  {
    v23 = a2; /*0x71c7fd*/
    v24 = v37; /*0x71c7ff*/
    do /*0x71c827*/
    {
      if ( a1 ) /*0x71c805*/
      {
        v25 = a1; /*0x71c807*/
        do /*0x71c822*/
        {
          *a4++ = *(_DWORD *)&v39[4 * *v24++]; /*0x71c817*/
          --v25; /*0x71c81f*/
        }
        while ( v25 ); /*0x71c822*/
      }
      --v23; /*0x71c824*/
    }
    while ( v23 ); /*0x71c827*/
  }
  FormHeapFree(i); /*0x71c82e*/
}
