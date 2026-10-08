// Stock fallback mip synthesis averages RGBA independently with no alpha-coverage preservation. For cutout atlases this can drive terminal mip alpha below ref84 even when surviving high-resolution texels have correct nonblack RGB.
void *__thiscall OB_NiDevImageConverter_GenerateMipChain_Box_010201A0(
        void *this,
        void *srcPixelData,
        void *reusePixelData)
{
  _DWORD *v4; // ebx
  const void *v5; // esi
  _DWORD *v6; // ebp
  NiPixelData *v7; // eax
  NiPixelData *v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // ebx
  int v11; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // esi
  _BYTE *v15; // ecx
  unsigned __int8 *v16; // esi
  signed int *v17; // eax
  signed int v18; // edx
  signed int v19; // eax
  int v20; // edx
  signed int v21; // edi
  int v22; // edx
  int v23; // edi
  signed int i; // edi
  _BYTE *v25; // ecx
  signed int j; // edi
  _BYTE *v27; // ecx
  unsigned __int8 *v28; // eax
  int v29; // edi
  _BYTE *v30; // ecx
  unsigned int v31; // ebx
  int v32; // edx
  int v33; // eax
  int v34; // ecx
  int v35; // esi
  _BYTE *v36; // ecx
  unsigned __int8 *v37; // esi
  int *v38; // eax
  int v39; // edx
  int v40; // eax
  int v41; // edx
  int v42; // edi
  int v43; // edx
  int v44; // edi
  int k; // edi
  _BYTE *v46; // ecx
  int m; // edi
  _BYTE *v48; // ecx
  unsigned __int8 *v49; // eax
  int v50; // edi
  _BYTE *v51; // ecx
  unsigned int v53; // [esp+14h] [ebp-68h]
  signed int v54; // [esp+18h] [ebp-64h]
  signed int v55; // [esp+18h] [ebp-64h]
  signed int v56; // [esp+18h] [ebp-64h]
  signed int v57; // [esp+1Ch] [ebp-60h]
  int v58; // [esp+1Ch] [ebp-60h]
  signed int v59; // [esp+20h] [ebp-5Ch]
  int v60; // [esp+20h] [ebp-5Ch]
  int v62; // [esp+24h] [ebp-58h]
  int v63; // [esp+24h] [ebp-58h]
  int v64; // [esp+24h] [ebp-58h]
  int v65; // [esp+28h] [ebp-54h]
  int v66; // [esp+28h] [ebp-54h]
  NiSurfaceData v67; // [esp+2Ch] [ebp-50h] BYREF
  unsigned int v68; // [esp+78h] [ebp-4h]
  unsigned int reusePixelDataa; // [esp+84h] [ebp+8h]

  v4 = srcPixelData; /*0x71b8fd*/
  InitSurfacEData(&v67); /*0x71b90b*/
  if ( (*(unsigned __int8 (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x20))(this, (char *)srcPixelData + 8) ) /*0x71b918*/
  {
    v5 = &unk_B25E48; /*0x71b91e*/
  }
  else
  {
    if ( !(*(unsigned __int8 (__thiscall **)(void *, char *))(*(_DWORD *)this + 0x1C))(this, (char *)srcPixelData + 8) ) /*0x71b931*/
      return 0; /*0x71be10*/
    v5 = &unk_B25E00; /*0x71b937*/
  }
  v6 = reusePixelData; /*0x71b93c*/
  qmemcpy(&v67, v5, sizeof(v67)); /*0x71b94e*/
  if ( !reusePixelData /*0x71b96f*/
    || !sub_71AD40((_DWORD *)reusePixelData + 2, (int)&v67)
    || *((_DWORD *)reusePixelData + 0x18) <= 1u
    || *((_DWORD *)reusePixelData + 0x1B) != *((_DWORD *)srcPixelData + 0x1B) )
  {
    v7 = (NiPixelData *)FormHeapAlloc(0x70u); /*0x71b973*/
    v68 = 0; /*0x71b984*/
    if ( v7 ) /*0x71b98c*/
      v8 = NiPixelData::NiPixelData( /*0x71b9a7*/
             v7,
             **((_DWORD **)srcPixelData + 0x15),
             **((_DWORD **)srcPixelData + 0x16),
             (int)&v67,
             0,
             *((_DWORD *)srcPixelData + 0x1B)); // Constructs NiPixelData with requested levelCount=0. NiPixelData resolves zero to floor(log2(max(width,height)))+1 via 0x70E2F0.
    else
      v8 = 0; /*0x71b9ae*/
    v68 = 0xFFFFFFFF; /*0x71b9b0*/
    v6 = v8; /*0x71b9b8*/
  }
  v9 = v6[0x18]; /*0x71b9bc*/
  v53 = v9; /*0x71b9bf*/
  if ( srcPixelData != v6 /*0x71b9d6*/
    && !(*(unsigned __int8 (__thiscall **)(void *, _DWORD *, void *, _DWORD))(*(_DWORD *)this + 0x2C))(
          this,
          v6,
          srcPixelData,
          0) )
  {
    return 0; /*0x71b9d6*/
  }
  reusePixelDataa = 0; /*0x71b9e0*/
  if ( *((_DWORD *)srcPixelData + 0x1B) ) /*0x71b9dc*/
  {
    while ( 1 ) /*0x71b9f7*/
    {
      if ( sub_71AD40(&v67, (int)&unk_B25E48) ) /*0x71ba00*/
      {
        v10 = 1; /*0x71ba0d*/
        v62 = 1; /*0x71ba14*/
        if ( v9 > 1 ) /*0x71ba18*/
        {
          do /*0x71bbc0*/
          {
            v11 = v6[0x17]; /*0x71ba1e*/
            v12 = reusePixelDataa * *(_DWORD *)(v11 + 4 * v6[0x18]); /*0x71ba27*/
            v13 = v6[0x14]; /*0x71ba33*/
            v14 = v13 + *(_DWORD *)(v11 + 4 * v10 - 4); /*0x71ba36*/
            v15 = (_BYTE *)(*(_DWORD *)(v11 + 4 * v10) + v12 + v13); /*0x71ba3a*/
            v16 = (unsigned __int8 *)(v12 + v14); /*0x71ba40*/
            v17 = (signed int *)(v6[0x15] + 4 * v10); /*0x71ba42*/
            v18 = *v17; /*0x71ba45*/
            v19 = v17[0xFFFFFFFF]; /*0x71ba47*/
            v57 = v18; /*0x71ba4d*/
            v20 = v6[0x16]; /*0x71ba51*/
            v21 = *(_DWORD *)(v20 + 4 * v10); /*0x71ba54*/
            v22 = v20 + 4 * v10; /*0x71ba57*/
            v54 = v21; /*0x71ba5a*/
            v23 = 3 * v19; /*0x71ba5e*/
            v65 = 3 * v19; /*0x71ba61*/
            if ( v19 == 1 )                     // RGB one-dimensional mip tail: when previous width is 1, average two vertically adjacent RGB texels per output; this is a 1x2 filter, not a four-sample box. /*0x71ba65*/
            {
              for ( i = v54; i; --i ) /*0x71ba6d*/
              {
                *v15 = (*v16 + (unsigned int)v16[3]) >> 1; /*0x71ba7e*/
                v15[1] = (v16[1] + (unsigned int)v16[4]) >> 1; /*0x71ba8c*/
                v25 = v15 + 2; /*0x71ba9c*/
                *v25 = (v16[2] + (unsigned int)v16[5]) >> 1; /*0x71baa1*/
                v15 = v25 + 1; /*0x71baa3*/
                v16 += 6; /*0x71baa6*/
              }
            }
            else if ( *(_DWORD *)(v22 - 4) == 1 )// RGB one-dimensional mip tail: when previous height is 1, average two horizontally adjacent RGB texels per output; this is a 2x1 filter. /*0x71bab7*/
            {
              for ( j = v57; j; --j ) /*0x71babf*/
              {
                *v15 = (*v16 + (unsigned int)v16[3]) >> 1; /*0x71bad0*/
                v15[1] = (v16[1] + (unsigned int)v16[4]) >> 1; /*0x71bade*/
                v27 = v15 + 2; /*0x71baee*/
                *v27 = (v16[2] + (unsigned int)v16[5]) >> 1; /*0x71baf3*/
                v15 = v27 + 1; /*0x71baf5*/
                v16 += 6; /*0x71baf8*/
              }
            }
            else if ( v54 ) /*0x71bb0b*/
            {
              v59 = v54; /*0x71bb11*/
              do /*0x71bbaf*/
              {
                if ( v57 ) /*0x71bb26*/
                {
                  v28 = &v16[v23]; /*0x71bb2c*/
                  v29 = -v23; /*0x71bb2f*/
                  v55 = v57; /*0x71bb31*/
                  do /*0x71bb9e*/
                  {
                    *v15 = (*v16 + *v28 + v28[3] + (unsigned int)v28[v29 + 3]) >> 2;// RGB 2x2 box filter: each destination channel is the integer average of the four corresponding source bytes. /*0x71bb4d*/
                    v15[1] = (v28[1] + v28[4] + v28[v29 + 4] + (unsigned int)v28[v29 + 1]) >> 2; /*0x71bb6a*/
                    v30 = v15 + 2; /*0x71bb88*/
                    *v30 = (v28[2] + v28[5] + v28[v29 + 5] + (unsigned int)v28[v29 + 2]) >> 2; /*0x71bb8e*/
                    v15 = v30 + 1; /*0x71bb90*/
                    v16 += 6; /*0x71bb93*/
                    v28 += 6; /*0x71bb96*/
                    --v55; /*0x71bb99*/
                  }
                  while ( v55 ); /*0x71bb9e*/
                  v23 = v65; /*0x71bba0*/
                  v10 = v62; /*0x71bba4*/
                }
                v16 += v23; /*0x71bba8*/
                --v59; /*0x71bbaa*/
              }
              while ( v59 ); /*0x71bbaf*/
            }
            v62 = ++v10; /*0x71bbbc*/
          }
          while ( v10 < v53 ); /*0x71bbc0*/
        }
      }
      else
      {
        if ( !sub_71AD40(&v67, (int)&unk_B25E00) ) /*0x71bbdb*/
          goto LABEL_56; /*0x71bbdb*/
        v31 = 1; /*0x71bbe1*/
        v56 = 1; /*0x71bbe8*/
        if ( v9 > 1 ) /*0x71bbec*/
        {
          do /*0x71bde5*/
          {
            v32 = v6[0x17]; /*0x71bbf2*/
            v33 = reusePixelDataa * *(_DWORD *)(v32 + 4 * v6[0x18]); /*0x71bbfb*/
            v34 = v6[0x14]; /*0x71bc07*/
            v35 = v34 + *(_DWORD *)(v32 + 4 * v31 - 4); /*0x71bc0a*/
            v36 = (_BYTE *)(*(_DWORD *)(v32 + 4 * v31) + v33 + v34); /*0x71bc0e*/
            v37 = (unsigned __int8 *)(v33 + v35); /*0x71bc14*/
            v38 = (int *)(v6[0x15] + 4 * v31); /*0x71bc16*/
            v39 = *v38; /*0x71bc19*/
            v40 = v38[0xFFFFFFFF]; /*0x71bc1b*/
            v60 = v39; /*0x71bc21*/
            v41 = v6[0x16]; /*0x71bc25*/
            v42 = *(_DWORD *)(v41 + 4 * v31); /*0x71bc28*/
            v43 = v41 + 4 * v31; /*0x71bc2b*/
            v63 = v42; /*0x71bc2e*/
            v44 = 4 * v40; /*0x71bc32*/
            v66 = 4 * v40; /*0x71bc39*/
            if ( v40 == 1 )                     // RGBA one-dimensional mip tail: previous width 1 uses a two-sample vertical average for R,G,B,A independently. /*0x71bc3d*/
            {
              for ( k = v63; k; --k ) /*0x71bc45*/
              {
                *v36 = (*v37 + (unsigned int)v37[4]) >> 1; /*0x71bc5b*/
                v36[1] = (v37[1] + (unsigned int)v37[5]) >> 1; /*0x71bc69*/
                v46 = v36 + 1; /*0x71bc74*/
                v46[1] = (v37[2] + (unsigned int)v37[6]) >> 1; /*0x71bc7b*/
                v46 += 2; /*0x71bc8b*/
                *v46 = (v37[3] + (unsigned int)v37[7]) >> 1; /*0x71bc90*/
                v36 = v46 + 1; /*0x71bc92*/
                v37 += 8; /*0x71bc95*/
              }
            }
            else if ( *(_DWORD *)(v43 - 4) == 1 )// RGBA one-dimensional mip tail: previous height 1 uses a two-sample horizontal average for R,G,B,A independently. /*0x71bca6*/
            {
              for ( m = v60; m; --m ) /*0x71bcae*/
              {
                *v36 = (*v37 + (unsigned int)v37[4]) >> 1; /*0x71bcbf*/
                v36[1] = (v37[1] + (unsigned int)v37[5]) >> 1; /*0x71bccd*/
                v48 = v36 + 1; /*0x71bcd8*/
                v48[1] = (v37[2] + (unsigned int)v37[6]) >> 1; /*0x71bcdf*/
                v48 += 2; /*0x71bcef*/
                *v48 = (v37[3] + (unsigned int)v37[7]) >> 1; /*0x71bcf4*/
                v36 = v48 + 1; /*0x71bcf6*/
                v37 += 8; /*0x71bcf9*/
              }
            }
            else if ( v63 ) /*0x71bd0c*/
            {
              v58 = v63; /*0x71bd12*/
              do /*0x71bdd4*/
              {
                if ( v60 ) /*0x71bd26*/
                {
                  v49 = &v37[v44]; /*0x71bd2c*/
                  v50 = -v44; /*0x71bd2f*/
                  v64 = v60; /*0x71bd31*/
                  do /*0x71bdbf*/
                  {
                    *v36 = (*v49 + *v37 + v49[4] + (unsigned int)v49[v50 + 4]) >> 2;// RGBA 2x2 box filter: each destination channel is the integer average of the four corresponding source bytes. Alpha is treated exactly like R/G/B. /*0x71bd4d*/
                    v36[1] = (v49[1] + v49[5] + v49[v50 + 5] + (unsigned int)v49[v50 + 1]) >> 2; /*0x71bd6a*/
                    v51 = v36 + 1; /*0x71bd7d*/
                    v51[1] = (v49[2] + v49[6] + v49[v50 + 6] + (unsigned int)v49[v50 + 2]) >> 2; /*0x71bd8b*/
                    v51 += 2; /*0x71bda9*/
                    *v51 = (v49[3] + v49[7] + v49[v50 + 7] + (unsigned int)v49[v50 + 3]) >> 2; /*0x71bdaf*/
                    v36 = v51 + 1; /*0x71bdb1*/
                    v37 += 8; /*0x71bdb4*/
                    v49 += 8; /*0x71bdb7*/
                    --v64; /*0x71bdba*/
                  }
                  while ( v64 ); /*0x71bdbf*/
                  v44 = v66; /*0x71bdc5*/
                  v31 = v56; /*0x71bdc9*/
                }
                v37 += v44; /*0x71bdcd*/
                --v58; /*0x71bdcf*/
              }
              while ( v58 ); /*0x71bdd4*/
            }
            v56 = ++v31; /*0x71bde1*/
          }
          while ( v31 < v53 ); /*0x71bde5*/
        }
      }
      v4 = srcPixelData; /*0x71bdeb*/
LABEL_56:
      if ( ++reusePixelDataa >= v4[0x1B] ) /*0x71be06*/
        return v6; /*0x71be06*/
      v9 = v53; /*0x71b9f3*/
    }
  }
  return v6; /*0x71be12*/
}
