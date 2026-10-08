void __thiscall sub_94BE00(float *this, __m128 *a2, __m128 *a3, const void **a4)
{
  __m128 v5; // xmm0
  int i; // esi
  __m128 *v7; // eax
  __int32 j; // esi
  __m128 *v9; // eax
  __m128 v10; // xmm0
  float v11; // xmm1_4
  __m128 v12; // xmm2
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  int v15; // ecx
  __m128 v16; // xmm0
  _WORD *v17; // eax
  _WORD *v18; // eax
  int v19; // ecx
  _WORD *v20; // eax
  _WORD *v21; // edi
  double v22; // st7
  __m128 *v23; // esi
  __m128 *v24; // ebx
  __m128 *v25; // edi
  __m128 v26; // xmm6
  __m128 v27; // xmm2
  __m128 v28; // xmm0
  float v29; // xmm1_4
  __m128 v30; // xmm3
  __m128 v31; // xmm0
  __m128 v32; // xmm5
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  __m128 v37; // xmm0
  __m128 v38; // xmm7
  __m128 v39; // xmm0
  __m128 v40; // xmm0
  __m128 v41; // xmm3
  __m128 v42; // xmm0
  __m128 v43; // xmm6
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  float v46; // eax
  int v47; // ecx
  __m128 v48; // xmm0
  float v49; // esi
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  __m128 v53; // xmm1
  __m128 v54; // xmm2
  __m128 v55; // xmm0
  __m128 v56; // xmm0
  __m128 v57; // xmm0
  __m128 v58; // xmm1
  __m128 v59; // xmm0
  __m128 v60; // xmm0
  __m128 v61; // xmm1
  __m128 v62; // xmm0
  __m128 v63; // xmm0
  float v64; // xmm3_4
  __m128 v65; // xmm0
  __m128 v66; // xmm0
  __m128 v67; // xmm1
  __m128 v68; // xmm0
  __m128 v69; // xmm0
  float v70; // xmm3_4
  __m128 v71; // xmm0
  __m128 v72; // xmm0
  __m128 v73; // xmm1
  __m128 v74; // xmm0
  __m128 v75; // xmm3
  __m128 v76; // xmm0
  __m128 v77; // xmm0
  __m128 v78; // xmm0
  _WORD *v79; // esi
  int v80; // ecx
  char *v81; // esi
  int v82; // ebx
  __m128 *v83; // ecx
  int v84; // eax
  int v85; // ecx
  __m128 *v86; // edx
  __m128 *v87; // eax
  int v88; // esi
  int v89; // eax
  unsigned int v90; // edx
  double v91; // st7
  int v92; // eax
  int v93; // esi
  double v94; // st7
  _WORD *v95; // edi
  int v96; // eax
  int v97; // esi
  int v98; // [esp+8h] [ebp-37Ch]
  __m128 *v99; // [esp+10h] [ebp-374h]
  float v100; // [esp+10h] [ebp-374h]
  float v101; // [esp+2Ch] [ebp-358h]
  float v102; // [esp+2Ch] [ebp-358h]
  float v103; // [esp+30h] [ebp-354h]
  __m128 *v104; // [esp+30h] [ebp-354h]
  float v105; // [esp+30h] [ebp-354h]
  int k; // [esp+30h] [ebp-354h]
  __m128 *v107[7]; // [esp+34h] [ebp-350h] BYREF
  float v108; // [esp+50h] [ebp-334h]
  __m128 v109; // [esp+54h] [ebp-330h] BYREF
  __m128 v110; // [esp+64h] [ebp-320h] BYREF
  float v111; // [esp+7Ch] [ebp-308h]
  _BYTE v112[17]; // [esp+83h] [ebp-301h] BYREF
  __m128 v113; // [esp+94h] [ebp-2F0h] BYREF
  __m128 v114; // [esp+A4h] [ebp-2E0h]
  __m128 v115; // [esp+B4h] [ebp-2D0h] BYREF
  __m128 v116; // [esp+C4h] [ebp-2C0h] BYREF
  __m128 v117; // [esp+D4h] [ebp-2B0h]
  __m128 v118; // [esp+E4h] [ebp-2A0h] BYREF
  __int128 v119; // [esp+F4h] [ebp-290h]
  __int128 v120; // [esp+104h] [ebp-280h]
  __m128 v121; // [esp+114h] [ebp-270h]
  __m128 v122; // [esp+124h] [ebp-260h]
  __m128 v123[4]; // [esp+134h] [ebp-250h] BYREF
  _BYTE v124[524]; // [esp+174h] [ebp-210h] BYREF

  switch ( (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) ) /*0x94be3a*/
  {
    case 2: /*0x94be3a*/
    case 0xC: /*0x94be3a*/
    case 0xD: /*0x94be3a*/
    case 0x10: /*0x94be3a*/
    case 0x14: /*0x94be3a*/
      for ( i = (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 0x20))(a2); /*0x94bf81*/
            i != 0xFFFFFFFF;
            i = (*(int (__thiscall **)(__m128 *, int))(a2->m128_i32[0] + 0x24))(a2, i) )
      {
        v7 = (__m128 *)(*(int (__thiscall **)(__m128 *, int, _BYTE *))(a2->m128_i32[0] + 0x28))(a2, i, v124); /*0x94bf9d*/
        sub_94BE00(this, v7, a3, a4); /*0x94bfab*/
      }
      break; /*0x94bfbd*/
    case 3: /*0x94be3a*/
    case 0x16: /*0x94be3a*/
    case 0x18: /*0x94be3a*/
      sub_94BE00(this, (__m128 *)a2->m128_i32[3], a3, a4); /*0x94bf5b*/
      break; /*0x94bf72*/
    case 4: /*0x94be3a*/
    case 8: /*0x94be3a*/
    case 0xB: /*0x94be3a*/
    case 0x11: /*0x94be3a*/
    case 0x13: /*0x94be3a*/
    case 0x17: /*0x94be3a*/
      return;
    case 5: /*0x94be3a*/
      v101 = sub_8F2260(a2->m128_f32); /*0x94c03d*/
      v103 = a2->m128_f32[3]; /*0x94c044*/
      if ( v103 > (double)*(this + 2) ) /*0x94c050*/
      {
        hkTransform_TransformPosition(&v110, a3, a2 + 3); /*0x94c062*/
        hkTransform_TransformPosition((__m128 *)v107, a3, a2 + 2); /*0x94c070*/
        v114 = _mm_sub_ps(v110, *(__m128 *)v107); /*0x94c083*/
        v10 = _mm_mul_ps(v114, v114); /*0x94c08b*/
        v11 = _mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]; /*0x94c095*/
        v12 = _mm_shuffle_ps(v10, v10, 0xAA); /*0x94c09c*/
        v13 = v12; /*0x94c0a0*/
        v13.m128_f32[0] = v12.m128_f32[0] + v11; /*0x94c0a3*/
        *(__m128 *)&v112[1] = v13; /*0x94c0a7*/
        *(float *)&v112[1] = 1.0 / fsqrt(v12.m128_f32[0] + v11); /*0x94c0b0*/
        v108 = 0.5; /*0x94c0d5*/
        v14 = (__m128)0x3F000000u; /*0x94c0dd*/
        v14.m128_f32[0] = (float)(0.5 * *(float *)&v112[1]) /*0x94c0e8*/
                        * (float)(3.0
                                - (float)((float)((float)(v12.m128_f32[0] + v11) * *(float *)&v112[1])
                                        * *(float *)&v112[1]));
        v109 = v14; /*0x94c0f0*/
        sub_535AA0(&v112[1], v103); /*0x94c0f5*/
        v15 = unk_BA7D98; /*0x94c0ff*/
        v16 = _mm_mul_ps( /*0x94c123*/
                _mm_shuffle_ps(*(__m128 *)&v112[1], *(__m128 *)&v112[1], 0),
                _mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v114));
        v110 = _mm_add_ps(v110, v16); /*0x94c12e*/
        *(__m128 *)v107 = _mm_sub_ps(*(__m128 *)v107, v16); /*0x94c13d*/
        v17 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v15 + 0x10))(v15, 0x90, 8); /*0x94c149*/
        *(float *)&v98 = v103 + v101; /*0x94c159*/
        v17[2] = 0x90; /*0x94c168*/
        v18 = sub_916380(v17, &v110, v107, v98, 9, 1); /*0x94c16e*/
        v99 = a3; /*0x94c173*/
        goto LABEL_17; /*0x94c174*/
      }
      break; /*0x94c174*/
    case 6: /*0x94be3a*/
      v22 = a2->m128_f32[3]; /*0x94c20d*/
      v108 = a2->m128_f32[3]; /*0x94c210*/
      if ( v22 > *(this + 2) ) /*0x94c21c*/
      {
        v23 = a2 + 2; /*0x94c222*/
        v24 = a2 + 1; /*0x94c22a*/
        v25 = a2 + 3; /*0x94c22d*/
        v104 = a2 + 2; /*0x94c238*/
        if ( *sub_950B10(v112, a2 + 1, a2 + 2, a2 + 3, 0.001) ) /*0x94c241*/
        {
          v26 = *v23; /*0x94c24e*/
          v27 = _mm_sub_ps(*v23, *v24); /*0x94c257*/
          v28 = _mm_mul_ps(v27, v27); /*0x94c25d*/
          v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]; /*0x94c267*/
          v30 = _mm_shuffle_ps(v28, v28, 0xAA); /*0x94c26e*/
          v31 = v30; /*0x94c272*/
          v31.m128_f32[0] = v30.m128_f32[0] + v29; /*0x94c275*/
          *(__m128 *)&v112[1] = v31; /*0x94c279*/
          *(float *)&v112[1] = 1.0 / fsqrt(v30.m128_f32[0] + v29); /*0x94c282*/
          v32 = (__m128)0x3F000000u; /*0x94c2b2*/
          v33 = (__m128)0x3F000000u; /*0x94c2b8*/
          v33.m128_f32[0] = (float)(0.5 * *(float *)&v112[1]) /*0x94c2bf*/
                          * (float)(3.0
                                  - (float)((float)((float)(v30.m128_f32[0] + v29) * *(float *)&v112[1])
                                          * *(float *)&v112[1]));
          v34 = *v25; /*0x94c2c3*/
          v35 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v27); /*0x94c2cd*/
          v36 = _mm_sub_ps(*v25, v26); /*0x94c2d3*/
          v37 = _mm_mul_ps(v36, v36); /*0x94c2d9*/
          v26.m128_f32[0] = _mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]; /*0x94c2e3*/
          v38 = _mm_shuffle_ps(v37, v37, 0xAA); /*0x94c2ea*/
          v39 = v38; /*0x94c2ee*/
          v39.m128_f32[0] = v38.m128_f32[0] + v26.m128_f32[0]; /*0x94c2f1*/
          v110 = v39; /*0x94c2f5*/
          v110.m128_f32[0] = 1.0 / fsqrt(v38.m128_f32[0] + v26.m128_f32[0]); /*0x94c2fe*/
          v40 = (__m128)0x3F000000u; /*0x94c318*/
          v40.m128_f32[0] = (float)(0.5 * v110.m128_f32[0]) /*0x94c31f*/
                          * (float)(3.0
                                  - (float)((float)((float)(v38.m128_f32[0] + v26.m128_f32[0]) * v110.m128_f32[0])
                                          * v110.m128_f32[0]));
          v116 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v36); /*0x94c330*/
          v41 = _mm_sub_ps(v34, *v24); /*0x94c33b*/
          v42 = _mm_mul_ps(v41, v41); /*0x94c341*/
          v36.m128_f32[0] = _mm_shuffle_ps(v42, v42, 0x55).m128_f32[0] + v42.m128_f32[0]; /*0x94c34b*/
          v43 = _mm_shuffle_ps(v42, v42, 0xAA); /*0x94c352*/
          v44 = v43; /*0x94c356*/
          v44.m128_f32[0] = v43.m128_f32[0] + v36.m128_f32[0]; /*0x94c359*/
          v110 = v44; /*0x94c35d*/
          v110.m128_f32[0] = 1.0 / fsqrt(v43.m128_f32[0] + v36.m128_f32[0]); /*0x94c366*/
          v114 = (__m128)0x40400000u; /*0x94c379*/
          *(_OWORD *)&v112[1] = 0x3F000000u; /*0x94c381*/
          v32.m128_f32[0] = 0.5 * v110.m128_f32[0]; /*0x94c38a*/
          v45 = v32; /*0x94c38e*/
          v46 = *((float *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x94c39e*/
          v47 = *(_DWORD *)(LODWORD(v46) + 0x19C); /*0x94c3a1*/
          v45.m128_f32[0] = (float)(0.5 * v110.m128_f32[0]) /*0x94c3a9*/
                          * (float)(3.0
                                  - (float)((float)((float)(v43.m128_f32[0] + v36.m128_f32[0]) * v110.m128_f32[0])
                                          * v110.m128_f32[0]));
          v48 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v41); /*0x94c3b7*/
          v113 = _mm_shuffle_ps(v48, v48, 0xD2); /*0x94c3d0*/
          v115 = _mm_shuffle_ps(v35, v35, 0xC9); /*0x94c3d8*/
          v122 = _mm_shuffle_ps(v35, v35, 0xD2); /*0x94c3e3*/
          v117 = _mm_shuffle_ps(v48, v48, 0xC9); /*0x94c3f4*/
          v110 = _mm_sub_ps(_mm_mul_ps(v115, v113), _mm_mul_ps(v122, v117)); /*0x94c3fc*/
          v111 = v46; /*0x94c401*/
          if ( !v47 ) /*0x94c405*/
            v47 = unk_BA7D9C; /*0x94c407*/
          v49 = v108; /*0x94c419*/
          v107[2] = (__m128 *)8; /*0x94c427*/
          v107[1] = (__m128 *)8; /*0x94c42b*/
          v107[0] = (__m128 *)sub_8A7560(v47, 0x80, 0x14); /*0x94c42f*/
          v100 = v108; /*0x94c433*/
          *v107[0] = v110; /*0x94c438*/
          sub_535AA0(&v109, v100); /*0x94c43b*/
          v50 = _mm_mul_ps(*v107[0], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), *v107[0]), *v24)); /*0x94c45c*/
          v51 = v110; /*0x94c475*/
          v107[0]->m128_f32[3] = -(float)(_mm_shuffle_ps(v50, v50, 0xAA).m128_f32[0] /*0x94c489*/
                                        + (float)(_mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0]));
          v107[0][1] = _mm_xor_ps(v51, (__m128)xmmword_A965C0); /*0x94c49e*/
          sub_535AA0(&v109, v49); /*0x94c4a2*/
          v52 = _mm_mul_ps(v107[0][1], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v107[0][1]), *v24)); /*0x94c4c4*/
          v53 = v110; /*0x94c4dd*/
          v54 = v122; /*0x94c4ee*/
          v107[0][1].m128_f32[3] = -(float)(_mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0] /*0x94c4fb*/
                                          + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]));
          v109 = _mm_shuffle_ps(v53, v53, 0xC9); /*0x94c506*/
          v110 = _mm_shuffle_ps(v53, v53, 0xD2); /*0x94c528*/
          v107[0][2] = _mm_sub_ps(_mm_mul_ps(v115, v110), _mm_mul_ps(v54, v109)); /*0x94c52d*/
          sub_535AA0(&v115, v49); /*0x94c531*/
          v55 = _mm_mul_ps(v107[0][2], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v115, v115, 0), v107[0][2]), *v24)); /*0x94c556*/
          v53.m128_f32[0] = _mm_shuffle_ps(v55, v55, 0x55).m128_f32[0] + v55.m128_f32[0]; /*0x94c560*/
          v54.m128_f32[0] = _mm_shuffle_ps(v55, v55, 0xAA).m128_f32[0]; /*0x94c567*/
          v56 = v116; /*0x94c56b*/
          v107[0][2].m128_f32[3] = -(float)(v54.m128_f32[0] + v53.m128_f32[0]); /*0x94c588*/
          v107[0][3] = _mm_sub_ps( /*0x94c5af*/
                         _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0xC9), v110),
                         _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0xD2), v109));
          sub_535AA0(&v116, v49); /*0x94c5b3*/
          v57 = _mm_mul_ps(v107[0][3], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v116, v116, 0), v107[0][3]), *v104)); /*0x94c5dc*/
          v102 = _mm_shuffle_ps(v57, v57, 0xAA).m128_f32[0] /*0x94c606*/
               + (float)(_mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]);
          v58 = _mm_mul_ps(v110, v117); /*0x94c60e*/
          v59 = v109; /*0x94c613*/
          v107[0][3].m128_f32[3] = -v102; /*0x94c618*/
          v107[0][4] = _mm_sub_ps(_mm_mul_ps(v59, v113), v58); /*0x94c632*/
          sub_535AA0(&v113, v49); /*0x94c636*/
          v60 = _mm_mul_ps(v107[0][4], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][4]), *v25)); /*0x94c65b*/
          v107[0][4].m128_f32[3] = -(float)(_mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0] /*0x94c682*/
                                          + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]));
          v107[0][5] = _mm_add_ps(v107[0][2], v107[0][3]); /*0x94c694*/
          v61 = v107[0][5]; /*0x94c69c*/
          v62 = _mm_mul_ps(v61, v61); /*0x94c6a3*/
          v54.m128_f32[0] = _mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0]; /*0x94c6ad*/
          v63 = _mm_shuffle_ps(v62, v62, 0xAA); /*0x94c6b8*/
          v63.m128_f32[0] = v63.m128_f32[0] + v54.m128_f32[0]; /*0x94c6c3*/
          v109 = v63; /*0x94c6c7*/
          v109.m128_f32[0] = 1.0 / fsqrt(v63.m128_f32[0]); /*0x94c6d0*/
          v64 = v114.m128_f32[0] - (float)((float)(v63.m128_f32[0] * v109.m128_f32[0]) * v109.m128_f32[0]); /*0x94c6e3*/
          v65 = *(__m128 *)&v112[1]; /*0x94c6e7*/
          v65.m128_f32[0] = (float)(*(float *)&v112[1] * v109.m128_f32[0]) * v64; /*0x94c6f0*/
          v107[0][5] = _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v61); /*0x94c706*/
          sub_535AA0(&v113, v49); /*0x94c70a*/
          v66 = _mm_mul_ps(v107[0][5], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][5]), *v104)); /*0x94c733*/
          v107[0][5].m128_f32[3] = -(float)(_mm_shuffle_ps(v66, v66, 0xAA).m128_f32[0] /*0x94c75a*/
                                          + (float)(_mm_shuffle_ps(v66, v66, 0x55).m128_f32[0] + v66.m128_f32[0]));
          v107[0][6] = _mm_add_ps(v107[0][3], v107[0][4]); /*0x94c76c*/
          v67 = v107[0][6]; /*0x94c774*/
          v68 = _mm_mul_ps(v67, v67); /*0x94c77b*/
          v54.m128_f32[0] = _mm_shuffle_ps(v68, v68, 0x55).m128_f32[0] + v68.m128_f32[0]; /*0x94c785*/
          v69 = _mm_shuffle_ps(v68, v68, 0xAA); /*0x94c790*/
          v69.m128_f32[0] = v69.m128_f32[0] + v54.m128_f32[0]; /*0x94c79b*/
          v109 = v69; /*0x94c79f*/
          v109.m128_f32[0] = 1.0 / fsqrt(v69.m128_f32[0]); /*0x94c7a8*/
          v70 = v114.m128_f32[0] - (float)((float)(v69.m128_f32[0] * v109.m128_f32[0]) * v109.m128_f32[0]); /*0x94c7bb*/
          v71 = *(__m128 *)&v112[1]; /*0x94c7bf*/
          v71.m128_f32[0] = (float)(*(float *)&v112[1] * v109.m128_f32[0]) * v70; /*0x94c7c8*/
          v107[0][6] = _mm_mul_ps(_mm_shuffle_ps(v71, v71, 0), v67); /*0x94c7de*/
          sub_535AA0(&v113, v49); /*0x94c7e2*/
          v72 = _mm_mul_ps(v107[0][6], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][6]), *v25)); /*0x94c807*/
          v107[0][6].m128_f32[3] = -(float)(_mm_shuffle_ps(v72, v72, 0xAA).m128_f32[0] /*0x94c82f*/
                                          + (float)(_mm_shuffle_ps(v72, v72, 0x55).m128_f32[0] + v72.m128_f32[0]));
          v107[0][7] = _mm_add_ps(v107[0][4], v107[0][2]); /*0x94c841*/
          v73 = v107[0][7]; /*0x94c849*/
          v74 = _mm_mul_ps(v73, v73); /*0x94c850*/
          v54.m128_f32[0] = _mm_shuffle_ps(v74, v74, 0x55).m128_f32[0] + v74.m128_f32[0]; /*0x94c85a*/
          v75 = _mm_shuffle_ps(v74, v74, 0xAA); /*0x94c861*/
          v76 = v75; /*0x94c865*/
          v76.m128_f32[0] = v75.m128_f32[0] + v54.m128_f32[0]; /*0x94c868*/
          v109 = v76; /*0x94c86c*/
          v109.m128_f32[0] = 1.0 / fsqrt(v75.m128_f32[0] + v54.m128_f32[0]); /*0x94c875*/
          v77 = *(__m128 *)&v112[1]; /*0x94c89a*/
          v77.m128_f32[0] = (float)(*(float *)&v112[1] * v109.m128_f32[0]) /*0x94c8a3*/
                          * (float)(v114.m128_f32[0]
                                  - (float)((float)((float)(v75.m128_f32[0] + v54.m128_f32[0]) * v109.m128_f32[0])
                                          * v109.m128_f32[0]));
          v107[0][7] = _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v73); /*0x94c8b8*/
          sub_535AA0(&v113, v49); /*0x94c8bc*/
          v78 = _mm_mul_ps(v107[0][7], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][7]), *v24)); /*0x94c8e1*/
          v107[0][7].m128_f32[3] = -(float)(_mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0] /*0x94c910*/
                                          + (float)(_mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0]));
          v79 = sub_94BC40(v107, (int)v25, a3); /*0x94c918*/
          if ( v79 ) /*0x94c91f*/
          {
            if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94c931*/
              sub_8A6EE0(a4, 4); /*0x94c936*/
            *((_DWORD *)*a4 + (_DWORD)a4[1]) = v79; /*0x94c943*/
            a4[1] = (char *)a4[1] + 1; /*0x94c946*/
          }
          if ( (int)v107[2] >= 0 ) /*0x94c94f*/
          {
            v80 = *(_DWORD *)(LODWORD(v111) + 0x19C); /*0x94c959*/
            if ( !v80 ) /*0x94c961*/
              v80 = unk_BA7D9C; /*0x94c963*/
            goto LABEL_31; /*0x94c963*/
          }
        }
      }
      break; /*0x94c963*/
    case 7: /*0x94be3a*/
      if ( a2->m128_f32[3] > (double)*(this + 2) ) /*0x94c181*/
      {
        v19 = unk_BA7D98; /*0x94c195*/
        v109 = _mm_add_ps( /*0x94c1a4*/
                 _mm_shuffle_ps(
                   (__m128)COERCE_UNSIGNED_INT(a2->m128_f32[3]),
                   (__m128)COERCE_UNSIGNED_INT(a2->m128_f32[3]),
                   0),
                 a2[1]);
        v20 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v19 + 0x10))(v19, 0x70, 8); /*0x94c1ad*/
        v20[2] = 0x70; /*0x94c1b7*/
        v18 = sub_949CA0(v20, &v109); /*0x94c1bd*/
        v99 = a3; /*0x94c1c5*/
LABEL_17:
        v21 = v18; /*0x94c1c6*/
        sub_539980((_OWORD *)v18 + 1, v99); /*0x94c1cb*/
        if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94c1e0*/
          sub_8A6EE0(a4, 4); /*0x94c1e5*/
        *((_DWORD *)*a4 + (_DWORD)a4[1]) = v21; /*0x94c1f2*/
        a4[1] = (char *)a4[1] + 1; /*0x94c1f5*/
      }
      break; /*0x94c20a*/
    case 9: /*0x94be3a*/
      v105 = a2->m128_f32[3]; /*0x94c996*/
      if ( v105 > (double)*(this + 2) ) /*0x94c9a2*/
      {
        v81 = sub_916BC0((char *)a2); /*0x94c9af*/
        v111 = sub_94B8B0((char *)a2); /*0x94c9b8*/
        v82 = 0; /*0x94c9bc*/
        v83 = 0; /*0x94c9be*/
        v107[0] = 0; /*0x94c9c0*/
        v107[1] = 0; /*0x94c9c4*/
        v107[2] = (__m128 *)0x80000000; /*0x94c9c8*/
        v84 = *((_DWORD *)v81 + 1); /*0x94c9d0*/
        if ( v84 > 0 ) /*0x94c9d5*/
        {
          v85 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94c9e7*/
          if ( !v85 ) /*0x94c9ef*/
            v85 = unk_BA7D9C; /*0x94c9f1*/
          v83 = (__m128 *)sub_8A7560(v85, 0x10 * v84, 0x14); /*0x94ca06*/
          v107[0] = v83; /*0x94ca08*/
          v107[2] = (__m128 *)(*((_DWORD *)v81 + 1) | (int)v107[2] & 0x40000000); /*0x94ca17*/
        }
        v107[1] = *((__m128 **)v81 + 1); /*0x94ca20*/
        v86 = v107[1]; /*0x94ca1b*/
        v87 = *(__m128 **)v81; /*0x94ca24*/
        if ( (int)v107[1] > 0 ) /*0x94ca26*/
        {
          do /*0x94ca3d*/
          {
            *v83++ = *v87++; /*0x94ca33*/
            v86 = (__m128 *)((char *)v86 + 0xFFFFFFFF); /*0x94ca3c*/
          }
          while ( v86 ); /*0x94ca3d*/
          v83 = v107[0]; /*0x94ca3f*/
        }
        if ( flt_A5ACC4 - v105 < v111 ) /*0x94ca56*/
        {
          v88 = *((_DWORD *)v81 + 1); /*0x94ca5c*/
          if ( v88 >= 4 ) /*0x94ca62*/
          {
            v89 = 0; /*0x94ca6a*/
            v90 = ((unsigned int)(v88 - 4) >> 2) + 1; /*0x94ca6c*/
            v82 = 4 * v90; /*0x94ca6d*/
            do /*0x94cab8*/
            {
              v91 = v83[v89].m128_f32[3]; /*0x94ca74*/
              v89 += 4; /*0x94ca78*/
              --v90; /*0x94ca7b*/
              *((float *)&v83[v89 - 3] + 0xFFFFFFFF) = v91 - v105; /*0x94ca80*/
              *((float *)&v107[0][v89 - 2] + 0xFFFFFFFF) = *((float *)&v107[0][v89 - 2] + 0xFFFFFFFF) - v105; /*0x94ca90*/
              *((float *)&v107[0][v89 - 1] + 0xFFFFFFFF) = *((float *)&v107[0][v89 - 1] + 0xFFFFFFFF) - v105; /*0x94caa0*/
              v107[0][v89 - 1].m128_f32[3] = v107[0][v89 - 1].m128_f32[3] - v105; /*0x94cab0*/
              v83 = v107[0]; /*0x94cab4*/
            }
            while ( v90 ); /*0x94cab8*/
          }
          if ( v82 < v88 ) /*0x94cabc*/
          {
            v92 = v82; /*0x94cac0*/
            v93 = v88 - v82; /*0x94cac3*/
            while ( 1 ) /*0x94cad0*/
            {
              v94 = v83[v92++].m128_f32[3]; /*0x94cad0*/
              --v93; /*0x94cad7*/
              v83[v92 - 1].m128_f32[3] = v94 - v105; /*0x94cadc*/
              if ( !v93 ) /*0x94cae0*/
                break; /*0x94cae0*/
              v83 = v107[0]; /*0x94cac7*/
            }
          }
        }
        sub_94B9B0((int)a2, (const void **)v107, SLODWORD(v105)); /*0x94caed*/
        v95 = sub_94BC40(v107, (int)a2, a3); /*0x94cafd*/
        if ( v95 ) /*0x94cb04*/
        {
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x94cb17*/
            sub_8A6EE0(a4, 4); /*0x94cb1c*/
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = v95; /*0x94cb29*/
          a4[1] = (char *)a4[1] + 1; /*0x94cb2c*/
        }
        if ( (int)v107[2] >= 0 ) /*0x94cb35*/
        {
          v80 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x94cb4b*/
          if ( !v80 ) /*0x94cb53*/
            v80 = unk_BA7D9C; /*0x94cb55*/
LABEL_31:
          sub_8A75D0(v80, v107[0]->m128_i32, 0x10 * (int)v107[2], 0x14); /*0x94c969*/
        }
      }
      break; /*0x94c990*/
    case 0xA: /*0x94be3a*/
      if ( a2->m128_f32[3] > (double)*(this + 2) ) /*0x94bfdf*/
      {
        for ( j = 0; j < a2[2].m128_i32[0]; ++j ) /*0x94bfec*/
        {
          v9 = (__m128 *)(*(int (__thiscall **)(__int32, _DWORD, _BYTE *))(*(_DWORD *)a2[1].m128_i32[2] + 0x28))( /*0x94c006*/
                           a2[1].m128_i32[2],
                           *(_DWORD *)(a2[1].m128_i32[3] + 4 * j),
                           v124);
          sub_94BE00(this, v9, a3, a4); /*0x94c014*/
        }
      }
      break; /*0x94c01f*/
    case 0xE: /*0x94be3a*/
      v118 = 0; /*0x94be4e*/
      v119 = 0; /*0x94be56*/
      v120 = 0; /*0x94be5e*/
      v5 = a2[2]; /*0x94be66*/
      v118.m128_i32[0] = 0x3F800000; /*0x94be73*/
      DWORD1(v119) = 0x3F800000; /*0x94be7e*/
      DWORD2(v120) = 0x3F800000; /*0x94be89*/
      v121 = v5; /*0x94be94*/
      sub_8B1F70(v123, a3, &v118); /*0x94be9c*/
      sub_94BE00(this, (__m128 *)a2[1].m128_i32[0], v123, a4); /*0x94beb3*/
      break; /*0x94beca*/
    case 0xF: /*0x94be3a*/
      sub_8B1F70(v123, a3, a2 + 2); /*0x94bedc*/
      sub_94BE00(this, (__m128 *)a2[1].m128_i32[0], v123, a4); /*0x94bef3*/
      break; /*0x94bf0a*/
    case 0x19: /*0x94be3a*/
      sub_8B1F70(v123, a3, a2 + 2); /*0x94bf1c*/
      sub_94BE00(this, (__m128 *)a2->m128_i32[3], v123, a4); /*0x94bf33*/
      break; /*0x94bf4a*/
    default:
      v96 = unk_BA9514; /*0x94cb85*/
      for ( k = 0; k < *(_DWORD *)(unk_BA9514 + 0xC); ++k ) /*0x94cb97*/
      {
        v97 = *(_DWORD *)(v96 + 8) + 8 * k; /*0x94cba9*/
        if ( *(_DWORD *)(v97 + 4) == (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) ) /*0x94cbb4*/
          (*(void (__cdecl **)(__m128 *, __m128 *, const void **, float *))v97)(a2, a3, a4, this); /*0x94cbc0*/
        v96 = unk_BA9514; /*0x94cbc9*/
      }
      break; /*0x94cbd8*/
  }
}
