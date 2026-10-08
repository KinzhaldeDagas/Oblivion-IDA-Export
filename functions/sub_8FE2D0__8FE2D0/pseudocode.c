unsigned int __cdecl sub_8FE2D0(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  __int32 v15; // eax
  __int32 *v16; // esi
  int i; // edi
  __m128 ***v18; // eax
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  float v21; // xmm2_4
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  long double v26; // st7
  __int32 v27; // ecx
  __int32 v28; // eax
  int v29; // edi
  __int32 v30; // ecx
  __int32 j; // eax
  __int32 v32; // ecx
  __int32 k; // eax
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st7
  double v38; // st6
  _DWORD *v39; // ecx
  int v40; // eax
  int v41; // edi
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  _DWORD *v44; // ecx
  int v45; // eax
  int v46; // edi
  _DWORD *v47; // ecx
  unsigned __int64 v48; // rax
  _BYTE *v49; // ebx
  int v50; // edi
  int v51; // eax
  _DWORD *v52; // eax
  int v53; // ecx
  int v54; // edx
  int v55; // edi
  _DWORD *v56; // eax
  _DWORD *v57; // ecx
  int v58; // eax
  int v59; // edi
  _DWORD *v60; // ecx
  unsigned __int64 v61; // rax
  _BYTE *v62; // ebx
  int v63; // edi
  int v64; // eax
  _DWORD *v65; // eax
  int v66; // ecx
  int v67; // edx
  int v68; // edi
  _DWORD *v69; // eax
  float **v70; // edx
  _DWORD *v71; // ebx
  float *v72; // edi
  int v73; // ecx
  __m128 v74; // xmm0
  unsigned __int8 v75; // al
  double v76; // st7
  __m128 *v77; // eax
  int v78; // edx
  __m128 v79; // xmm1
  __m128 v80; // xmm2
  __m128 v81; // xmm3
  __m128 v82; // xmm4
  int v83; // ebx
  __m128 *v84; // ecx
  char *v85; // ebx
  __m128 *v86; // eax
  int v87; // edx
  __m128 v88; // xmm1
  __m128 v89; // xmm2
  __m128 v90; // xmm3
  __m128 v91; // xmm4
  __m128 *v92; // ecx
  unsigned __int8 v93; // al
  __int32 v94; // ecx
  __m128 *v95; // ebx
  __int32 v96; // edx
  __int32 v97; // ecx
  __int8 v98; // al
  unsigned __int64 v99; // rax
  __int32 v100; // ecx
  int v101; // ecx
  unsigned __int8 v102; // al
  float **v103; // ecx
  float **v104; // edx
  float *v105; // ebx
  float *v106; // ecx
  double v107; // st7
  __m128 *v108; // eax
  int v109; // edx
  __m128 v110; // xmm1
  __m128 v111; // xmm2
  __m128 v112; // xmm3
  __m128 v113; // xmm4
  __m128 *v114; // ecx
  int v115; // eax
  float v116; // ecx
  __m128 *v117; // eax
  int v118; // edx
  __m128 *v119; // ecx
  __m128 v120; // xmm1
  __m128 v121; // xmm2
  __m128 v122; // xmm3
  __m128 v123; // xmm4
  __m128 *v124; // ebx
  int v125; // ecx
  int v126; // eax
  double v127; // st7
  signed int v128; // eax
  int v129; // edx
  __m128 ***v130; // ecx
  __m128 **v131; // eax
  __int16 v132; // ax
  __int32 v133; // eax
  int m; // edi
  int **v135; // ebx
  int v136; // ecx
  _DWORD *v137; // edi
  int v138; // ebx
  int v139; // eax
  _DWORD *v140; // ecx
  unsigned __int64 v141; // rax
  int v142; // eax
  int v143; // edi
  _DWORD *v144; // ecx
  unsigned __int64 v145; // rax
  int v147; // [esp+Ch] [ebp-1E4h]
  int v148; // [esp+Ch] [ebp-1E4h]
  float v149; // [esp+28h] [ebp-1C8h]
  int v150; // [esp+28h] [ebp-1C8h]
  int v151; // [esp+28h] [ebp-1C8h]
  __m128 *v152; // [esp+28h] [ebp-1C8h]
  float v153; // [esp+2Ch] [ebp-1C4h]
  float v154; // [esp+2Ch] [ebp-1C4h]
  float v155; // [esp+2Ch] [ebp-1C4h]
  float v156; // [esp+2Ch] [ebp-1C4h]
  float **v157; // [esp+2Ch] [ebp-1C4h]
  signed int v158; // [esp+2Ch] [ebp-1C4h]
  float v159; // [esp+30h] [ebp-1C0h]
  float v160; // [esp+30h] [ebp-1C0h]
  _DWORD *v161; // [esp+30h] [ebp-1C0h]
  _DWORD *v162; // [esp+30h] [ebp-1C0h]
  int v163; // [esp+30h] [ebp-1C0h]
  __m128 *v164; // [esp+30h] [ebp-1C0h]
  int v165; // [esp+34h] [ebp-1BCh]
  float v166; // [esp+34h] [ebp-1BCh]
  int v167; // [esp+34h] [ebp-1BCh]
  _DWORD v168[2]; // [esp+38h] [ebp-1B8h]
  __m128 v169; // [esp+40h] [ebp-1B0h] BYREF
  float **v170; // [esp+54h] [ebp-19Ch]
  _DWORD v171[2]; // [esp+58h] [ebp-198h]
  __m128 v172; // [esp+60h] [ebp-190h] BYREF
  _DWORD v173[2]; // [esp+70h] [ebp-180h]
  _DWORD v174[5]; // [esp+78h] [ebp-178h]
  _BYTE v175[20]; // [esp+8Ch] [ebp-164h] BYREF
  __m128 v176; // [esp+A0h] [ebp-150h] BYREF
  _DWORD v177[5]; // [esp+BCh] [ebp-134h] BYREF
  char v178[256]; // [esp+D0h] [ebp-120h] BYREF
  __m128 v179; // [esp+1D0h] [ebp-20h]
  float v180; // [esp+1E0h] [ebp-10h]
  float v181; // [esp+1E4h] [ebp-Ch]
  float v182; // [esp+1E8h] [ebp-8h]
  float v183; // [esp+1ECh] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fe2de*/
  v6 = MEMORY[0xBA9DE4]; /*0x8fe2e6*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fe2ec*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8fe2fb*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fe2fd*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8fe2ff*/
    *v9 = "TtPredGskf3"; /*0x8fe305*/
    v10 = __rdtsc(); /*0x8fe30b*/
    v9[1] = v10; /*0x8fe315*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8fe31b*/
  }
  v11 = ThreadLocalStoragePointer[v6]; /*0x8fe321*/
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x8fe330*/
  {
    v12 = ThreadLocalStoragePointer[v6]; /*0x8fe332*/
    v13 = *(_DWORD **)(v11 + 0x1A4); /*0x8fe334*/
    *v13 = "Ltintern"; /*0x8fe33a*/
    v13[3] = "init"; /*0x8fe340*/
    v14 = __rdtsc(); /*0x8fe347*/
    v13[1] = v14; /*0x8fe351*/
    *(_DWORD *)(v12 + 0x1A4) = v13 + 4; /*0x8fe357*/
  }
  v159 = a1[5].m128_f32[0]; /*0x8fe36c*/
  LOBYTE(v173[0]) = a2->m128_i8[4] & 1; /*0x8fe373*/
  v171[1] = &a1->m128_i32[1]; /*0x8fe37a*/
  v15 = a2->m128_i32[1]; /*0x8fe37e*/
  BYTE1(v173[0]) = (v15 & 2) != 0; /*0x8fe388*/
  BYTE1(v168[0]) = (v15 & 8) != 0; /*0x8fe393*/
  v174[0] = 0; /*0x8fe399*/
  v174[1] = 0; /*0x8fe39d*/
  v16 = &a3->m128_i32[3]; /*0x8fe3ae*/
  v171[0] = a1; /*0x8fe3b1*/
  LOBYTE(v168[0]) = (v15 & 4) != 0; /*0x8fe3b5*/
  sub_8FF1C0(a1, (char *)a3, &v172); /*0x8fe3b9*/
  for ( i = 0; i < 2; ++i ) /*0x8fe3c1*/
  {
    if ( !*((_BYTE *)v173 + i) ) /*0x8fe3c9*/
      continue; /*0x8fe3c9*/
    v18 = (__m128 ***)v171[i]; /*0x8fe3cf*/
    v19 = _mm_sub_ps((**v18)[3], (**v18)[2]); /*0x8fe3df*/
    v20 = _mm_mul_ps(v19, v19); /*0x8fe3e5*/
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]; /*0x8fe3ef*/
    v22 = _mm_shuffle_ps(v20, v20, 0xAA); /*0x8fe3f6*/
    v23 = v22; /*0x8fe3fa*/
    v23.m128_f32[0] = v22.m128_f32[0] + v21; /*0x8fe3fd*/
    v176 = v23; /*0x8fe401*/
    v176.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21); /*0x8fe40d*/
    v24 = (__m128)0x3F000000u; /*0x8fe440*/
    v24.m128_f32[0] = (float)(0.5 * v176.m128_f32[0]) /*0x8fe44a*/
                    * (float)(3.0
                            - (float)((float)((float)(v22.m128_f32[0] + v21) * v176.m128_f32[0]) * v176.m128_f32[0]));
    v169 = _mm_mul_ps(_mm_shuffle_ps(v24, v24, 0), v19); /*0x8fe458*/
    hkBasis_TransformVector(&v169, (*v18)[2], &v169); /*0x8fe46c*/
    v25 = _mm_mul_ps(v169, v172); /*0x8fe481*/
    v26 = fabs((float)(_mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0] /*0x8fe4a6*/
                     + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0])));
    if ( *((_BYTE *)v168 + i) ) /*0x8fe47b*/
    {
      if ( v26 <= flt_A643B0 ) /*0x8fe4b5*/
        continue; /*0x8fe4b5*/
      v27 = a2->m128_i32[1]; /*0x8fe4c0*/
      *((_BYTE *)v168 + i) = 0; /*0x8fe4c3*/
      a2->m128_i32[1] = ~(4 << i) & v27; /*0x8fe4cc*/
      sub_939B60(v16, a1->m128_i32[3]); /*0x8fe4d7*/
      a2->m128_i8[2] = a3->m128_i8[0xE]; /*0x8fe4df*/
    }
    else
    {
      if ( v26 >= flt_A9B9F8 ) /*0x8fe4ef*/
        continue; /*0x8fe4ef*/
      v28 = a2->m128_i32[1]; /*0x8fe4f1*/
      *((_BYTE *)v168 + i) = 1; /*0x8fe4fd*/
      a2->m128_i32[1] = (4 << i) | v28; /*0x8fe504*/
      sub_939B60(v16, a1->m128_i32[3]); /*0x8fe50f*/
      a2->m128_i8[2] = a3->m128_i8[0xE]; /*0x8fe517*/
    }
    *v16 = 0; /*0x8fe51d*/
  }
  v29 = *(_DWORD *)(a1->m128_i32[2] + 0x28); /*0x8fe533*/
  if ( !*(_BYTE *)(v29 + 0x10) ) /*0x8fe536*/
    goto LABEL_39; /*0x8fe536*/
  v30 = a1->m128_i32[0]; /*0x8fe544*/
  for ( j = *(_DWORD *)(a1->m128_i32[0] + 0xC); j; j = *(_DWORD *)(j + 0xC) ) /*0x8fe54b*/
    v30 = j; /*0x8fe550*/
  v165 = *(int *)(v30 + 0x20); /*0x8fe55f*/
  v32 = a1->m128_i32[1]; /*0x8fe563*/
  for ( k = *(_DWORD *)(v32 + 0xC); k; k = *(_DWORD *)(k + 0xC) ) /*0x8fe56a*/
    v32 = k; /*0x8fe570*/
  v149 = *(float *)&v165 >= (double)*(float *)(v32 + 0x20) ? *(float *)(v32 + 0x20) : *(float *)&v165;
  v34 = a4->m128_f32[3]; /*0x8fe599*/
  v35 = v149 * *(float *)(v29 + 0x18) + v34; /*0x8fe5a3*/
  v36 = v149 * *(float *)(v29 + 0x14); /*0x8fe5a9*/
  if ( v36 >= v35 ) /*0x8fe5b7*/
  {
    v166 = v35; /*0x8fe5c5*/
  }
  else
  {
    v153 = v36; /*0x8fe5ac*/
    v166 = v153; /*0x8fe5bf*/
  }
  if ( v159 < (double)v166 ) /*0x8fe5d6*/
  {
    v37 = v34 + v149 * *(float *)(v29 + 0x28); /*0x8fe5e3*/
    v38 = v149 * *(float *)(v29 + 0x24); /*0x8fe5e9*/
    if ( v38 >= v37 ) /*0x8fe5f7*/
    {
      v160 = v37; /*0x8fe605*/
    }
    else
    {
      v154 = v38; /*0x8fe5ec*/
      v160 = v154; /*0x8fe5ff*/
    }
    v39 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fe609*/
    v40 = v39[MEMORY[0xBA9DE4]]; /*0x8fe616*/
    if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) ) /*0x8fe625*/
    {
      v41 = v39[MEMORY[0xBA9DE4]]; /*0x8fe627*/
      v42 = *(_DWORD **)(v40 + 0x1A4); /*0x8fe629*/
      *v42 = "Sttoi"; /*0x8fe62f*/
      v43 = __rdtsc(); /*0x8fe635*/
      v42[1] = v43; /*0x8fe63f*/
      *(_DWORD *)(v41 + 0x1A4) = v42 + 3; /*0x8fe645*/
    }
    sub_93DE40((int ***)a1, v149, SLODWORD(v166), SLODWORD(v160), (char *)a3, a4, a5); /*0x8fe667*/
LABEL_32:
    v44 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fe66f*/
    v45 = v44[MEMORY[0xBA9DE4]]; /*0x8fe67c*/
    if ( *(_DWORD *)(v45 + 0x1A4) < *(_DWORD *)(v45 + 0x1A8) ) /*0x8fe68b*/
    {
      v46 = v44[MEMORY[0xBA9DE4]]; /*0x8fe68d*/
      v47 = *(_DWORD **)(v45 + 0x1A4); /*0x8fe68f*/
      *v47 = "Stprocess"; /*0x8fe695*/
      v48 = __rdtsc(); /*0x8fe69b*/
      v47[1] = v48; /*0x8fe6a5*/
      *(_DWORD *)(v46 + 0x1A4) = v47 + 3; /*0x8fe6ab*/
    }
    v150 = 0; /*0x8fe6b1*/
    v49 = v175; /*0x8fe6b9*/
    do /*0x8fea5d*/
    {
      if ( *((_BYTE *)v168 + v150) ) /*0x8fe6c4*/
      {
        v50 = **(_DWORD **)v171[v150]; /*0x8fe6de*/
        v51 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x24); /*0x8fe6e4*/
        *(_WORD *)(v51 + 4) = 0x30; /*0x8fe6e7*/
        v155 = *(float *)(v50 + 0xC); /*0x8fe6f0*/
        v161 = (_DWORD *)v51; /*0x8fe6f6*/
        *(float *)&v147 = sub_8F2260((float *)v50) + v155 + flt_A58FF8; /*0x8fe714*/
        v52 = sub_8F3490(v161, (_OWORD *)(v50 + 0x20), (_OWORD *)(v50 + 0x30), v147); /*0x8fe719*/
        v53 = v150; /*0x8fe723*/
        if ( v49 != (_BYTE *)0xC ) /*0x8fe727*/
        {
          v54 = *(_DWORD *)v171[v150]; /*0x8fe72d*/
          v55 = *(_DWORD *)(v54 + 8); /*0x8fe72f*/
          *(_DWORD *)v49 = v54; /*0x8fe732*/
          *((_DWORD *)v49 + 0xFFFFFFFF) = v55; /*0x8fe734*/
        }
        *((_DWORD *)v49 + 0xFFFFFFFE) = *(_DWORD *)(*(_DWORD *)v49 + 4); /*0x8fe73c*/
        *((_DWORD *)v49 + 0xFFFFFFFD) = v52; /*0x8fe742*/
        v56 = (_DWORD *)v171[v150]; /*0x8fe744*/
        v174[v150] = *v56; /*0x8fe74a*/
        *v56 = v49 + 0xFFFFFFF4; /*0x8fe74e*/
      }
      else
      {
        v53 = v150; /*0x8fea46*/
        v174[v150] = 0; /*0x8fea4a*/
      }
      v49 += 0x10; /*0x8fea53*/
      v150 = v53 + 1; /*0x8fea59*/
    }
    while ( v53 + 1 < 2 ); /*0x8fea5d*/
    v95 = a3; /*0x8fea6c*/
    v164 = a3; /*0x8fea6e*/
    if ( LOWORD(v168[0]) ) /*0x8fea72*/
    {
      v96 = a3->m128_i32[1]; /*0x8fea84*/
      v169.m128_i32[0] = a3->m128_i32[0]; /*0x8fea87*/
      v97 = a3->m128_i32[2]; /*0x8fea8b*/
      v95 = &v169; /*0x8fea8e*/
      v164 = &v169; /*0x8fea92*/
      *(unsigned __int64 *)((char *)v169.m128_u64 + 4) = __PAIR64__(v97, v96); /*0x8fea96*/
      if ( LOBYTE(v168[0]) ) /*0x8fea9e*/
      {
        v169.m128_i16[0] = 0x10 * (1 - ((unsigned __int8)v169.m128_i8[0] >> 7)); /*0x8feab6*/
        v98 = v97; /*0x8feabb*/
        if ( (char)v97 > 1 ) /*0x8feabf*/
        {
          v169.m128_i32[0] = 0x10; /*0x8feac3*/
          if ( (_BYTE)v97 == 3 ) /*0x8fead1*/
          {
            v98 = 2; /*0x8fead7*/
            v169.m128_i8[8] = 2; /*0x8feadc*/
            v169.m128_i16[2] = v169.m128_i16[3]; /*0x8feae0*/
          }
        }
      }
      else
      {
        v98 = v169.m128_i8[8]; /*0x8feae7*/
      }
      if ( BYTE1(v168[0]) ) /*0x8feaf1*/
      {
        v169.m128_i16[v98] = 0x10 * (1 - ((unsigned __int8)v169.m128_i8[2 * v98] >> 7)); /*0x8feb0e*/
        if ( v169.m128_i8[9] > 1 ) /*0x8feb16*/
        {
          v169.m128_i16[v169.m128_i8[8]] = 0x10; /*0x8feb1d*/
          v169.m128_i16[v169.m128_i8[8] + 1] = 0; /*0x8feb29*/
          if ( v169.m128_i8[9] == 3 ) /*0x8feb35*/
            v169.m128_i8[9] = 2; /*0x8feb37*/
        }
      }
    }
    v99 = a1->m128_u64[0]; /*0x8feb3f*/
    v177[2] = *(_DWORD *)a1->m128_i32[0]; /*0x8feb46*/
    v177[3] = *(_DWORD *)HIDWORD(v99); /*0x8feb4f*/
    v100 = a1->m128_i32[2]; /*0x8feb56*/
    v177[0] = a1 + 1; /*0x8feb5c*/
    v177[1] = *(_DWORD *)(v99 + 8); /*0x8feb66*/
    v177[4] = *(_DWORD *)(v100 + 8); /*0x8feb7c*/
    if ( sub_93D4A0((int)v177, (char *)v95, a4, &v176) == 1 ) /*0x8feb97*/
    {
      if ( a3->m128_i8[0xE] ) /*0x8feb99*/
        sub_939B60(v16, a1->m128_i32[3]); /*0x8feba9*/
      goto LABEL_103; /*0x8febb1*/
    }
    v101 = (unsigned __int8)sub_93A620((unsigned __int8 *)v16, (int)v95); /*0x8febc0*/
    v152 = (__m128 *)a5->m128_i32[0]; /*0x8febc5*/
    v102 = a3->m128_u8[0xE]; /*0x8febc9*/
    v158 = v101; /*0x8febd4*/
    if ( v102 > v101 ) /*0x8febdc*/
    {
      v103 = (float **)a1->m128_i32[0]; /*0x8febea*/
      v104 = (float **)a1->m128_i32[1]; /*0x8febec*/
      v182 = *(float *)(a1->m128_i32[2] + 8); /*0x8febef*/
      v105 = *v104; /*0x8febf6*/
      v173[0] = v104; /*0x8febf8*/
      v170 = v103; /*0x8febfc*/
      v106 = *v103; /*0x8fec00*/
      v180 = v106[3]; /*0x8fec05*/
      v181 = v105[3]; /*0x8fec0f*/
      v179 = *a4; /*0x8fec2a*/
      v107 = v181 + v180 + v182; /*0x8fec32*/
      v183 = v107 * v107; /*0x8fec3d*/
      if ( v102 ) /*0x8fec46*/
      {
        v167 = (int)&v16[2 * v102 + 1]; /*0x8fec56*/
        (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v106 + 0x28))( /*0x8fec6b*/
          v106,
          v167,
          *(unsigned __int8 *)v16,
          v178);
        v108 = (__m128 *)v170[2]; /*0x8fec72*/
        v109 = *(unsigned __int8 *)v16; /*0x8fec75*/
        v110 = *v108; /*0x8fec78*/
        v111 = v108[1]; /*0x8fec7b*/
        v112 = v108[2]; /*0x8fec7f*/
        v113 = v108[3]; /*0x8fec83*/
        v170 = (float **)v109; /*0x8fec87*/
        v114 = (__m128 *)v178; /*0x8fec8b*/
        v115 = v109; /*0x8fec92*/
        do /*0x8fecd0*/
        {
          *v114 = _mm_add_ps( /*0x8fecc7*/
                    _mm_add_ps(
                      _mm_mul_ps(v110, _mm_shuffle_ps(*v114, *v114, 0)),
                      _mm_mul_ps(v111, _mm_shuffle_ps(*v114, *v114, 0x55))),
                    _mm_add_ps(_mm_mul_ps(v112, _mm_shuffle_ps(*v114, *v114, 0xAA)), v113));
          ++v114; /*0x8fecca*/
          --v115; /*0x8feccd*/
        }
        while ( v115 > 0 ); /*0x8fecd0*/
        v116 = *v105; /*0x8fecde*/
        v168[0] = &v178[0x10 * v109]; /*0x8fece1*/
        (*(void (__thiscall **)(float *, int, _DWORD, _DWORD))(LODWORD(v116) + 0x28))( /*0x8fecf6*/
          v105,
          v167 + 2 * v109,
          a3->m128_u8[0xD],
          v168[0]);
        v117 = *(__m128 **)(v173[0] + 8); /*0x8fecfd*/
        v118 = a3->m128_u8[0xD]; /*0x8fed00*/
        v119 = (__m128 *)v168[0]; /*0x8fed04*/
        v120 = *v117; /*0x8fed08*/
        v121 = v117[1]; /*0x8fed0b*/
        v122 = v117[2]; /*0x8fed0f*/
        v123 = v117[3]; /*0x8fed13*/
        do /*0x8fed5c*/
        {
          *v119 = _mm_add_ps( /*0x8fed53*/
                    _mm_add_ps(
                      _mm_mul_ps(v120, _mm_shuffle_ps(*v119, *v119, 0)),
                      _mm_mul_ps(v121, _mm_shuffle_ps(*v119, *v119, 0x55))),
                    _mm_add_ps(_mm_mul_ps(v122, _mm_shuffle_ps(*v119, *v119, 0xAA)), v123));
          ++v119; /*0x8fed56*/
          --v118; /*0x8fed59*/
        }
        while ( v118 > 0 ); /*0x8fed5c*/
      }
      sub_939BB0((unsigned __int8 *)v16, (__m128 *)v178, v158, (__m128 **)a5, a1->m128_i32[3]); /*0x8fed74*/
    }
    v124 = (__m128 *)a5->m128_i32[0]; /*0x8fed7f*/
    *v124 = v176; /*0x8fed92*/
    v124[1] = *a4; /*0x8fed98*/
    if ( v158 ) /*0x8fed9c*/
    {
      v124[2].m128_i16[0] = a3[1].m128_i16[1]; /*0x8feda2*/
      a5->m128_i32[0] += 0x30; /*0x8feda6*/
      goto LABEL_100; /*0x8feda9*/
    }
    v125 = a1->m128_i32[2]; /*0x8fedba*/
    v126 = *(_DWORD *)(v125 + 0x28); /*0x8fedc2*/
    if ( v164->m128_i8[8] + v164->m128_i8[9] == 4 ) /*0x8fedc5*/
      v127 = *(float *)(v126 + 4); /*0x8fedc7*/
    else
      v127 = *(float *)(v126 + 8); /*0x8fedcc*/
    if ( v127 <= a4->m128_f32[3] ) /*0x8fedda*/
      goto LABEL_100; /*0x8fedda*/
    v128 = sub_93AB40( /*0x8fedfa*/
             (unsigned __int8 *)v16,
             a1->m128_i32[0],
             a1->m128_i32[1],
             v125,
             (int)v164,
             (int)v124,
             v152,
             a1->m128_i32[3],
             1);
    if ( v128 != 4 ) /*0x8fee05*/
    {
      if ( v128 == 5 ) /*0x8fee92*/
      {
        v124 = v152; /*0x8fee94*/
      }
      else if ( v128 == 6 ) /*0x8fee9d*/
      {
        v124 = v152; /*0x8feea4*/
        a5->m128_i32[0] -= 0x30; /*0x8feeab*/
      }
      else
      {
        v124 = &v152[3 * v128]; /*0x8feeb9*/
      }
      goto LABEL_100; /*0x8fee98*/
    }
    if ( v124[2].m128_i16[0] != (__int16)0xFFFF ) /*0x8fee14*/
    {
      a5->m128_i32[0] += 0x30; /*0x8fee16*/
      goto LABEL_100; /*0x8fee19*/
    }
    v129 = *(_DWORD *)a1->m128_i32[3]; /*0x8fee29*/
    if ( a5[0x304].m128_i32[0] ) /*0x8fee1e*/
    {
      if ( !(*(int (__stdcall **)(int))(v129 + 0xC))(1) ) /*0x8fee2f*/
      {
        v130 = (__m128 ***)a5[0x304].m128_i32[0]; /*0x8fee39*/
        v131 = *v130; /*0x8fee3f*/
        *v130 += 3; /*0x8fee44*/
        v131[1] = a2; /*0x8fee49*/
        *v131 = v124; /*0x8fee4f*/
        v131[2] = a3; /*0x8fee51*/
        a5->m128_i32[0] += 0x30; /*0x8fee54*/
        goto LABEL_100; /*0x8fee57*/
      }
LABEL_93:
      sub_939B00((unsigned __int8 *)v16, 0); /*0x8fee72*/
      v124 = v152; /*0x8fee7a*/
    }
    else
    {
      v132 = (*(int (__stdcall **)(__int32, __int32, __int32, __m128 *))(v129 + 8))( /*0x8fee65*/
               a1->m128_i32[0],
               a1->m128_i32[1],
               a1->m128_i32[2],
               v124);
      v124[2].m128_i16[0] = v132; /*0x8fee6c*/
      if ( v132 == (__int16)0xFFFF ) /*0x8fee70*/
        goto LABEL_93; /*0x8fee70*/
      a3[1].m128_i16[1] = v132; /*0x8fee86*/
      a5->m128_i32[0] += 0x30; /*0x8fee8a*/
    }
LABEL_100:
    v133 = a5[0x304].m128_i32[0]; /*0x8feebb*/
    if ( v133 ) /*0x8feec6*/
    {
      if ( (unsigned int)v124 < a5->m128_i32[0] ) /*0x8feeca*/
      {
        **(_DWORD **)(v133 + 4) = v124; /*0x8feecf*/
        *(_DWORD *)(a5[0x304].m128_i32[0] + 4) += 4; /*0x8feed7*/
      }
    }
LABEL_103:
    *a4 = v172; /*0x8feedb*/
  }
  else
  {
LABEL_39:
    if ( v159 <= (double)*(float *)(v29 + 0xC) ) /*0x8fe763*/
      goto LABEL_32; /*0x8fe763*/
    a4->m128_f32[3] = v159; /*0x8fe76d*/
    if ( a3->m128_i8[0xE] ) /*0x8fe770*/
    {
      v57 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fe77b*/
      v58 = v57[MEMORY[0xBA9DE4]]; /*0x8fe788*/
      if ( *(_DWORD *)(v58 + 0x1A4) < *(_DWORD *)(v58 + 0x1A8) ) /*0x8fe797*/
      {
        v59 = v57[MEMORY[0xBA9DE4]]; /*0x8fe799*/
        v60 = *(_DWORD **)(v58 + 0x1A4); /*0x8fe79b*/
        *v60 = "StgetPoints"; /*0x8fe7a1*/
        v61 = __rdtsc(); /*0x8fe7a7*/
        v60[1] = v61; /*0x8fe7b1*/
        *(_DWORD *)(v59 + 0x1A4) = v60 + 3; /*0x8fe7b7*/
      }
      v151 = 0; /*0x8fe7bd*/
      v62 = v175; /*0x8fe7c5*/
      do /*0x8fe879*/
      {
        if ( *((_BYTE *)v168 + v151) ) /*0x8fe7d4*/
        {
          v63 = **(_DWORD **)v171[v151]; /*0x8fe7ee*/
          v64 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x24); /*0x8fe7f4*/
          *(_WORD *)(v64 + 4) = 0x30; /*0x8fe7f7*/
          v156 = *(float *)(v63 + 0xC); /*0x8fe800*/
          v162 = (_DWORD *)v64; /*0x8fe806*/
          *(float *)&v148 = sub_8F2260((float *)v63) + v156 + flt_A58FF8; /*0x8fe824*/
          v65 = sub_8F3490(v162, (_OWORD *)(v63 + 0x20), (_OWORD *)(v63 + 0x30), v148); /*0x8fe829*/
          v66 = v151; /*0x8fe833*/
          if ( v62 != (_BYTE *)0xC ) /*0x8fe837*/
          {
            v67 = *(_DWORD *)v171[v151]; /*0x8fe83d*/
            v68 = *(_DWORD *)(v67 + 8); /*0x8fe83f*/
            *(_DWORD *)v62 = v67; /*0x8fe842*/
            *((_DWORD *)v62 + 0xFFFFFFFF) = v68; /*0x8fe844*/
          }
          *((_DWORD *)v62 + 0xFFFFFFFE) = *(_DWORD *)(*(_DWORD *)v62 + 4); /*0x8fe84c*/
          *((_DWORD *)v62 + 0xFFFFFFFD) = v65; /*0x8fe852*/
          v69 = (_DWORD *)v171[v151]; /*0x8fe854*/
          v174[v151] = *v69; /*0x8fe85a*/
          *v69 = v62 + 0xFFFFFFF4; /*0x8fe85e*/
        }
        else
        {
          v66 = v151; /*0x8fe862*/
          v174[v151] = 0; /*0x8fe866*/
        }
        v62 += 0x10; /*0x8fe86f*/
        v151 = v66 + 1; /*0x8fe875*/
      }
      while ( v66 + 1 < 2 ); /*0x8fe879*/
      v70 = (float **)a1->m128_i32[1]; /*0x8fe882*/
      v71 = (_DWORD *)a1->m128_i32[0]; /*0x8fe885*/
      v182 = *(float *)(a1->m128_i32[2] + 8); /*0x8fe88d*/
      v72 = *v70; /*0x8fe894*/
      v73 = *v71; /*0x8fe896*/
      v157 = v70; /*0x8fe898*/
      v180 = *(float *)(*v71 + 0xC); /*0x8fe89f*/
      v74 = *a4; /*0x8fe8ac*/
      v181 = v72[3]; /*0x8fe8af*/
      v75 = a3->m128_u8[0xE]; /*0x8fe8c4*/
      v179 = v74; /*0x8fe8c9*/
      v76 = v181 + v180 + v182; /*0x8fe8d1*/
      v183 = v76 * v76; /*0x8fe8dc*/
      if ( v75 ) /*0x8fe8e5*/
      {
        v163 = (int)&v16[2 * v75 + 1]; /*0x8fe8f4*/
        (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v73 + 0x28))( /*0x8fe909*/
          v73,
          v163,
          *(unsigned __int8 *)v16,
          v178);
        v77 = (__m128 *)v71[2]; /*0x8fe90c*/
        v78 = *(unsigned __int8 *)v16; /*0x8fe90f*/
        v79 = *v77; /*0x8fe912*/
        v80 = v77[1]; /*0x8fe915*/
        v81 = v77[2]; /*0x8fe919*/
        v82 = v77[3]; /*0x8fe91d*/
        v83 = v78; /*0x8fe921*/
        v84 = (__m128 *)v178; /*0x8fe923*/
        do /*0x8fe96c*/
        {
          *v84 = _mm_add_ps( /*0x8fe963*/
                   _mm_add_ps(
                     _mm_mul_ps(v79, _mm_shuffle_ps(*v84, *v84, 0)),
                     _mm_mul_ps(v80, _mm_shuffle_ps(*v84, *v84, 0x55))),
                   _mm_add_ps(_mm_mul_ps(v81, _mm_shuffle_ps(*v84, *v84, 0xAA)), v82));
          ++v84; /*0x8fe966*/
          --v83; /*0x8fe969*/
        }
        while ( v83 > 0 ); /*0x8fe96c*/
        v85 = &v178[0x10 * v78]; /*0x8fe977*/
        (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v72 + 0x28))( /*0x8fe98c*/
          v72,
          v163 + 2 * v78,
          a3->m128_u8[0xD],
          v85);
        v86 = (__m128 *)v157[2]; /*0x8fe993*/
        v87 = a3->m128_u8[0xD]; /*0x8fe996*/
        v88 = *v86; /*0x8fe99a*/
        v89 = v86[1]; /*0x8fe99d*/
        v90 = v86[2]; /*0x8fe9a1*/
        v91 = v86[3]; /*0x8fe9a5*/
        v92 = (__m128 *)v85; /*0x8fe9a9*/
        do /*0x8fe9ec*/
        {
          *v92 = _mm_add_ps( /*0x8fe9e3*/
                   _mm_add_ps(
                     _mm_mul_ps(v88, _mm_shuffle_ps(*v92, *v92, 0)),
                     _mm_mul_ps(v89, _mm_shuffle_ps(*v92, *v92, 0x55))),
                   _mm_add_ps(_mm_mul_ps(v90, _mm_shuffle_ps(*v92, *v92, 0xAA)), v91));
          ++v92; /*0x8fe9e6*/
          --v87; /*0x8fe9e9*/
        }
        while ( v87 > 0 ); /*0x8fe9ec*/
      }
      sub_939BB0((unsigned __int8 *)v16, (__m128 *)v178, 0, (__m128 **)a5, a1->m128_i32[3]); /*0x8fea04*/
      v93 = a3->m128_u8[0xE]; /*0x8fea09*/
      if ( v93 ) /*0x8fea11*/
      {
        v94 = a5[0x304].m128_i32[0]; /*0x8fea17*/
        if ( v94 ) /*0x8fea1f*/
        {
          **(_DWORD **)(v94 + 4) = a5->m128_i32[0] - 0x30 * v93; /*0x8fea35*/
          *(_DWORD *)(a5[0x304].m128_i32[0] + 4) += 4; /*0x8fea3d*/
        }
      }
    }
  }
  for ( m = 0; m < 2; ++m ) /*0x8feee6*/
  {
    if ( v174[m] ) /*0x8feee8*/
    {
      v135 = (int **)v171[m]; /*0x8feef0*/
      v136 = **v135; /*0x8feef6*/
      if ( *(_WORD *)(v136 + 4) ) /*0x8feef8*/
      {
        if ( !--*(_WORD *)(v136 + 6) ) /*0x8fef03*/
          (**(void (__thiscall ***)(int, int))v136)(v136, 1); /*0x8fef0e*/
      }
      *v135 = (int *)v174[m]; /*0x8fef14*/
    }
  }
  v137 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fef24*/
  v138 = MEMORY[0xBA9DE4]; /*0x8fef2b*/
  a2->m128_i8[2] = a3->m128_i8[0xE]; /*0x8fef31*/
  v139 = v137[v138]; /*0x8fef34*/
  if ( *(_DWORD *)(v139 + 0x1A4) < *(_DWORD *)(v139 + 0x1A8) ) /*0x8fef43*/
  {
    v140 = *(_DWORD **)(v139 + 0x1A4); /*0x8fef45*/
    *v140 = "lt"; /*0x8fef4b*/
    v141 = __rdtsc(); /*0x8fef51*/
    v168[0] = v141; /*0x8fef53*/
    v140[1] = v141; /*0x8fef5b*/
    *(_DWORD *)(v137[v138] + 0x1A4) = v140 + 3; /*0x8fef64*/
  }
  v142 = v137[v138]; /*0x8fef6a*/
  if ( *(_DWORD *)(v142 + 0x1A4) < *(_DWORD *)(v142 + 0x1A8) ) /*0x8fef79*/
  {
    v143 = v137[v138]; /*0x8fef7b*/
    v144 = *(_DWORD **)(v142 + 0x1A4); /*0x8fef7d*/
    *v144 = "Et"; /*0x8fef83*/
    v145 = __rdtsc(); /*0x8fef89*/
    v168[0] = v145; /*0x8fef8b*/
    v144[1] = v145; /*0x8fef93*/
    *(_DWORD *)(v143 + 0x1A4) = v144 + 3; /*0x8fef99*/
  }
  return (unsigned int)a3 + ((2 * (a3->m128_u8[0xC] + a3->m128_u8[0xD] + 4 * a3->m128_u8[0xE]) + 0x1F) & 0xFFFFFFF0); /*0x8fefb6*/
}
