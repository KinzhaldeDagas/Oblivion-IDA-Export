int __thiscall sub_907B30(_DWORD *this, _DWORD *a2, _DWORD *a3, float *a4, int a5)
{
  int v5; // edx
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  __m128 *v11; // eax
  __m128 *v12; // edi
  __m128 *v13; // esi
  bool v14; // zf
  double v15; // st7
  double v16; // st6
  __m128 v17; // xmm0
  double v18; // st5
  double v19; // st4
  __m128 v20; // xmm3
  __m128 v21; // xmm5
  char v22; // al
  __m128 v23; // xmm4
  __m128 v24; // xmm0
  __m128 *v25; // eax
  __m128 v26; // xmm4
  __m128 v27; // xmm0
  __m128 v28; // xmm1
  __m128 v29; // xmm5
  __m128 v30; // xmm2
  __m128 v31; // xmm0
  __m128 v32; // xmm1
  __m128 v33; // xmm2
  __m128 v34; // xmm5
  __m128 v35; // xmm0
  __m128 v36; // xmm6
  __m128 v37; // xmm3
  __m128 v38; // xmm2
  __m128 *v39; // eax
  __m128 v40; // xmm1
  __m128 v41; // xmm4
  __m128 v42; // xmm2
  __m128 v43; // xmm4
  int v44; // ecx
  int v45; // edi
  const void **v46; // esi
  int v47; // ecx
  char *v48; // edx
  char *v49; // eax
  char *v50; // ebx
  int v51; // eax
  char *v52; // edx
  unsigned int v53; // edx
  signed int v54; // eax
  int v55; // ecx
  _DWORD *v56; // ecx
  const void *v57; // eax
  char *v58; // edi
  char *v59; // ecx
  int v60; // ebx
  int v61; // edi
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // edi
  _DWORD *v66; // edx
  char *v67; // edi
  int v68; // ecx
  int v69; // ebx
  int v70; // eax
  int v71; // ecx
  int v72; // ebx
  int v73; // eax
  int v74; // ecx
  int (__stdcall ***v75)(char); // eax
  int v76; // edx
  _DWORD *v77; // edi
  char *v78; // ebx
  _DWORD *v79; // ecx
  int v80; // eax
  _DWORD *v81; // eax
  int v82; // esi
  unsigned int v83; // edx
  int v84; // eax
  int v85; // eax
  int v86; // ecx
  bool v87; // cc
  int v88; // esi
  int v89; // ecx
  int v90; // esi
  int v91; // ecx
  int v92; // eax
  int v93; // ecx
  int v94; // esi
  int v95; // eax
  int v96; // ecx
  int v97; // eax
  _DWORD *i; // esi
  int v99; // eax
  int v100; // esi
  int v101; // eax
  int v102; // edi
  int v103; // esi
  int v104; // eax
  int v105; // ecx
  _DWORD *v106; // esi
  int v107; // edx
  int v108; // eax
  int v109; // ecx
  int v110; // ecx
  _DWORD *v111; // eax
  _DWORD *v112; // esi
  _DWORD *v113; // eax
  _DWORD *v114; // ecx
  _DWORD *v115; // edi
  int v116; // esi
  _DWORD *v117; // ecx
  int v118; // eax
  int v119; // ecx
  int v120; // ecx
  int *v121; // esi
  int *v122; // ebx
  int v123; // eax
  _DWORD *v124; // edx
  bool v125; // cf
  int v126; // edx
  _DWORD *v127; // edi
  unsigned __int64 v128; // rax
  int k; // edi
  int v130; // eax
  int v131; // ecx
  _DWORD *v132; // ecx
  unsigned __int64 v133; // rax
  int v134; // esi
  _DWORD *v135; // ecx
  float v137; // [esp+2Ch] [ebp-708h]
  float v138; // [esp+2Ch] [ebp-708h]
  __m128 *v139; // [esp+30h] [ebp-704h]
  unsigned int v140; // [esp+48h] [ebp-6ECh]
  unsigned int v141; // [esp+48h] [ebp-6ECh]
  unsigned int v142; // [esp+48h] [ebp-6ECh]
  unsigned int v143; // [esp+48h] [ebp-6ECh]
  unsigned int v144; // [esp+48h] [ebp-6ECh]
  char *j; // [esp+48h] [ebp-6ECh]
  int v146; // [esp+48h] [ebp-6ECh]
  int v147; // [esp+48h] [ebp-6ECh]
  int v148; // [esp+48h] [ebp-6ECh]
  char *v149; // [esp+4Ch] [ebp-6E8h]
  char *v150; // [esp+4Ch] [ebp-6E8h]
  _DWORD *v151; // [esp+4Ch] [ebp-6E8h]
  float v152; // [esp+50h] [ebp-6E4h]
  int v153; // [esp+50h] [ebp-6E4h]
  int v154; // [esp+50h] [ebp-6E4h]
  int v155; // [esp+50h] [ebp-6E4h]
  int v156; // [esp+50h] [ebp-6E4h]
  int v157; // [esp+54h] [ebp-6E0h]
  char *v158; // [esp+54h] [ebp-6E0h]
  int v159; // [esp+54h] [ebp-6E0h]
  _DWORD v160[9]; // [esp+58h] [ebp-6DCh] BYREF
  _DWORD *v161; // [esp+7Ch] [ebp-6B8h]
  _DWORD *v162; // [esp+80h] [ebp-6B4h]
  _DWORD v163[4]; // [esp+84h] [ebp-6B0h] BYREF
  __m128 v164; // [esp+94h] [ebp-6A0h] BYREF
  __m128 v165; // [esp+A4h] [ebp-690h]
  __m128 v166[4]; // [esp+B4h] [ebp-680h] BYREF
  char *v167; // [esp+F4h] [ebp-640h] BYREF
  int v168; // [esp+F8h] [ebp-63Ch]
  int v169; // [esp+FCh] [ebp-638h]
  char v170; // [esp+100h] [ebp-634h] BYREF
  int v171; // [esp+304h] [ebp-430h]
  int v172; // [esp+308h] [ebp-42Ch] BYREF
  int v173; // [esp+30Ch] [ebp-428h]
  int v174; // [esp+310h] [ebp-424h]
  _DWORD *v175; // [esp+314h] [ebp-420h]
  char v176[512]; // [esp+324h] [ebp-410h] BYREF
  char v177[524]; // [esp+524h] [ebp-210h] BYREF

  v5 = MEMORY[0xBA9DE4]; /*0x907b41*/
  v162 = this; /*0x907b48*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x907b4c*/
  v7 = ThreadLocalStoragePointer[v5]; /*0x907b5b*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x907b6b*/
  {
    v8 = ThreadLocalStoragePointer[v5]; /*0x907b6d*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x907b6f*/
    *v9 = "LtBvTree"; /*0x907b75*/
    v9[3] = "QueryTree"; /*0x907b7b*/
    v10 = __rdtsc(); /*0x907b82*/
    v9[1] = v10; /*0x907b8c*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4; /*0x907b92*/
  }
  v11 = (__m128 *)a3[2]; /*0x907ba1*/
  v139 = (__m128 *)a2[2]; /*0x907bab*/
  v167 = &v170; /*0x907bac*/
  v168 = 0; /*0x907bbb*/
  v169 = 0x80000080; /*0x907bc6*/
  sub_8B1FF0(v166, v11, v139); /*0x907bd1*/
  v12 = (__m128 *)a2[2]; /*0x907bd6*/
  v13 = (__m128 *)a3[2]; /*0x907bd9*/
  v14 = byte_B2FDE0 == 0; /*0x907bf4*/
  v15 = a4[6] * v12[5].m128_f32[3]; /*0x907bf6*/
  v16 = a4[6] * v13[5].m128_f32[3]; /*0x907bf8*/
  *(float *)&v140 = v15; /*0x907c00*/
  v17 = (__m128)v140; /*0x907c04*/
  *(float *)&v141 = v16; /*0x907c0a*/
  v18 = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v16; /*0x907c32*/
  v19 = v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v15; /*0x907c4d*/
  *(__m128 *)&v160[3] = _mm_add_ps( /*0x907c52*/
                          _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sub_ps(v12[4], v12[5])),
                          _mm_mul_ps(_mm_shuffle_ps((__m128)v141, (__m128)v141, 0), _mm_sub_ps(v13[5], v13[4])));
  *(float *)&v160[6] = v18 + v19; /*0x907c59*/
  if ( v14 ) /*0x907c61*/
    v160[2] = 0; /*0x907c70*/
  else
    v160[2] = v162 + 8; /*0x907c6a*/
  v20 = v13[2]; /*0x907c78*/
  v21 = v13[1]; /*0x907c84*/
  v22 = *(_BYTE *)(*((_DWORD *)a4 + 0xA) + 0x10); /*0x907c8b*/
  v23 = _mm_shuffle_ps(v20, v20, 0x44); /*0x907c93*/
  v24 = _mm_shuffle_ps(*v13, v21, 0x44); /*0x907c9d*/
  *(__m128 *)&v160[3] = _mm_add_ps( /*0x907cdc*/
                          _mm_add_ps(
                            _mm_mul_ps(
                              _mm_shuffle_ps(v24, v23, 0x88),
                              _mm_shuffle_ps(*(__m128 *)&v160[3], *(__m128 *)&v160[3], 0)),
                            _mm_mul_ps(
                              _mm_shuffle_ps(v24, v23, 0xDD),
                              _mm_shuffle_ps(*(__m128 *)&v160[3], *(__m128 *)&v160[3], 0x55))),
                          _mm_mul_ps(
                            _mm_shuffle_ps(_mm_shuffle_ps(*v13, v21, 0xEE), _mm_shuffle_ps(v20, v20, 0xEE), 0x88),
                            _mm_shuffle_ps(*(__m128 *)&v160[3], *(__m128 *)&v160[3], 0xAA)));
  if ( v22 ) /*0x907ce1*/
  {
    v152 = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v13[9].m128_f32[3]; /*0x907d0d*/
    v137 = (v12[9].m128_f32[3] + v13[9].m128_f32[3]) * v12[0xA].m128_f32[0] + v152 + a4[2] * kHeadBodyNormalMatchRadius; /*0x907d32*/
    (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)*a2 + 0xC))(v166, LODWORD(v137), &v164); /*0x907d36*/
    v25 = (__m128 *)a3[2]; /*0x907d45*/
    v26 = v25[2]; /*0x907d4c*/
    v27 = _mm_sub_ps(v12[5], v25[3]); /*0x907d65*/
    v28 = _mm_shuffle_ps(*v25, v25[1], 0x44); /*0x907d6b*/
    *(float *)&v142 = a4[2] * kHeadBodyNormalMatchRadius + v12[0xA].m128_f32[0] + v152; /*0x907d6f*/
    v29 = _mm_shuffle_ps(v26, v26, 0x44); /*0x907d7c*/
    v30 = _mm_shuffle_ps((__m128)v142, (__m128)v142, 0); /*0x907dbf*/
    v31 = _mm_add_ps( /*0x907dc6*/
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v28, v29, 0x88), _mm_shuffle_ps(v27, v27, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v28, v29, 0xDD), _mm_shuffle_ps(v27, v27, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*v25, v25[1], 0xEE), _mm_shuffle_ps(v26, v26, 0xEE), 0x88),
              _mm_shuffle_ps(v27, v27, 0xAA)));
    v32 = _mm_max_ps(v164, _mm_sub_ps(v31, v30)); /*0x907dd7*/
    v33 = _mm_min_ps(v165, _mm_add_ps(v31, v30)); /*0x907de5*/
    v164 = v32; /*0x907de8*/
    v165 = v33; /*0x907ded*/
    v34 = _mm_sub_ps(v33, v32); /*0x907e01*/
    if ( v13[9].m128_f32[3] <= (double)*(float *)&SrcStr ) /*0x907e09*/
    {
      v36 = *(__m128 *)&v160[3]; /*0x907e6a*/
    }
    else
    {
      v35 = _mm_sub_ps(v31, v13[8]); /*0x907e18*/
      *(float *)&v143 = v13[5].m128_f32[3] * a4[6]; /*0x907e29*/
      v36 = _mm_add_ps( /*0x907e60*/
              *(__m128 *)&v160[3],
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v143, (__m128)v143, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xC9), _mm_shuffle_ps(v13[9], v13[9], 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0xD2), _mm_shuffle_ps(v13[9], v13[9], 0xC9)))));
      *(__m128 *)&v160[3] = v36; /*0x907e63*/
    }
    v37 = _mm_add_ps(v32, _mm_min_ps((__m128)0LL, v36)); /*0x907e7e*/
    v38 = _mm_add_ps(v33, _mm_max_ps((__m128)0LL, v36)); /*0x907e81*/
    v164 = v37; /*0x907e84*/
    v165 = v38; /*0x907e89*/
  }
  else
  {
    v138 = a4[2] * kHeadBodyNormalMatchRadius; /*0x907ead*/
    (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)*a2 + 0xC))(v166, LODWORD(v138), &v164); /*0x907eb1*/
    v38 = v165; /*0x907eb4*/
    v37 = v164; /*0x907eb9*/
    v36 = *(__m128 *)&v160[3]; /*0x907ebe*/
    v34 = _mm_sub_ps(v165, v164); /*0x907ec6*/
  }
  v39 = (__m128 *)v160[2]; /*0x907ec9*/
  if ( v160[2] ) /*0x907ecf*/
  {
    if ( ((unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(v38, *(__m128 *)(v160[2] + 0x10))) /*0x907ef5*/
        & (unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(*(__m128 *)v160[2], v37))
        & 7) == 7 )
    {
      if ( v169 >= 0 ) /*0x90802b*/
      {
        v51 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x908040*/
        if ( !v51 ) /*0x908048*/
          v51 = unk_BA7D9C; /*0x90804a*/
        sub_8A75D0(v51, v167, 4 * v169, 0x14); /*0x908065*/
      }
      goto LABEL_119; /*0x908065*/
    }
    *(float *)&v144 = a4[2] * kHeadBodyNormalMatchRadius; /*0x907f07*/
    v40 = _mm_shuffle_ps((__m128)v144, (__m128)v144, 0); /*0x907f11*/
    v41 = _mm_add_ps(v38, v40); /*0x907f1b*/
    v42 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3ECCCCCDu, (__m128)0x3ECCCCCDu, 0), v34); /*0x907f44*/
    v43 = _mm_add_ps( /*0x907f7c*/
            v41,
            _mm_min_ps(
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0),
                _mm_min_ps((__m128)0LL, *(__m128 *)&v160[3])),
              v42));
    v164 = _mm_add_ps( /*0x907f7f*/
             _mm_sub_ps(v37, v40),
             _mm_max_ps(
               _mm_mul_ps(_mm_shuffle_ps((__m128)0xC0000000, (__m128)0xC0000000, 0), _mm_max_ps((__m128)0LL, v36)),
               _mm_xor_ps(v42, (__m128)xmmword_A965C0)));
    v165 = v43; /*0x907f84*/
    *(__m128 *)v160[2] = v164; /*0x907f89*/
    v39[1] = v43; /*0x907f8c*/
  }
  (*(void (__thiscall **)(_DWORD, __m128 *, char **))(*(_DWORD *)*a3 + 0x24))(*a3, &v164, &v167); /*0x907fa4*/
  v44 = a3[2]; /*0x907fac*/
  v171 = *(_DWORD *)(*a3 + 0xC); /*0x907faf*/
  v14 = unk_BA81CD == 0; /*0x907fbb*/
  v175 = a3; /*0x907fbd*/
  v174 = v44; /*0x907fc4*/
  if ( v14 ) /*0x907fcb*/
  {
    v76 = v168; /*0x90830c*/
    LOBYTE(v157) = 0; /*0x908316*/
    if ( v168 > 1 ) /*0x90831b*/
    {
      sub_8F6580((int)v167, 0, v168 - 1, v157); /*0x90832e*/
      v76 = v168; /*0x908333*/
    }
    v77 = (_DWORD *)v162[3]; /*0x908344*/
    v78 = v167; /*0x90834a*/
    v147 = v162[2]; /*0x908354*/
    v79 = &v77[3 * v162[4]]; /*0x908358*/
    v160[2] = &v167[4 * v76]; /*0x90835e*/
    v160[3] = 0; /*0x908364*/
    v160[4] = 0; /*0x908368*/
    v80 = MEMORY[0xBA9DE4]; /*0x90836c*/
    v161 = v79; /*0x908371*/
    v156 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v80); /*0x90837f*/
    v81 = *(_DWORD **)(v156 + 0x19C); /*0x908383*/
    v82 = v76; /*0x90838b*/
    v160[5] = 0x80000000; /*0x90838d*/
    if ( !v81 ) /*0x908395*/
      v81 = (_DWORD *)unk_BA7D9C; /*0x908397*/
    v83 = (0xC * v76 + 0x10) & 0xFFFFFFF0; /*0x9083a9*/
    v159 = v81[8]; /*0x9083ac*/
    if ( v83 + v159 > v81[0xB] ) /*0x9083b5*/
    {
      v84 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v81 + 0xC))(v81, v83); /*0x9083cd*/
    }
    else
    {
      v81[8] = v83 + v159; /*0x9083b7*/
      v84 = v159; /*0x9083ba*/
    }
    v160[3] = v84; /*0x9083d8*/
    v160[5] = v82 | 0x80000000; /*0x9083dc*/
    v160[6] = v84; /*0x9083e0*/
    v85 = v168; /*0x9083e4*/
    v86 = v82 & 0x3FFFFFFF; /*0x9083eb*/
    v87 = (v82 & 0x3FFFFFFF) < v168; /*0x9083f1*/
    v88 = v168; /*0x9083f3*/
    if ( v87 ) /*0x9083f5*/
    {
      v89 = 2 * v86; /*0x9083f7*/
      if ( v168 < v89 ) /*0x9083fb*/
        v85 = v89; /*0x9083fd*/
      sub_8A6E40((const void **)&v160[3], v85, 0xC); /*0x908407*/
    }
    v160[4] = v88; /*0x908417*/
    v151 = (_DWORD *)v160[3]; /*0x90841b*/
    if ( v77 != v161 ) /*0x90841f*/
    {
      while ( v78 != (char *)v160[2] ) /*0x908429*/
      {
        v90 = *(_DWORD *)v78; /*0x90842f*/
        if ( *(_DWORD *)v78 == *v77 ) /*0x908435*/
        {
          *v151 = *v77; /*0x908441*/
          v151[1] = v77[1]; /*0x908446*/
          v91 = v77[2]; /*0x908449*/
          v77 += 3; /*0x90844f*/
          v151[2] = v91; /*0x908452*/
          v151 += 3; /*0x908455*/
          v78 += 4; /*0x908459*/
        }
        else if ( *(_DWORD *)v78 >= *v77 ) /*0x908461*/
        {
          v97 = v77[2]; /*0x908550*/
          if ( v97 ) /*0x908555*/
            (*(void (**)(void))(*(_DWORD *)v97 + 0x18))(); /*0x90855b*/
          v77 += 3; /*0x90855e*/
        }
        else
        {
          v92 = (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)v171 + 0x28))(v171, v90, v176); /*0x908479*/
          v173 = v90; /*0x90847c*/
          v172 = v92; /*0x908483*/
          if ( *(_BYTE *)(***((int (__thiscall ****)(_DWORD, char *, float *, _DWORD *, int *, int, _DWORD))a4 + 1))( /*0x9084b1*/
                           *((_DWORD *)a4 + 1),
                           (char *)v160 + 3,
                           a4,
                           a2,
                           &v172,
                           v171,
                           *(_DWORD *)v78) )
          {
            v93 = *a2; /*0x9084c1*/
            *(float *)&v160[1] = *a4; /*0x9084c3*/
            v94 = (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 8))(v93); /*0x9084d3*/
            v95 = (*(int (__thiscall **)(int))(*(_DWORD *)v172 + 8))(v172); /*0x9084d7*/
            if ( *((_BYTE *)a4 + 0xC) ) /*0x9084dd*/
              v96 = v160[1] + 0x590; /*0x9084e8*/
            else
              v96 = v160[1] + 0x190; /*0x9084f0*/
            v151[2] = (*(int (__cdecl **)(_DWORD *, int *, float *, int))(v160[1] /*0x90852b*/
                                                                        + 0x14
                                                                        * *(unsigned __int8 *)(v95 + 0x20 * v94 + v96)
                                                                        + 0x990))(
                        a2,
                        &v172,
                        a4,
                        v147);
          }
          else
          {
            v151[2] = sub_8E0970(); /*0x908539*/
          }
          *v151 = *(_DWORD *)v78; /*0x908542*/
          v151 += 3; /*0x908547*/
          v78 += 4; /*0x90854b*/
        }
        if ( v77 == v161 ) /*0x908565*/
          goto LABEL_88; /*0x908565*/
      }
      for ( i = v161; v77 != i; v77 += 3 ) /*0x908573*/
      {
        v99 = v77[2]; /*0x908575*/
        if ( v99 ) /*0x90857a*/
          (*(void (**)(void))(*(_DWORD *)v99 + 0x18))(); /*0x908580*/
      }
    }
LABEL_88:
    while ( v78 != (char *)v160[2] ) /*0x90858e*/
    {
      v100 = *(_DWORD *)v78; /*0x908594*/
      v101 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)v171 + 0x28))(v171, *(_DWORD *)v78, v176); /*0x9085a8*/
      v173 = v100; /*0x9085ab*/
      v172 = v101; /*0x9085b2*/
      if ( *(_BYTE *)(***((int (__thiscall ****)(_DWORD, char *, float *, _DWORD *, int *, int, _DWORD))a4 + 1))( /*0x9085e0*/
                       *((_DWORD *)a4 + 1),
                       (char *)v160 + 3,
                       a4,
                       a2,
                       &v172,
                       v171,
                       *(_DWORD *)v78) )
      {
        v102 = *(_DWORD *)a4; /*0x9085e8*/
        v103 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x9085fc*/
        v104 = (*(int (__thiscall **)(int))(*(_DWORD *)v172 + 8))(v172); /*0x9085fe*/
        v105 = v102 + 0x590; /*0x908609*/
        if ( !*((_BYTE *)a4 + 0xC) ) /*0x908604*/
          v105 = v102 + 0x190; /*0x908611*/
        v151[2] = (*(int (__cdecl **)(_DWORD *, int *, float *, int))(v102 /*0x908645*/
                                                                    + 0x14
                                                                    * *(unsigned __int8 *)(v104 + 0x20 * v103 + v105)
                                                                    + 0x990))(
                    a2,
                    &v172,
                    a4,
                    v147);
      }
      else
      {
        v151[2] = sub_8E0970(); /*0x908653*/
      }
      *v151 = *(_DWORD *)v78; /*0x90865c*/
      v151 += 3; /*0x908661*/
      v78 += 4; /*0x908669*/
    }
    v106 = v162; /*0x908674*/
    v107 = v160[4]; /*0x90867b*/
    v108 = v162[5] & 0x3FFFFFFF; /*0x908681*/
    if ( v108 < v160[4] ) /*0x908688*/
    {
      if ( (int)v162[5] >= 0 ) /*0x90868c*/
      {
        v109 = *(_DWORD *)(v156 + 0x19C); /*0x908692*/
        if ( !v109 ) /*0x90869a*/
          v109 = unk_BA7D9C; /*0x90869c*/
        sub_8A75D0(v109, (_DWORD *)v162[3], 0xC * v108, 0x14); /*0x9086af*/
      }
      v110 = *(_DWORD *)(v156 + 0x19C); /*0x9086b8*/
      if ( !v110 ) /*0x9086c0*/
        v110 = unk_BA7D9C; /*0x9086c2*/
      v111 = sub_8A7560(v110, 0xC * v160[4], 0x14); /*0x9086d5*/
      v107 = v160[4]; /*0x9086da*/
      v106[3] = v111; /*0x9086de*/
      v106[5] = v107 | v106[5] & 0x40000000; /*0x9086eb*/
    }
    v106[4] = v107; /*0x9086f0*/
    v112 = (_DWORD *)v106[3]; /*0x9086f3*/
    if ( v107 > 0 ) /*0x9086f6*/
    {
      v113 = (_DWORD *)v160[3]; /*0x9086f8*/
      v114 = v112; /*0x9086fc*/
      do /*0x90871b*/
      {
        v115 = v114; /*0x908704*/
        *v114 = *v113; /*0x908706*/
        v114[1] = v113[1]; /*0x90870b*/
        v116 = v113[2]; /*0x90870e*/
        v113 += 3; /*0x908711*/
        v114 += 3; /*0x908714*/
        --v107; /*0x908717*/
        v115[2] = v116; /*0x908718*/
      }
      while ( v107 ); /*0x90871b*/
    }
    v117 = *(_DWORD **)(v156 + 0x19C); /*0x908721*/
    v118 = v160[6]; /*0x908729*/
    if ( !v117 ) /*0x90872d*/
      v117 = (_DWORD *)unk_BA7D9C; /*0x90872f*/
    v14 = v160[6] == v117[0xA]; /*0x908735*/
    v117[8] = v160[6]; /*0x908738*/
    if ( v14 ) /*0x90873b*/
      (*(void (__thiscall **)(_DWORD *, int))(*v117 + 0x10))(v117, v118); /*0x908740*/
    if ( v160[5] >= 0 ) /*0x908749*/
    {
      v119 = *(_DWORD *)(v156 + 0x19C); /*0x90874b*/
      if ( !v119 ) /*0x908753*/
        v119 = unk_BA7D9C; /*0x908755*/
      sub_8A75D0(v119, (_DWORD *)v160[3], 0xC * (v160[5] & 0x3FFFFFFF), 0x14); /*0x90876e*/
    }
    v48 = v167; /*0x908773*/
  }
  else
  {
    v45 = v162[3]; /*0x907fdb*/
    v46 = (const void **)(v162 + 3); /*0x907fde*/
    v47 = v45 + 0xC * v162[4]; /*0x907fe4*/
    v161 = (_DWORD *)v162[2]; /*0x907ff0*/
    v48 = v167; /*0x907ff4*/
    v49 = &v167[4 * v168]; /*0x907ffb*/
    v160[1] = v47; /*0x907ffe*/
    v50 = v167; /*0x908002*/
    for ( j = v49; v45 != v160[1]; v45 += 0xC ) /*0x908008*/
    {
      if ( v50 == v49 || *(_DWORD *)v45 != *(_DWORD *)v50 ) /*0x908018*/
      {
        v50 = v48; /*0x90806c*/
        v149 = v48; /*0x90806e*/
        if ( v48 == v49 ) /*0x908072*/
        {
LABEL_28:
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v45 + 8) + 0x18))(*(_DWORD *)(v45 + 8)); /*0x908089*/
          v52 = (char *)*v46; /*0x908094*/
          v46[1] = (char *)v46[1] + 0xFFFFFFFF; /*0x908097*/
          v53 = (int)((unsigned __int64)(0x2AAAAAABLL * (v45 - (int)v52)) >> 0x20) >> 1; /*0x9080a8*/
          v54 = v53 + (v53 >> 0x1F); /*0x9080af*/
          if ( v54 < (int)v46[1] ) /*0x9080b3*/
          {
            v55 = 0xC * v54; /*0x9080b8*/
            v153 = 0xC * v54; /*0x9080bb*/
            do /*0x9080e8*/
            {
              v56 = (char *)*v46 + v55; /*0x9080c2*/
              *v56 = v56[3]; /*0x9080c9*/
              v56[1] = v56[4]; /*0x9080ce*/
              v56[2] = v56[5]; /*0x9080d4*/
              ++v54; /*0x9080de*/
              v55 = v153 + 0xC; /*0x9080df*/
              v153 += 0xC; /*0x9080e4*/
            }
            while ( v54 < (int)v46[1] ); /*0x9080e8*/
            v50 = v149; /*0x9080ea*/
          }
          v48 = v167; /*0x9080f2*/
          v45 -= 0xC; /*0x9080f9*/
          v160[1] -= 0xC; /*0x9080ff*/
          v49 = j; /*0x908103*/
        }
        else
        {
          while ( *(_DWORD *)v45 != *(_DWORD *)v50 ) /*0x908078*/
          {
            v50 += 4; /*0x90807e*/
            if ( v50 == v49 ) /*0x908083*/
            {
              v149 = v50; /*0x908085*/
              goto LABEL_28; /*0x908085*/
            }
          }
          v50 += 4; /*0x9081c6*/
        }
      }
      else
      {
        v50 += 4; /*0x90801a*/
      }
    }
    v57 = v46[1]; /*0x908116*/
    if ( (const void *)v168 != v57 ) /*0x908120*/
    {
      v58 = (char *)*v46; /*0x908126*/
      v154 = (int)*v46 + 0xC * (_DWORD)v57; /*0x90813a*/
      v59 = v48; /*0x90813e*/
      v150 = v48; /*0x908140*/
      v158 = &v48[4 * v168]; /*0x908144*/
      if ( v48 != v158 ) /*0x908148*/
      {
        do /*0x908301*/
        {
          if ( v58 == (char *)v154 || *(_DWORD *)v58 != *(_DWORD *)v59 ) /*0x90815a*/
          {
            v60 = (int)v57 + 1; /*0x908164*/
            v61 = (v59 - v48) >> 2; /*0x908167*/
            v146 = (int)v57 - v61; /*0x90816c*/
            v62 = (unsigned int)v46[2] & 0x3FFFFFFF; /*0x908173*/
            v160[2] = v60; /*0x90817a*/
            if ( v62 < v60 ) /*0x90817e*/
            {
              v63 = 2 * v62; /*0x908180*/
              if ( v60 >= v63 ) /*0x908184*/
                v63 = v60; /*0x908186*/
              sub_8A6E40(v46, v63, 0xC); /*0x90818c*/
            }
            v64 = 0xC * v61; /*0x90819d*/
            v65 = (int)*v46 + 0xC * v61; /*0x9081a1*/
            if ( v146 - 1 >= 0 ) /*0x9081ab*/
            {
              v66 = (_DWORD *)(v65 + 0xC + 0xC * (v146 - 1)); /*0x9081b0*/
              v155 = v146; /*0x9081bc*/
              do /*0x9081f2*/
              {
                *v66 = v66[0xFFFFFFFD]; /*0x9081d8*/
                v66[1] = v66[0xFFFFFFFE]; /*0x9081dd*/
                v66[2] = v66[0xFFFFFFFF]; /*0x9081e3*/
                v66 += 0xFFFFFFFD; /*0x9081ea*/
                --v155; /*0x9081ee*/
              }
              while ( v155 ); /*0x9081f2*/
              v60 = v160[2]; /*0x9081f4*/
            }
            v67 = (char *)*v46; /*0x9081fc*/
            v68 = v171; /*0x9081fe*/
            v46[1] = (const void *)v60; /*0x908205*/
            v69 = *(_DWORD *)v150; /*0x908208*/
            v58 = &v67[v64]; /*0x908212*/
            v70 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)v68 + 0x28))(v68, *(_DWORD *)v150, v176); /*0x908217*/
            v173 = v69; /*0x90821a*/
            v172 = v70; /*0x908225*/
            if ( *(_BYTE *)(***((int (__thiscall ****)(_DWORD, char *, float *, _DWORD *, int *, int, _DWORD))a4 + 1))( /*0x908253*/
                             *((_DWORD *)a4 + 1),
                             (char *)v160 + 3,
                             a4,
                             a2,
                             &v172,
                             v171,
                             *(_DWORD *)v150) )
            {
              v71 = *a2; /*0x90825f*/
              *(float *)&v160[1] = *a4; /*0x908261*/
              v72 = (*(int (__thiscall **)(int))(*(_DWORD *)v71 + 8))(v71); /*0x908271*/
              v73 = (*(int (__thiscall **)(int))(*(_DWORD *)v172 + 8))(v172); /*0x908275*/
              if ( *((_BYTE *)a4 + 0xC) ) /*0x90827b*/
                v74 = v160[1] + 0x590; /*0x908286*/
              else
                v74 = v160[1] + 0x190; /*0x90828e*/
              v75 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, float *, _DWORD *))(v160[1] + 0x14 * *(unsigned __int8 *)(v73 + 0x20 * v72 + v74) + 0x990))( /*0x9082c0*/
                                                 a2,
                                                 &v172,
                                                 a4,
                                                 v161);
            }
            else
            {
              v75 = sub_8E0970(); /*0x9082c7*/
            }
            *((_DWORD *)v58 + 2) = v75; /*0x9082cc*/
            *(_DWORD *)v58 = *(_DWORD *)v150; /*0x9082d5*/
            v57 = v46[1]; /*0x9082d7*/
            v59 = v150; /*0x9082e2*/
            v154 = (int)*v46 + 0xC * (_DWORD)v57; /*0x9082e6*/
            v48 = v167; /*0x9082ea*/
          }
          v59 += 4; /*0x9082f5*/
          v58 += 0xC; /*0x9082f8*/
          v150 = v59; /*0x9082fd*/
        }
        while ( v59 != v158 ); /*0x908301*/
      }
    }
  }
  if ( v169 >= 0 ) /*0x908783*/
  {
    v120 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x908795*/
    if ( !v120 ) /*0x90879d*/
      v120 = unk_BA7D9C; /*0x90879f*/
    sub_8A75D0(v120, v48, 4 * v169, 0x14); /*0x9087b1*/
  }
LABEL_119:
  v121 = (int *)v162[3]; /*0x9087b6*/
  v122 = &v121[3 * v162[4]]; /*0x9087c8*/
  v123 = MEMORY[0xBA9DE4]; /*0x9087ce*/
  v163[2] = a3[2]; /*0x9087d3*/
  v124 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9087d7*/
  v125 = *(_DWORD *)(v124[v123] + 0x1A4) < *(_DWORD *)(v124[v123] + 0x1A8); /*0x9087e7*/
  v163[3] = a3; /*0x9087ed*/
  if ( v125 ) /*0x9087f1*/
  {
    v126 = v124[MEMORY[0xBA9DE4]]; /*0x9087f8*/
    v127 = *(_DWORD **)(v126 + 0x1A4); /*0x9087fb*/
    v148 = v126; /*0x908801*/
    *v127 = "StNarrowPhase"; /*0x908805*/
    v128 = __rdtsc(); /*0x90880b*/
    v127[1] = v128; /*0x908819*/
    *(_DWORD *)(v148 + 0x1A4) = v127 + 3; /*0x90881f*/
  }
  for ( k = *(_DWORD *)(*a3 + 0xC); v121 != v122; v121 += 3 ) /*0x90882c*/
  {
    v130 = (*(int (__thiscall **)(int, int, char *))(*(_DWORD *)k + 0x28))(k, *v121, v177); /*0x90883f*/
    v131 = *v121; /*0x908842*/
    v163[0] = v130; /*0x908844*/
    v163[1] = v131; /*0x908854*/
    (*(void (__thiscall **)(int, _DWORD *, _DWORD *, float *, int))(*(_DWORD *)v121[2] + 0x14))( /*0x908862*/
      v121[2],
      a2,
      v163,
      a4,
      a5);
  }
  v132 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90886c*/
  LODWORD(v133) = v132[MEMORY[0xBA9DE4]]; /*0x908879*/
  if ( *(_DWORD *)(v133 + 0x1A4) < *(_DWORD *)(v133 + 0x1A8) ) /*0x908888*/
  {
    v134 = v132[MEMORY[0xBA9DE4]]; /*0x90888a*/
    v135 = *(_DWORD **)(v133 + 0x1A4); /*0x90888c*/
    *v135 = "lt"; /*0x908892*/
    v133 = __rdtsc(); /*0x908898*/
    v135[1] = v133; /*0x9088a2*/
    *(_DWORD *)(v134 + 0x1A4) = v135 + 3; /*0x9088a8*/
  }
  return v133; /*0x9088ae*/
}
