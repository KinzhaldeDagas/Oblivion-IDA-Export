int __cdecl sub_93DE40(int ***a1, float a2, int a3, int a4, char *a5, __m128 *a6, __m128 *a7)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v8; // eax
  int v9; // esi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int **v12; // ebx
  int *v13; // ecx
  double v14; // st7
  double v15; // st7
  double v16; // st6
  __int32 v17; // ecx
  int **v18; // edx
  int *v19; // edi
  float v20; // edx
  int **v21; // eax
  int *v22; // ecx
  float v23; // edi
  double v24; // st7
  double v25; // st6
  __m128 v26; // xmm1
  double v27; // st5
  __m128 v28; // xmm1
  int v29; // eax
  int v30; // ecx
  double v31; // st7
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm5
  __m128 v38; // xmm2
  __m128 v39; // xmm4
  __m128 v40; // xmm0
  __m128 v41; // xmm2
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm2
  __m128 v45; // xmm0
  double v46; // st6
  double v47; // st7
  float *v48; // edi
  int *v49; // eax
  int **v50; // ecx
  int *v51; // edx
  double v52; // st7
  int **v53; // ecx
  int v54; // ecx
  unsigned int v55; // edx
  int v56; // eax
  double v57; // st7
  _DWORD *v58; // edi
  int v59; // ecx
  int v60; // eax
  _DWORD *v61; // ecx
  unsigned __int64 v62; // rax
  double v63; // st7
  double v64; // st7
  int v65; // eax
  __m128 v66; // xmm0
  bool v67; // cf
  int v68; // edi
  _DWORD *v69; // ecx
  unsigned __int64 v70; // rax
  int **v71; // edi
  float v72; // eax
  __m128 v73; // xmm2
  bool v74; // zf
  __m128 v75; // xmm0
  __m128 v76; // xmm0
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  __m128 v79; // xmm2
  __m128 v80; // xmm1
  __m128 v81; // xmm5
  __m128 v82; // xmm3
  __m128 v83; // xmm2
  __m128 v84; // xmm7
  __m128 v85; // xmm0
  __m128 v86; // xmm0
  _DWORD *v87; // edx
  int v88; // eax
  int v89; // ebx
  _DWORD *v90; // edi
  unsigned __int64 v91; // rax
  int **v92; // eax
  double v93; // st7
  double v94; // st7
  double v95; // st7
  int **v96; // edi
  int **v97; // edx
  float v98; // ecx
  float v99; // ebx
  __m128 v100; // xmm0
  int v101; // ecx
  __m128 v102; // xmm1
  __m128 v103; // xmm2
  __m128 v104; // xmm3
  __m128 v105; // xmm4
  __m128 *v106; // eax
  __m128 v107; // xmm2
  __m128 v108; // xmm0
  double v109; // st7
  int **v110; // ecx
  double v111; // st7
  float *v112; // ecx
  double v113; // st7
  int v114; // edi
  int **v115; // eax
  int **v116; // ebx
  __m128 *v117; // edi
  __m128 *v118; // edx
  __m128 v119; // xmm2
  __m128 v120; // xmm4
  double v121; // st7
  __m128 v122; // xmm1
  __m128 v123; // xmm1
  __m128 v124; // xmm2
  __m128 v125; // xmm0
  __m128 v126; // xmm0
  double v127; // st7
  __m128 v128; // xmm0
  __int32 v129; // ecx
  __int32 v130; // edx
  __int32 v131; // eax
  int v132; // esi
  _DWORD *v133; // ecx
  int v134; // eax
  double v135; // st7
  int v136; // ecx
  int v137; // eax
  unsigned __int64 v138; // rax
  int v139; // edi
  _DWORD *v140; // ecx
  float v142; // [esp+34h] [ebp-39Ch]
  float v143; // [esp+34h] [ebp-39Ch]
  float v144; // [esp+34h] [ebp-39Ch]
  float v145; // [esp+38h] [ebp-398h]
  unsigned int v146; // [esp+38h] [ebp-398h]
  unsigned int v147; // [esp+38h] [ebp-398h]
  float v148; // [esp+38h] [ebp-398h]
  int v149; // [esp+38h] [ebp-398h]
  float v150; // [esp+38h] [ebp-398h]
  int *v151; // [esp+3Ch] [ebp-394h]
  float v152; // [esp+3Ch] [ebp-394h]
  unsigned int v153; // [esp+3Ch] [ebp-394h]
  unsigned int v154; // [esp+3Ch] [ebp-394h]
  unsigned int v155; // [esp+3Ch] [ebp-394h]
  float v156; // [esp+40h] [ebp-390h]
  float v157; // [esp+44h] [ebp-38Ch]
  float v158; // [esp+44h] [ebp-38Ch]
  float v159; // [esp+48h] [ebp-388h] BYREF
  float v160; // [esp+4Ch] [ebp-384h]
  float v161; // [esp+50h] [ebp-380h]
  __int64 v162; // [esp+54h] [ebp-37Ch]
  float v163[4]; // [esp+5Ch] [ebp-374h]
  char v164; // [esp+6Ch] [ebp-364h]
  float v165; // [esp+70h] [ebp-360h]
  int v166; // [esp+74h] [ebp-35Ch]
  _DWORD v167[2]; // [esp+78h] [ebp-358h] BYREF
  __m128 v168; // [esp+80h] [ebp-350h] BYREF
  __m128 v169; // [esp+90h] [ebp-340h] BYREF
  float v170; // [esp+ACh] [ebp-324h]
  __m128 v171; // [esp+B0h] [ebp-320h] BYREF
  __int32 v172; // [esp+C4h] [ebp-30Ch]
  _QWORD v173[3]; // [esp+C8h] [ebp-308h] BYREF
  __m128 v174; // [esp+E0h] [ebp-2F0h] BYREF
  __m128 v175; // [esp+F0h] [ebp-2E0h] BYREF
  int v176; // [esp+100h] [ebp-2D0h]
  float v177; // [esp+104h] [ebp-2CCh]
  float v178; // [esp+108h] [ebp-2C8h]
  float v179; // [esp+10Ch] [ebp-2C4h]
  __m128 v180; // [esp+110h] [ebp-2C0h]
  __m128 v181; // [esp+120h] [ebp-2B0h]
  int **v182; // [esp+130h] [ebp-2A0h]
  float v183; // [esp+134h] [ebp-29Ch]
  _QWORD v184[3]; // [esp+138h] [ebp-298h]
  __m128 v185; // [esp+150h] [ebp-280h] BYREF
  __m128 v186; // [esp+160h] [ebp-270h]
  float v187; // [esp+170h] [ebp-260h]
  _QWORD v188[3]; // [esp+178h] [ebp-258h] BYREF
  __m128 v189; // [esp+190h] [ebp-240h] BYREF
  __m128 v190; // [esp+1A0h] [ebp-230h]
  __m128 v191; // [esp+1B0h] [ebp-220h]
  __m128 v192; // [esp+1D0h] [ebp-200h] BYREF
  __m128 v193; // [esp+1E0h] [ebp-1F0h]
  __m128 v194; // [esp+1F0h] [ebp-1E0h]
  __m128 v195; // [esp+200h] [ebp-1D0h]
  __m128 v196[4]; // [esp+210h] [ebp-1C0h] BYREF
  __m128 v197; // [esp+250h] [ebp-180h] BYREF
  char v198; // [esp+260h] [ebp-170h]
  int v199; // [esp+264h] [ebp-16Ch]
  __m128 v200[8]; // [esp+270h] [ebp-160h] BYREF
  __m128 v201[4]; // [esp+2F0h] [ebp-E0h] BYREF
  _BYTE v202[80]; // [esp+330h] [ebp-A0h] BYREF
  __m128 v203; // [esp+380h] [ebp-50h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93de4c*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93de59*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x93de6b*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x93de6d*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x93de6f*/
    *v10 = "LtToi"; /*0x93de75*/
    v10[3] = "setup"; /*0x93de7b*/
    v11 = __rdtsc(); /*0x93de82*/
    v10[1] = v11; /*0x93de8c*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4; /*0x93de92*/
  }
  v12 = a1[2]; /*0x93de9e*/
  v13 = v12[0xA]; /*0x93dea1*/
  v14 = a2 * *((float *)v13 + 0xB); /*0x93dea4*/
  v168.m128_u64[0] = __PAIR64__(a3, a4); /*0x93dead*/
  v169.m128_f32[0] = v14; /*0x93deb1*/
  v15 = *((float *)v13 + 8); /*0x93deb9*/
  v16 = a2 * *((float *)v13 + 7); /*0x93debf*/
  if ( v16 > v15 ) /*0x93decd*/
  {
    v145 = v16; /*0x93dec2*/
    v15 = v145; /*0x93ded1*/
  }
  v17 = v13[0xD]; /*0x93ded8*/
  v18 = a1[1]; /*0x93dedb*/
  v19 = *v18; /*0x93dede*/
  v20 = *((float *)v18 + 2); /*0x93dee0*/
  v168.m128_f32[2] = v15 * *((float *)v12 + 7); /*0x93dee3*/
  v21 = *a1; /*0x93dee7*/
  v168.m128_i32[3] = v17; /*0x93dee9*/
  v22 = *v21; /*0x93deed*/
  v162 = (unsigned int)v19; /*0x93deef*/
  v23 = *((float *)v21 + 2); /*0x93def3*/
  v175.m128_i32[2] = 0; /*0x93def8*/
  v24 = *((float *)v12 + 6); /*0x93deff*/
  v25 = *(float *)(LODWORD(v20) + 0x5C); /*0x93df02*/
  v26 = *(__m128 *)(LODWORD(v23) + 0x90); /*0x93df05*/
  v27 = v24 * *(float *)(LODWORD(v23) + 0x5C); /*0x93df11*/
  v163[0] = v20; /*0x93df14*/
  v164 = 0; /*0x93df18*/
  LOBYTE(v170) = 0; /*0x93df1c*/
  *(float *)&v146 = v27; /*0x93df23*/
  v185 = _mm_mul_ps(_mm_shuffle_ps((__m128)v146, (__m128)v146, 0), v26); /*0x93df39*/
  v28 = *(__m128 *)(LODWORD(v20) + 0x90); /*0x93df41*/
  *(float *)&v147 = v25 * v24; /*0x93df48*/
  v197.m128_i32[0] = a5[8]; /*0x93df58*/
  v197.m128_i32[1] = a5[9]; /*0x93df63*/
  v197.m128_i32[2] = a5[0xA]; /*0x93df6e*/
  v197.m128_i32[3] = a5[0xB]; /*0x93df79*/
  v186 = _mm_mul_ps(_mm_shuffle_ps((__m128)v147, (__m128)v147, 0), v28); /*0x93df9a*/
  v166 = 0; /*0x93dfa2*/
  v198 = 0; /*0x93dfa6*/
  v199 = 0; /*0x93dfad*/
  v29 = *v22; /*0x93dfb4*/
  v151 = v22; /*0x93dfb7*/
  v163[1] = v23; /*0x93dfbb*/
  (*(void (__stdcall **)(char *, __int32, __m128 *))(v29 + 0x28))(a5, v197.m128_i32[0], v200); /*0x93dfbf*/
  (*(void (__thiscall **)(_DWORD, char *, __int32, _BYTE *))(*(_DWORD *)v162 + 0x28))( /*0x93dfe3*/
    v162,
    &a5[2 * v197.m128_i32[0]],
    v197.m128_i32[1],
    v202);
  v148 = v169.m128_f32[0] + *(float *)&a4; /*0x93dff5*/
  v165 = a6->m128_f32[3]; /*0x93e001*/
  v157 = v165; /*0x93dff9*/
  v30 = 1; /*0x93e009*/
  v156 = 0.0; /*0x93e00e*/
  if ( v165 <= (double)v148 ) /*0x93e023*/
  {
LABEL_39:
    v87 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93e6c8*/
    v88 = v87[MEMORY[0xBA9DE4]]; /*0x93e6d5*/
    if ( *(_DWORD *)(v88 + 0x1A4) < *(_DWORD *)(v88 + 0x1A8) ) /*0x93e6e4*/
    {
      v89 = v87[MEMORY[0xBA9DE4]]; /*0x93e6e6*/
      v90 = *(_DWORD **)(v88 + 0x1A4); /*0x93e6e8*/
      *v90 = "Stfinal"; /*0x93e6ee*/
      v91 = __rdtsc(); /*0x93e6f4*/
      v90[1] = v91; /*0x93e6fe*/
      *(_DWORD *)(v89 + 0x1A4) = v90 + 3; /*0x93e704*/
    }
    *(float *)&v162 = v157; /*0x93e712*/
    v160 = v165; /*0x93e71a*/
    v143 = v156; /*0x93e722*/
    v92 = *a1; /*0x93e726*/
    v161 = *((float *)&v162 + 1); /*0x93e728*/
    v149 = v30; /*0x93e72f*/
    v93 = *((float *)*v92 + 3) + *((float *)*a1[1] + 3); /*0x93e73a*/
    v163[0] = 0.0; /*0x93e73d*/
    v163[3] = v93; /*0x93e745*/
    *((float *)&v162 + 1) = (v157 - v165) / (v156 - *((float *)&v162 + 1)); /*0x93e75b*/
    v152 = -v169.m128_f32[0]; /*0x93e765*/
    do /*0x93eaae*/
    {
      v94 = *(float *)&v162 - v160; /*0x93e774*/
      if ( v94 > v152 ) /*0x93e781*/
      {
        v94 = kHeadBodyNormalMatchRadius; /*0x93e789*/
        v143 = v161; /*0x93e78f*/
      }
      if ( fabs(*(float *)&v162 - *(float *)&a4) >= v169.m128_f32[0] ) /*0x93e7a5*/
      {
        v164 = 0; /*0x93e7c3*/
        v95 = (*(float *)&a4 - v160) / v94; /*0x93e7cc*/
        if ( v95 > kFaceEarNormalMatchRadius ) /*0x93e7d9*/
        {
          if ( v95 >= flt_A37450 ) /*0x93e7f0*/
            v95 = flt_A37450; /*0x93e7f4*/
        }
        else
        {
          v95 = kFaceEarNormalMatchRadius; /*0x93e7dd*/
        }
        v158 = (fConstant_1 - v95) * v161 + v95 * v143; /*0x93e80e*/
      }
      else
      {
        v164 = 1; /*0x93e7ad*/
        v149 = 0; /*0x93e7b2*/
        v158 = v143; /*0x93e7ba*/
      }
      v96 = a1[2]; /*0x93e812*/
      v97 = *a1; /*0x93e81c*/
      v98 = *((float *)v96 + 4); /*0x93e81e*/
      v163[2] = v158 * *((float *)v96 + 6); /*0x93e82b*/
      v99 = v163[2]; /*0x93e82f*/
      sub_8DD340((__m128 *)v97[2] + 4, v98, v163[2], &v189); /*0x93e83d*/
      sub_8DD340((__m128 *)a1[1][2] + 4, *((float *)v96 + 4), v99, v196); /*0x93e858*/
      sub_8B1FF0(&v192, &v189, v196); /*0x93e877*/
      if ( v149 ) /*0x93e882*/
      {
        sub_93C690(&v197, **a1, *a1[1], &v192, &v171); /*0x93e8aa*/
        if ( v197.m128_i32[0] == 1 ) /*0x93e8bd*/
        {
          *(__m128 *)&v173[1] = v200[0]; /*0x93e8c7*/
        }
        else if ( v197.m128_i32[1] == 1 ) /*0x93e8db*/
        {
          v100 = _mm_shuffle_ps(v171, v171, 0xFF); /*0x93e8e8*/
          *(__m128 *)&v173[1] = _mm_add_ps(v201[0], _mm_mul_ps(_mm_shuffle_ps(v100, v100, 0), v171)); /*0x93e901*/
        }
        else
        {
          *(__m128 *)&v173[1] = v203; /*0x93e916*/
        }
      }
      else
      {
        v101 = v197.m128_i32[1]; /*0x93e923*/
        v102 = v195; /*0x93e92a*/
        v103 = v194; /*0x93e932*/
        v104 = v193; /*0x93e93a*/
        v105 = v192; /*0x93e942*/
        v106 = (__m128 *)v202; /*0x93e94a*/
        do /*0x93e98e*/
        {
          v106[0xFFFFFFFC] = _mm_add_ps( /*0x93e984*/
                               _mm_add_ps(
                                 _mm_mul_ps(v105, _mm_shuffle_ps(*v106, *v106, 0)),
                                 _mm_mul_ps(v104, _mm_shuffle_ps(*v106, *v106, 0x55))),
                               _mm_add_ps(_mm_mul_ps(v103, _mm_shuffle_ps(*v106, *v106, 0xAA)), v102));
          ++v106; /*0x93e988*/
          --v101; /*0x93e98b*/
        }
        while ( v101 > 0 ); /*0x93e98e*/
        v107 = _mm_shuffle_ps(v191, v191, 0x44); /*0x93e9c2*/
        v108 = _mm_shuffle_ps(v189, v190, 0x44); /*0x93e9cc*/
        v174 = _mm_add_ps( /*0x93ea34*/
                 _mm_add_ps(
                   _mm_mul_ps(
                     _mm_shuffle_ps(v108, v107, 0x88),
                     _mm_shuffle_ps(*(__m128 *)&v188[1], *(__m128 *)&v188[1], 0)),
                   _mm_mul_ps(
                     _mm_shuffle_ps(v108, v107, 0xDD),
                     _mm_shuffle_ps(*(__m128 *)&v188[1], *(__m128 *)&v188[1], 0x55))),
                 _mm_mul_ps(
                   _mm_shuffle_ps(_mm_shuffle_ps(v189, v190, 0xEE), _mm_shuffle_ps(v191, v191, 0xEE), 0x88),
                   _mm_shuffle_ps(*(__m128 *)&v188[1], *(__m128 *)&v188[1], 0xAA)));
        sub_93BA20(v200, v201, v197.m128_i32[0], v197.m128_i32[1], &v174, (__m128 *)&v173[1], &v171); /*0x93ea3c*/
      }
      v109 = v171.m128_f32[3] - v163[3]; /*0x93ea4b*/
      v163[1] = v109; /*0x93ea4f*/
      if ( fabs(v109 - *(float *)&a4) < v169.m128_f32[0] ) /*0x93ea63*/
        break; /*0x93ea63*/
      if ( v164 ) /*0x93ea6b*/
        break; /*0x93ea6b*/
      if ( v161 == v143 ) /*0x93ea7c*/
        break; /*0x93ea7c*/
      if ( v109 >= *(float *)&a4 ) /*0x93ea86*/
      {
        v160 = v109; /*0x93ea9a*/
        v161 = v158; /*0x93ea9e*/
      }
      else
      {
        *(float *)&v162 = v109; /*0x93ea8c*/
        v143 = v158; /*0x93ea90*/
      }
      ++LODWORD(v163[0]); /*0x93eaaa*/
    }
    while ( SLODWORD(v163[0]) < 0xA ); /*0x93eaae*/
    v110 = a1[2]; /*0x93eab8*/
    v111 = v158 * *((float *)v110 + 6); /*0x93eabf*/
    v112 = (float *)(v110 + 4); /*0x93eac2*/
    LODWORD(v163[2]) = v112; /*0x93eac5*/
    if ( v111 <= v168.m128_f32[3] ) /*0x93ead2*/
      v111 = v168.m128_f32[3]; /*0x93ead6*/
    v113 = v111 + *v112; /*0x93eada*/
    v144 = v113; /*0x93eadf*/
    if ( v113 < a7[0x303].m128_f32[1] && v112[1] - v168.m128_f32[3] > v144 ) /*0x93eb04*/
    {
      v114 = (int)**a1; /*0x93eb0c*/
      hkTransform_TransformPosition((__m128 *)&v188[1], &v189, (__m128 *)&v173[1]); /*0x93eb25*/
      hkBasis_TransformVector(&v169, &v189, &v171); /*0x93eb3e*/
      v115 = *a1; /*0x93eb55*/
      v116 = a1[1]; /*0x93eb57*/
      *(float *)&v153 = -*(float *)(v114 + 0xC) - v163[1]; /*0x93eb5a*/
      v168 = _mm_add_ps(*(__m128 *)&v188[1], _mm_mul_ps(_mm_shuffle_ps((__m128)v153, (__m128)v153, 0), v169)); /*0x93eb7d*/
      v169.m128_f32[3] = v163[1]; /*0x93eb82*/
      v117 = (__m128 *)v115[2]; /*0x93eb86*/
      v118 = (__m128 *)v116[2]; /*0x93eb8c*/
      v119 = v117[5]; /*0x93eb8f*/
      v120 = v117[4]; /*0x93eb93*/
      v121 = (v144 - v117[4].m128_f32[3]) * v117[5].m128_f32[3]; /*0x93eb97*/
      LODWORD(v163[3]) = v115; /*0x93eb9a*/
      *(float *)&v154 = v121; /*0x93eba1*/
      v122 = _mm_shuffle_ps((__m128)v154, (__m128)v154, 0); /*0x93ebaf*/
      v123 = _mm_sub_ps( /*0x93ebdc*/
               v168,
               _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v122), v120), _mm_mul_ps(v122, v119)));
      *(float *)&v155 = (v144 - v118[4].m128_f32[3]) * v118[5].m128_f32[3]; /*0x93ebdf*/
      v124 = _mm_shuffle_ps((__m128)v155, (__m128)v155, 0); /*0x93ebe9*/
      v125 = _mm_sub_ps( /*0x93ec00*/
               v168,
               _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v124), v118[4]), _mm_mul_ps(v124, v118[5])));
      v126 = _mm_mul_ps( /*0x93ec81*/
               _mm_sub_ps(
                 _mm_add_ps(
                   _mm_xor_ps(*((__m128 *)a1 + 6), (__m128)xmmword_A965C0),
                   _mm_sub_ps(
                     _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xC9), _mm_shuffle_ps(v123, v123, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xD2), _mm_shuffle_ps(v123, v123, 0xC9)))),
                 _mm_sub_ps(
                   _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xC9), _mm_shuffle_ps(v125, v125, 0xD2)),
                   _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xD2), _mm_shuffle_ps(v125, v125, 0xC9)))),
               v169);
      v160 = _mm_shuffle_ps(v126, v126, 0xAA).m128_f32[0] /*0x93ec9e*/
           + (float)(_mm_shuffle_ps(v126, v126, 0x55).m128_f32[0] + v126.m128_f32[0]);
      v127 = v160; /*0x93eca2*/
      if ( *((float *)&v162 + 1) < (double)v160 ) /*0x93ecb3*/
      {
        if ( v160 * flt_A57414 >= *((float *)&v162 + 1) ) /*0x93ecca*/
        {
          v127 = sub_93D820(v117, v118, &v185, &v168, &v169, (__m128 *)a1 + 6, v144); /*0x93eceb*/
          if ( *(float *)&SrcStr < v127 ) /*0x93ed00*/
            v127 = *(float *)&SrcStr; /*0x93ed04*/
        }
        else
        {
          v127 = *((float *)&v162 + 1); /*0x93eccc*/
        }
      }
      v150 = v127 * *(float *)(LODWORD(v163[2]) + 0xC); /*0x93ed1b*/
      if ( !((int (__thiscall *)(int **, _DWORD, int **, int **, __m128 *, _DWORD, _DWORD, _DWORD *))(*a1[3])[7])( /*0x93ed38*/
              a1[3],
              LODWORD(v163[3]),
              v116,
              a1[2],
              &v168,
              LODWORD(v144),
              LODWORD(v150),
              v167) )
      {
        v128 = v168; /*0x93ed46*/
        a7[0x303].m128_f32[0] = v150; /*0x93ed4f*/
        v129 = v167[0]; /*0x93ed55*/
        a7[1] = v128; /*0x93ed59*/
        a7[2] = v169; /*0x93ed62*/
        a7[0x303].m128_f32[1] = v144; /*0x93ed66*/
        v130 = v167[1]; /*0x93ed6c*/
        a7[0x303].m128_i32[2] = v129; /*0x93ed70*/
        a7[0x303].m128_i32[3] = v130; /*0x93ed76*/
      }
    }
  }
  else
  {
    while ( 1 ) /*0x93e036*/
    {
      v31 = fConstant_1 - v156; /*0x93e036*/
      if ( v31 <= *(float *)&SrcStr ) /*0x93e045*/
        break; /*0x93e045*/
      v32 = *a6; /*0x93e04b*/
      v33 = _mm_shuffle_ps(v32, v32, 0xC9); /*0x93e067*/
      v34 = _mm_shuffle_ps(*a6, *a6, 0xD2); /*0x93e071*/
      v35 = _mm_sub_ps( /*0x93e07b*/
              _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xC9), v34),
              _mm_mul_ps(_mm_shuffle_ps(v185, v185, 0xD2), v33));
      v36 = _mm_mul_ps(v35, v35); /*0x93e086*/
      v37 = _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xD2), v33); /*0x93e094*/
      v38 = _mm_mul_ps(_mm_shuffle_ps(v186, v186, 0xC9), v34); /*0x93e09e*/
      v34.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]; /*0x93e0a8*/
      v39 = _mm_shuffle_ps(v36, v36, 0xAA); /*0x93e0af*/
      v40 = v39; /*0x93e0b3*/
      v40.m128_f32[0] = v39.m128_f32[0] + v34.m128_f32[0]; /*0x93e0b6*/
      v171 = v40; /*0x93e0ba*/
      v171.m128_i32[0] = fsqrt(v39.m128_f32[0] + v34.m128_f32[0]); /*0x93e0c6*/
      v41 = _mm_sub_ps(v38, v37); /*0x93e0d7*/
      HIDWORD(v173[0]) = v171.m128_i32[0]; /*0x93e0e1*/
      v42 = _mm_mul_ps(v41, v41); /*0x93e0e8*/
      v41.m128_f32[0] = _mm_shuffle_ps(v42, v42, 0x55).m128_f32[0] + v42.m128_f32[0]; /*0x93e0f9*/
      v43 = _mm_shuffle_ps(v42, v42, 0xAA); /*0x93e0fd*/
      v43.m128_f32[0] = v43.m128_f32[0] + v41.m128_f32[0]; /*0x93e100*/
      v44 = *((__m128 *)a1 + 6); /*0x93e104*/
      v171 = v43; /*0x93e108*/
      v171.m128_i32[0] = fsqrt(v43.m128_f32[0]); /*0x93e114*/
      v172 = v171.m128_i32[0]; /*0x93e12c*/
      v45 = _mm_mul_ps(v44, v32); /*0x93e147*/
      v159 = v171.m128_f32[0] * *(float *)(LODWORD(v163[0]) + 0xA0) /*0x93e160*/
           + *((float *)v173 + 1) * *(float *)(LODWORD(v23) + 0xA0);
      v160 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0] /*0x93e170*/
           + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
      v46 = v160 + v159; /*0x93e178*/
      v161 = v46; /*0x93e17c*/
      if ( v46 <= *(float *)&SrcStr || a6->m128_f32[3] - v161 * v31 > *(float *)&a3 ) /*0x93e1a4*/
        break; /*0x93e1a4*/
      v47 = (a6->m128_f32[3] - *(float *)&a3) / v161; /*0x93e1b0*/
      v142 = v47; /*0x93e1b4*/
      if ( v47 >= flt_A3D9A4 || LOBYTE(v170) || !v164 || v160 * flt_A31C80 >= v159 ) /*0x93e1f7*/
      {
        v58 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93e3bd*/
      }
      else
      {
        if ( !v175.m128_i32[2] ) /*0x93e206*/
        {
          v48 = (float *)**a1; /*0x93e20e*/
          v49 = (*a1)[2]; /*0x93e210*/
          v50 = a1[1]; /*0x93e213*/
          v51 = *v50; /*0x93e216*/
          v175.m128_i32[1] = (__int32)v50[2]; /*0x93e21b*/
          v175.m128_i32[0] = (__int32)v49; /*0x93e222*/
          v52 = *((float *)v51 + 3) + v48[3]; /*0x93e22c*/
          LODWORD(v173[0]) = v175.m128_i32[1]; /*0x93e22f*/
          v53 = a1[2]; /*0x93e236*/
          v167[0] = v49; /*0x93e23c*/
          v177 = v52; /*0x93e240*/
          v182 = v53 + 4; /*0x93e247*/
          *(__m128 *)&v184[1] = v44; /*0x93e255*/
          (*(void (__thiscall **)(float *, _QWORD *))(*(_DWORD *)v48 + 0x1C))(v48, &v173[1]); /*0x93e262*/
          v54 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x93e27c*/
          v176 = v173[1]; /*0x93e282*/
          v175.m128_i32[3] = v173[1]; /*0x93e289*/
          v159 = *(float *)(v54 + 0x20); /*0x93e29a*/
          v55 = 0x10 * (LODWORD(v173[1]) + 1) + LODWORD(v159); /*0x93e29e*/
          if ( v55 > *(_DWORD *)(v54 + 0x2C) ) /*0x93e2a3*/
          {
            v56 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v54 + 0xC))(v54, 0x10 * (LODWORD(v173[1]) + 1)); /*0x93e2b1*/
          }
          else
          {
            v56 = LODWORD(v159); /*0x93e2a5*/
            *(_DWORD *)(v54 + 0x20) = v55; /*0x93e2a9*/
          }
          v175.m128_i32[2] = v56; /*0x93e2b4*/
          (*(void (__thiscall **)(float *, int))(*(_DWORD *)v48 + 0x20))(v48, v56); /*0x93e2c0*/
          v57 = v186.m128_f32[3] * *(float *)(LODWORD(v173[0]) + 0xA0) * v186.m128_f32[3] /*0x93e2f6*/
              + v185.m128_f32[3] * *(float *)(v167[0] + 0xA0) * v185.m128_f32[3];
          v178 = v57; /*0x93e2f8*/
          v179 = fConstant_1 / (v57 + flt_AA1DC8); /*0x93e30b*/
        }
        v58 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93e31a*/
        v59 = MEMORY[0xBA9DE4]; /*0x93e321*/
        v183 = v161; /*0x93e327*/
        v60 = v58[v59]; /*0x93e32e*/
        v187 = v156; /*0x93e331*/
        if ( *(_DWORD *)(v60 + 0x1A4) < *(_DWORD *)(v60 + 0x1A8) ) /*0x93e344*/
        {
          v61 = *(_DWORD **)(v60 + 0x1A4); /*0x93e346*/
          v167[0] = v60; /*0x93e34c*/
          *v61 = "Stplane"; /*0x93e350*/
          v62 = __rdtsc(); /*0x93e356*/
          LODWORD(v163[3]) = v62; /*0x93e358*/
          HIDWORD(v62) = v167[0]; /*0x93e360*/
          v61[1] = v62; /*0x93e364*/
          *(_DWORD *)(HIDWORD(v62) + 0x1A4) = v61 + 3; /*0x93e36a*/
        }
        v159 = 1.0; /*0x93e382*/
        sub_93DB40(&v175, v168.m128_f32, &v159); /*0x93e38a*/
        v63 = v159 - v156; /*0x93e393*/
        if ( v63 >= v142 + v142 ) /*0x93e3a9*/
          v142 = v63; /*0x93e3b7*/
        else
          LOBYTE(v170) = 1; /*0x93e3ad*/
      }
      if ( v142 + v156 >= fConstant_1 ) /*0x93e3d7*/
        goto LABEL_79; /*0x93e3d7*/
      *((float *)&v162 + 1) = v156; /*0x93e3e9*/
      if ( v168.m128_f32[2] > (double)v142 ) /*0x93e3f2*/
        v142 = v168.m128_f32[2]; /*0x93e3f8*/
      v64 = v142 + v156; /*0x93e400*/
      v156 = v64; /*0x93e404*/
      if ( v64 >= fConstant_1 ) /*0x93e413*/
        v156 = 1.0; /*0x93e415*/
      v65 = v58[MEMORY[0xBA9DE4]]; /*0x93e426*/
      v66 = *a6; /*0x93e429*/
      v165 = a6->m128_f32[3]; /*0x93e42c*/
      v67 = *(_DWORD *)(v65 + 0x1A4) < *(_DWORD *)(v65 + 0x1A8); /*0x93e436*/
      *(__m128 *)&v188[1] = v66; /*0x93e43c*/
      if ( v67 ) /*0x93e444*/
      {
        v68 = v65; /*0x93e446*/
        v69 = *(_DWORD **)(v65 + 0x1A4); /*0x93e448*/
        *v69 = "StsepNormal"; /*0x93e44e*/
        v70 = __rdtsc(); /*0x93e454*/
        LODWORD(v163[2]) = v70; /*0x93e456*/
        v69[1] = v70; /*0x93e45e*/
        *(_DWORD *)(v68 + 0x1A4) = v69 + 3; /*0x93e464*/
      }
      v71 = a1[2]; /*0x93e46a*/
      v72 = *((float *)v71 + 4); /*0x93e474*/
      v159 = v156 * *((float *)v71 + 6); /*0x93e482*/
      sub_8DD340((__m128 *)(LODWORD(v163[1]) + 0x40), v72, v159, v196); /*0x93e494*/
      sub_8DD340((__m128 *)(LODWORD(v163[0]) + 0x40), *((float *)v71 + 4), v159, &v189); /*0x93e4b1*/
      ++v166; /*0x93e4d5*/
      sub_8B1FF0(&v192, v196, &v189); /*0x93e4d9*/
      sub_93C690(&v197, v151, (int *)v162, &v192, &v174); /*0x93e4ff*/
      v73 = v174; /*0x93e504*/
      v74 = v197.m128_i32[0] == 1; /*0x93e54e*/
      *a6 = _mm_add_ps( /*0x93e556*/
              _mm_add_ps(
                _mm_mul_ps(v196[0], _mm_shuffle_ps(v174, v174, 0)),
                _mm_mul_ps(v196[1], _mm_shuffle_ps(v174, v174, 0x55))),
              _mm_mul_ps(v196[2], _mm_shuffle_ps(v174, v174, 0xAA)));
      if ( v74 ) /*0x93e559*/
      {
        v75 = v200[0]; /*0x93e55b*/
      }
      else if ( v197.m128_i32[1] == 1 ) /*0x93e56c*/
      {
        v76 = _mm_shuffle_ps(v73, v73, 0xFF); /*0x93e571*/
        v75 = _mm_add_ps(v201[0], _mm_mul_ps(_mm_shuffle_ps(v76, v76, 0), v73)); /*0x93e587*/
      }
      else
      {
        v75 = v203; /*0x93e58c*/
      }
      v77 = _mm_shuffle_ps(v73, v73, 0xFF); /*0x93e5b2*/
      v78 = _mm_sub_ps(_mm_sub_ps(v75, _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v73)), v195); /*0x93e5cb*/
      v79 = _mm_shuffle_ps(v194, v194, 0x44); /*0x93e5d9*/
      v80 = _mm_shuffle_ps(v192, v193, 0x44); /*0x93e5eb*/
      v81 = v190; /*0x93e627*/
      v30 = v199; /*0x93e62f*/
      v82 = v189; /*0x93e639*/
      v181 = _mm_add_ps( /*0x93e641*/
               _mm_add_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v80, v79, 0x88), _mm_shuffle_ps(v78, v78, 0)),
                 _mm_mul_ps(_mm_shuffle_ps(v80, v79, 0xDD), _mm_shuffle_ps(v78, v78, 0x55))),
               _mm_mul_ps(
                 _mm_shuffle_ps(_mm_shuffle_ps(v192, v193, 0xEE), _mm_shuffle_ps(v194, v194, 0xEE), 0x88),
                 _mm_shuffle_ps(v78, v78, 0xAA)));
      v83 = _mm_shuffle_ps(v191, v191, 0x44); /*0x93e64f*/
      v84 = v191; /*0x93e656*/
      v85 = _mm_shuffle_ps(v189, v190, 0x44); /*0x93e65c*/
      a6->m128_f32[3] = v174.m128_f32[3] - *((float *)v151 + 3) - *(float *)(v162 + 0xC); /*0x93e660*/
      v157 = a6->m128_f32[3]; /*0x93e669*/
      v86 = _mm_add_ps( /*0x93e6b2*/
              _mm_add_ps(
                _mm_mul_ps(_mm_shuffle_ps(v85, v83, 0x88), _mm_shuffle_ps(*a6, *a6, 0)),
                _mm_mul_ps(_mm_shuffle_ps(v85, v83, 0xDD), _mm_shuffle_ps(*a6, *a6, 0x55))),
              _mm_mul_ps(
                _mm_shuffle_ps(_mm_shuffle_ps(v82, v81, 0xEE), _mm_shuffle_ps(v84, v84, 0xEE), 0x88),
                _mm_shuffle_ps(*a6, *a6, 0xAA)));
      v164 = 1; /*0x93e6b5*/
      v180 = v86; /*0x93e6ba*/
      if ( v157 <= (double)v148 ) /*0x93e6c2*/
        goto LABEL_39; /*0x93e6c2*/
      v23 = v163[1]; /*0x93e02b*/
    }
  }
  v58 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x93ed80*/
LABEL_79:
  v131 = v175.m128_i32[2]; /*0x93ed87*/
  v132 = MEMORY[0xBA9DE4]; /*0x93ed90*/
  if ( v175.m128_i32[2] ) /*0x93ed96*/
  {
    v133 = *(_DWORD **)(v58[v132] + 0x19C); /*0x93ed9b*/
    v74 = v175.m128_i32[2] == v133[0xA]; /*0x93eda1*/
    v133[8] = v175.m128_i32[2]; /*0x93eda4*/
    if ( v74 ) /*0x93eda7*/
      (*(void (__thiscall **)(_DWORD *, __int32))(*v133 + 0x10))(v133, v131); /*0x93edac*/
  }
  v134 = v58[v132]; /*0x93edaf*/
  if ( *(_DWORD *)(v134 + 0x1A4) < *(_DWORD *)(v134 + 0x1A8) ) /*0x93edbe*/
  {
    v135 = (double)v166; /*0x93edc0*/
    v136 = v58[v132]; /*0x93edc4*/
    v137 = *(_DWORD *)(v134 + 0x1A4); /*0x93edc6*/
    *(_DWORD *)v137 = "MinumIter"; /*0x93edcc*/
    *(float *)(v137 + 4) = v135; /*0x93edd2*/
    *(_DWORD *)(v136 + 0x1A4) = v137 + 8; /*0x93edd8*/
  }
  if ( v199 ) /*0x93ede7*/
    sub_93B660(&v197, (int)a5); /*0x93edf4*/
  LODWORD(v138) = v58[v132]; /*0x93edf9*/
  if ( *(_DWORD *)(v138 + 0x1A4) < *(_DWORD *)(v138 + 0x1A8) ) /*0x93ee08*/
  {
    v139 = v58[v132]; /*0x93ee0a*/
    v140 = *(_DWORD **)(v138 + 0x1A4); /*0x93ee0c*/
    *v140 = "lt"; /*0x93ee12*/
    v138 = __rdtsc(); /*0x93ee18*/
    v140[1] = v138; /*0x93ee22*/
    *(_DWORD *)(v139 + 0x1A4) = v140 + 3; /*0x93ee28*/
  }
  return v138; /*0x93ee2e*/
}
