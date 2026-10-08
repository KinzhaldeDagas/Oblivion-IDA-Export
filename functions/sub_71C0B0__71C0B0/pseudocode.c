NiPixelData *__stdcall sub_71C0B0(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  unsigned int v3; // edi
  unsigned int v4; // esi
  _DWORD *v5; // ebp
  NiPixelData *v6; // eax
  NiPixelData *v7; // ebp
  unsigned int v8; // esi
  int v9; // edi
  int v10; // edx
  _BYTE *v11; // ecx
  int v12; // esi
  NiPixelData *v13; // eax
  NiPixelData *v14; // ebp
  unsigned int v15; // edi
  int v16; // esi
  int v17; // ecx
  _BYTE *v18; // edx
  NiPixelData *v19; // eax
  NiPixelData *v20; // eax
  int v21; // edx
  _BYTE *v22; // ecx
  int v23; // eax
  _BYTE *v24; // edi
  _BYTE *v25; // ebp
  _BYTE *v26; // edx
  int v27; // eax
  char v28; // al
  char v29; // bl
  _BYTE *v30; // ebx
  char v31; // bp
  bool v32; // zf
  unsigned int v34; // [esp+14h] [ebp-2Ch]
  int v35; // [esp+18h] [ebp-28h]
  int v36; // [esp+1Ch] [ebp-24h]
  NiPixelData *i; // [esp+20h] [ebp-20h]
  int v38; // [esp+24h] [ebp-1Ch]
  int v39; // [esp+24h] [ebp-1Ch]
  int v40; // [esp+24h] [ebp-1Ch]
  int v41; // [esp+28h] [ebp-18h]
  int v42; // [esp+28h] [ebp-18h]
  int v43; // [esp+2Ch] [ebp-14h]
  _BYTE *v44; // [esp+2Ch] [ebp-14h]
  int v45; // [esp+48h] [ebp+8h]
  int v46; // [esp+48h] [ebp+8h]
  int v47; // [esp+48h] [ebp+8h]

  v2 = (_DWORD *)a1; /*0x71c0d7*/
  v3 = **(_DWORD **)(a1 + 0x58); /*0x71c0e1*/
  v4 = **(_DWORD **)(a1 + 0x54); /*0x71c0e6*/
  v5 = (_DWORD *)(a1 + 8); /*0x71c0e8*/
  v34 = *(_DWORD *)(a1 + 0x60); /*0x71c0f2*/
  if ( sub_71AD40((_DWORD *)(a1 + 8), (int)&unk_B25E00) ) /*0x71c0f6*/
  {
    v6 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x71c105*/
    v7 = 0; /*0x71c111*/
    if ( v6 ) /*0x71c119*/
      v7 = NiPixelData::NiPixelData(v6, v4, v3, (int)&unk_B25F68, v34, 1); /*0x71c130*/
    v8 = 0; /*0x71c132*/
    for ( i = v7; v8 < v34; ++v8 ) /*0x71c13c*/
    {
      v9 = *(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 4 * v8); /*0x71c146*/
      v10 = *((_DWORD *)v7 + 0x14) + *(_DWORD *)(*((_DWORD *)v7 + 0x17) + 4 * v8); /*0x71c158*/
      v11 = (_BYTE *)(*(_DWORD *)(a1 + 0x50) + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * v8)); /*0x71c15b*/
      v45 = v9; /*0x71c160*/
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v8) ) /*0x71c149*/
      {
        v38 = *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v8); /*0x71c166*/
        do /*0x71c195*/
        {
          if ( v9 ) /*0x71c172*/
          {
            do /*0x71c18a*/
            {
              *(_BYTE *)(v10 + 2) = v11[3]; /*0x71c178*/
              *(_BYTE *)(v10 + 3) = *v11; /*0x71c17e*/
              v11 += 4; /*0x71c181*/
              v10 += 4; /*0x71c184*/
              --v9; /*0x71c187*/
            }
            while ( v9 ); /*0x71c18a*/
            v9 = v45; /*0x71c18c*/
          }
          --v38; /*0x71c190*/
        }
        while ( v38 ); /*0x71c195*/
      }
    }
    v12 = 4; /*0x71c1a0*/
    v35 = 4; /*0x71c1a5*/
  }
  else
  {
    if ( sub_71AD40(v5, (int)&unk_B25E48) && sub_71AD40(a2, (int)&unk_B25F68) ) /*0x71c1cb*/
    {
      v13 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x71c1da*/
      if ( v13 ) /*0x71c1f0*/
        v14 = NiPixelData::NiPixelData(v13, v4, v3, (int)&unk_B25F68, v34, 1); /*0x71c207*/
      else
        v14 = 0; /*0x71c20b*/
      v15 = 0; /*0x71c20d*/
      for ( i = v14; v15 < v34; ++v15 ) /*0x71c217*/
      {
        v16 = *(_DWORD *)(*(_DWORD *)(a1 + 0x54) + 4 * v15); /*0x71c22c*/
        v17 = *((_DWORD *)v14 + 0x14) + *(_DWORD *)(*((_DWORD *)v14 + 0x17) + 4 * v15); /*0x71c238*/
        v18 = (_BYTE *)(*(_DWORD *)(a1 + 0x50) + *(_DWORD *)(*(_DWORD *)(a1 + 0x5C) + 4 * v15)); /*0x71c23b*/
        v46 = v16; /*0x71c240*/
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v15) ) /*0x71c22f*/
        {
          v39 = *(_DWORD *)(*(_DWORD *)(a1 + 0x58) + 4 * v15); /*0x71c246*/
          do /*0x71c271*/
          {
            if ( v16 ) /*0x71c252*/
            {
              do /*0x71c266*/
              {
                *(_BYTE *)(v17 + 2) = 0xFF; /*0x71c254*/
                *(_BYTE *)(v17 + 3) = *v18; /*0x71c25a*/
                v18 += 3; /*0x71c25d*/
                v17 += 4; /*0x71c260*/
                --v16; /*0x71c263*/
              }
              while ( v16 ); /*0x71c266*/
              v16 = v46; /*0x71c268*/
            }
            --v39; /*0x71c26c*/
          }
          while ( v39 ); /*0x71c271*/
        }
      }
      v35 = 4; /*0x71c27c*/
    }
    else
    {
      if ( !sub_71AD40(v5, (int)&unk_B25E48) ) /*0x71c294*/
        return 0; /*0x71c475*/
      v19 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x71c29c*/
      if ( v19 ) /*0x71c2b3*/
        v20 = NiPixelData::NiPixelData(v19, v4, v3, (int)&unk_B25F20, v34, 1); /*0x71c2c5*/
      else
        v20 = 0; /*0x71c2cc*/
      i = v20; /*0x71c2ce*/
      v35 = 2; /*0x71c2d2*/
    }
    v12 = 3; /*0x71c2d6*/
  }
  v21 = 0; /*0x71c2db*/
  v36 = 0; /*0x71c2e1*/
  if ( v34 ) /*0x71c2e5*/
  {
    while ( 1 ) /*0x71c302*/
    {
      v22 = (_BYTE *)(*((_DWORD *)i + 0x14) + *(_DWORD *)(*((_DWORD *)i + 0x17) + 4 * v21)); /*0x71c302*/
      v23 = *(_DWORD *)(v2[0x15] + 4 * v21); /*0x71c308*/
      v24 = (_BYTE *)(v2[0x14] + *(_DWORD *)(v2[0x17] + 4 * v21)); /*0x71c311*/
      v47 = v23 - 1; /*0x71c31c*/
      v25 = &v24[v23 * v12]; /*0x71c32a*/
      v26 = &v24[v12]; /*0x71c32f*/
      v40 = 0; /*0x71c332*/
      if ( *(_DWORD *)(v2[0x16] + 4 * v36) == 1 ) /*0x71c33a*/
      {
        v27 = v23 - 1; /*0x71c3ca*/
      }
      else
      {
        v43 = *(_DWORD *)(v2[0x16] + 4 * v36) - 1; /*0x71c340*/
        v40 = v43; /*0x71c344*/
        v27 = v23 - 1; /*0x71c348*/
        do /*0x71c3c6*/
        {
          if ( !v27 ) /*0x71c352*/
            goto LABEL_43; /*0x71c352*/
          v41 = v27; /*0x71c354*/
          do /*0x71c392*/
          {
            v28 = *v25 - *v24; /*0x71c37a*/
            *v22 = *v26 - *v24; /*0x71c37e*/
            v22[1] = v28; /*0x71c380*/
            v22 += v35; /*0x71c383*/
            v24 += v12; /*0x71c387*/
            v26 += v12; /*0x71c389*/
            v25 += v12; /*0x71c38b*/
            --v41; /*0x71c38d*/
          }
          while ( v41 ); /*0x71c392*/
          v27 = v47; /*0x71c394*/
          if ( v47 ) /*0x71c39a*/
          {
            v27 = v47; /*0x71c3a4*/
            *v22 = *v24 - v24[-v12]; /*0x71c3a8*/
          }
          else
          {
LABEL_43:
            *v22 = 0; /*0x71c3ac*/
          }
          v29 = *v25 - *v24; /*0x71c3b2*/
          v24 += v12; /*0x71c3b4*/
          v22[1] = v29; /*0x71c3b6*/
          v22 += v35; /*0x71c3b9*/
          v26 += v12; /*0x71c3bd*/
          v25 += v12; /*0x71c3bf*/
          --v43; /*0x71c3c1*/
        }
        while ( v43 ); /*0x71c3c6*/
      }
      v30 = &v24[-(v12 * (v27 + 1))]; /*0x71c3d6*/
      v44 = v30; /*0x71c3da*/
      if ( !v27 ) /*0x71c3de*/
        goto LABEL_53; /*0x71c3de*/
      v42 = v27; /*0x71c3e0*/
      do /*0x71c420*/
      {
        v31 = *v24 - *v30; /*0x71c3f2*/
        *v22 = *v26 - *v24; /*0x71c404*/
        v22[1] = v31; /*0x71c40a*/
        v22 += v35; /*0x71c40d*/
        v30 = &v44[v12]; /*0x71c411*/
        v24 += v12; /*0x71c413*/
        v26 += v12; /*0x71c415*/
        v32 = v42-- == 1; /*0x71c417*/
        v44 += v12; /*0x71c41c*/
      }
      while ( !v32 ); /*0x71c420*/
      if ( v47 ) /*0x71c427*/
      {
        *v22 = *v24 - v24[-v12]; /*0x71c436*/
        if ( v40 ) /*0x71c438*/
        {
          v22[1] = *v24 - *v30; /*0x71c43e*/
          goto LABEL_56; /*0x71c441*/
        }
      }
      else
      {
LABEL_53:
        *v22 = 0; /*0x71c448*/
        if ( v40 ) /*0x71c44b*/
        {
          v22[1] = *v24 - *v30; /*0x71c451*/
          goto LABEL_56; /*0x71c454*/
        }
      }
      v22[1] = 0; /*0x71c456*/
LABEL_56:
      if ( ++v36 >= v34 ) /*0x71c469*/
        return i; /*0x71c469*/
      v2 = (_DWORD *)a1; /*0x71c2f0*/
      v21 = v36; /*0x71c2f4*/
    }
  }
  return i; /*0x71c477*/
}
