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

  switch ( (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) )
  {
    case 2:
    case 0xC:
    case 0xD:
    case 0x10:
    case 0x14:
      for ( i = (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 0x20))(a2);
            i != 0xFFFFFFFF;
            i = (*(int (__thiscall **)(__m128 *, int))(a2->m128_i32[0] + 0x24))(a2, i) )
      {
        v7 = (__m128 *)(*(int (__thiscall **)(__m128 *, int, _BYTE *))(a2->m128_i32[0] + 0x28))(a2, i, v124);
        sub_94BE00(this, v7, a3, a4);
      }
      break;
    case 3:
    case 0x16:
    case 0x18:
      sub_94BE00(this, (__m128 *)a2->m128_i32[3], a3, a4);
      break;
    case 4:
    case 8:
    case 0xB:
    case 0x11:
    case 0x13:
    case 0x17:
      return;
    case 5:
      v101 = sub_8F2260(a2->m128_f32);
      v103 = a2->m128_f32[3];
      if ( v103 > (double)*(this + 2) )
      {
        sub_88FCC0(&v110, a3, a2 + 3);
        sub_88FCC0((__m128 *)v107, a3, a2 + 2);
        v114 = _mm_sub_ps(v110, *(__m128 *)v107);
        v10 = _mm_mul_ps(v114, v114);
        v11 = _mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0];
        v12 = _mm_shuffle_ps(v10, v10, 0xAA);
        v13 = v12;
        v13.m128_f32[0] = v12.m128_f32[0] + v11;
        *(__m128 *)&v112[1] = v13;
        *(float *)&v112[1] = 1.0 / fsqrt(v12.m128_f32[0] + v11);
        v108 = 0.5;
        v14 = (__m128)0x3F000000u;
        v14.m128_f32[0] = (float)(0.5 * *(float *)&v112[1])
                        * (float)(3.0
                                - (float)((float)((float)(v12.m128_f32[0] + v11) * *(float *)&v112[1])
                                        * *(float *)&v112[1]));
        v109 = v14;
        sub_535AA0(&v112[1], v103);
        v15 = dword_BA7D98;
        v16 = _mm_mul_ps(
                _mm_shuffle_ps(*(__m128 *)&v112[1], *(__m128 *)&v112[1], 0),
                _mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v114));
        v110 = _mm_add_ps(v110, v16);
        *(__m128 *)v107 = _mm_sub_ps(*(__m128 *)v107, v16);
        v17 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v15 + 0x10))(v15, 0x90, 8);
        *(float *)&v98 = v103 + v101;
        v17[2] = 0x90;
        v18 = sub_916380(v17, &v110, v107, v98, 9, 1);
        v99 = a3;
        goto LABEL_17;
      }
      break;
    case 6:
      v22 = a2->m128_f32[3];
      v108 = a2->m128_f32[3];
      if ( v22 > *(this + 2) )
      {
        v23 = a2 + 2;
        v24 = a2 + 1;
        v25 = a2 + 3;
        v104 = a2 + 2;
        if ( *(_BYTE *)sub_950B10((int)v112, (int)&a2[1], (int)&a2[2], (int)&a2[3], 0.001) )
        {
          v26 = *v23;
          v27 = _mm_sub_ps(*v23, *v24);
          v28 = _mm_mul_ps(v27, v27);
          v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0];
          v30 = _mm_shuffle_ps(v28, v28, 0xAA);
          v31 = v30;
          v31.m128_f32[0] = v30.m128_f32[0] + v29;
          *(__m128 *)&v112[1] = v31;
          *(float *)&v112[1] = 1.0 / fsqrt(v30.m128_f32[0] + v29);
          v32 = (__m128)0x3F000000u;
          v33 = (__m128)0x3F000000u;
          v33.m128_f32[0] = (float)(0.5 * *(float *)&v112[1])
                          * (float)(3.0
                                  - (float)((float)((float)(v30.m128_f32[0] + v29) * *(float *)&v112[1])
                                          * *(float *)&v112[1]));
          v34 = *v25;
          v35 = _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v27);
          v36 = _mm_sub_ps(*v25, v26);
          v37 = _mm_mul_ps(v36, v36);
          v26.m128_f32[0] = _mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0];
          v38 = _mm_shuffle_ps(v37, v37, 0xAA);
          v39 = v38;
          v39.m128_f32[0] = v38.m128_f32[0] + v26.m128_f32[0];
          v110 = v39;
          v110.m128_f32[0] = 1.0 / fsqrt(v38.m128_f32[0] + v26.m128_f32[0]);
          v40 = (__m128)0x3F000000u;
          v40.m128_f32[0] = (float)(0.5 * v110.m128_f32[0])
                          * (float)(3.0
                                  - (float)((float)((float)(v38.m128_f32[0] + v26.m128_f32[0]) * v110.m128_f32[0])
                                          * v110.m128_f32[0]));
          v116 = _mm_mul_ps(_mm_shuffle_ps(v40, v40, 0), v36);
          v41 = _mm_sub_ps(v34, *v24);
          v42 = _mm_mul_ps(v41, v41);
          v36.m128_f32[0] = _mm_shuffle_ps(v42, v42, 0x55).m128_f32[0] + v42.m128_f32[0];
          v43 = _mm_shuffle_ps(v42, v42, 0xAA);
          v44 = v43;
          v44.m128_f32[0] = v43.m128_f32[0] + v36.m128_f32[0];
          v110 = v44;
          v110.m128_f32[0] = 1.0 / fsqrt(v43.m128_f32[0] + v36.m128_f32[0]);
          v114 = (__m128)0x40400000u;
          *(_OWORD *)&v112[1] = 0x3F000000u;
          v32.m128_f32[0] = 0.5 * v110.m128_f32[0];
          v45 = v32;
          v46 = *((float *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
          v47 = *(_DWORD *)(LODWORD(v46) + 0x19C);
          v45.m128_f32[0] = (float)(0.5 * v110.m128_f32[0])
                          * (float)(3.0
                                  - (float)((float)((float)(v43.m128_f32[0] + v36.m128_f32[0]) * v110.m128_f32[0])
                                          * v110.m128_f32[0]));
          v48 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v41);
          v113 = _mm_shuffle_ps(v48, v48, 0xD2);
          v115 = _mm_shuffle_ps(v35, v35, 0xC9);
          v122 = _mm_shuffle_ps(v35, v35, 0xD2);
          v117 = _mm_shuffle_ps(v48, v48, 0xC9);
          v110 = _mm_sub_ps(_mm_mul_ps(v115, v113), _mm_mul_ps(v122, v117));
          v111 = v46;
          if ( !v47 )
            v47 = dword_BA7D9C;
          v49 = v108;
          v107[2] = (__m128 *)8;
          v107[1] = (__m128 *)8;
          v107[0] = (__m128 *)sub_8A7560(v47, 0x80, 0x14);
          v100 = v108;
          *v107[0] = v110;
          sub_535AA0(&v109, v100);
          v50 = _mm_mul_ps(*v107[0], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), *v107[0]), *v24));
          v51 = v110;
          v107[0]->m128_f32[3] = -(float)(_mm_shuffle_ps(v50, v50, 0xAA).m128_f32[0]
                                        + (float)(_mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0]));
          v107[0][1] = _mm_xor_ps(v51, (__m128)xmmword_A965C0);
          sub_535AA0(&v109, v49);
          v52 = _mm_mul_ps(v107[0][1], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v109, v109, 0), v107[0][1]), *v24));
          v53 = v110;
          v54 = v122;
          v107[0][1].m128_f32[3] = -(float)(_mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]
                                          + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]));
          v109 = _mm_shuffle_ps(v53, v53, 0xC9);
          v110 = _mm_shuffle_ps(v53, v53, 0xD2);
          v107[0][2] = _mm_sub_ps(_mm_mul_ps(v115, v110), _mm_mul_ps(v54, v109));
          sub_535AA0(&v115, v49);
          v55 = _mm_mul_ps(v107[0][2], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v115, v115, 0), v107[0][2]), *v24));
          v53.m128_f32[0] = _mm_shuffle_ps(v55, v55, 0x55).m128_f32[0] + v55.m128_f32[0];
          v54.m128_f32[0] = _mm_shuffle_ps(v55, v55, 0xAA).m128_f32[0];
          v56 = v116;
          v107[0][2].m128_f32[3] = -(float)(v54.m128_f32[0] + v53.m128_f32[0]);
          v107[0][3] = _mm_sub_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0xC9), v110),
                         _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0xD2), v109));
          sub_535AA0(&v116, v49);
          v57 = _mm_mul_ps(v107[0][3], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v116, v116, 0), v107[0][3]), *v104));
          v102 = _mm_shuffle_ps(v57, v57, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]);
          v58 = _mm_mul_ps(v110, v117);
          v59 = v109;
          v107[0][3].m128_f32[3] = -v102;
          v107[0][4] = _mm_sub_ps(_mm_mul_ps(v59, v113), v58);
          sub_535AA0(&v113, v49);
          v60 = _mm_mul_ps(v107[0][4], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][4]), *v25));
          v107[0][4].m128_f32[3] = -(float)(_mm_shuffle_ps(v60, v60, 0xAA).m128_f32[0]
                                          + (float)(_mm_shuffle_ps(v60, v60, 0x55).m128_f32[0] + v60.m128_f32[0]));
          v107[0][5] = _mm_add_ps(v107[0][2], v107[0][3]);
          v61 = v107[0][5];
          v62 = _mm_mul_ps(v61, v61);
          v54.m128_f32[0] = _mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0];
          v63 = _mm_shuffle_ps(v62, v62, 0xAA);
          v63.m128_f32[0] = v63.m128_f32[0] + v54.m128_f32[0];
          v109 = v63;
          v109.m128_f32[0] = 1.0 / fsqrt(v63.m128_f32[0]);
          v64 = v114.m128_f32[0] - (float)((float)(v63.m128_f32[0] * v109.m128_f32[0]) * v109.m128_f32[0]);
          v65 = *(__m128 *)&v112[1];
          v65.m128_f32[0] = (float)(*(float *)&v112[1] * v109.m128_f32[0]) * v64;
          v107[0][5] = _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v61);
          sub_535AA0(&v113, v49);
          v66 = _mm_mul_ps(v107[0][5], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][5]), *v104));
          v107[0][5].m128_f32[3] = -(float)(_mm_shuffle_ps(v66, v66, 0xAA).m128_f32[0]
                                          + (float)(_mm_shuffle_ps(v66, v66, 0x55).m128_f32[0] + v66.m128_f32[0]));
          v107[0][6] = _mm_add_ps(v107[0][3], v107[0][4]);
          v67 = v107[0][6];
          v68 = _mm_mul_ps(v67, v67);
          v54.m128_f32[0] = _mm_shuffle_ps(v68, v68, 0x55).m128_f32[0] + v68.m128_f32[0];
          v69 = _mm_shuffle_ps(v68, v68, 0xAA);
          v69.m128_f32[0] = v69.m128_f32[0] + v54.m128_f32[0];
          v109 = v69;
          v109.m128_f32[0] = 1.0 / fsqrt(v69.m128_f32[0]);
          v70 = v114.m128_f32[0] - (float)((float)(v69.m128_f32[0] * v109.m128_f32[0]) * v109.m128_f32[0]);
          v71 = *(__m128 *)&v112[1];
          v71.m128_f32[0] = (float)(*(float *)&v112[1] * v109.m128_f32[0]) * v70;
          v107[0][6] = _mm_mul_ps(_mm_shuffle_ps(v71, v71, 0), v67);
          sub_535AA0(&v113, v49);
          v72 = _mm_mul_ps(v107[0][6], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][6]), *v25));
          v107[0][6].m128_f32[3] = -(float)(_mm_shuffle_ps(v72, v72, 0xAA).m128_f32[0]
                                          + (float)(_mm_shuffle_ps(v72, v72, 0x55).m128_f32[0] + v72.m128_f32[0]));
          v107[0][7] = _mm_add_ps(v107[0][4], v107[0][2]);
          v73 = v107[0][7];
          v74 = _mm_mul_ps(v73, v73);
          v54.m128_f32[0] = _mm_shuffle_ps(v74, v74, 0x55).m128_f32[0] + v74.m128_f32[0];
          v75 = _mm_shuffle_ps(v74, v74, 0xAA);
          v76 = v75;
          v76.m128_f32[0] = v75.m128_f32[0] + v54.m128_f32[0];
          v109 = v76;
          v109.m128_f32[0] = 1.0 / fsqrt(v75.m128_f32[0] + v54.m128_f32[0]);
          v77 = *(__m128 *)&v112[1];
          v77.m128_f32[0] = (float)(*(float *)&v112[1] * v109.m128_f32[0])
                          * (float)(v114.m128_f32[0]
                                  - (float)((float)((float)(v75.m128_f32[0] + v54.m128_f32[0]) * v109.m128_f32[0])
                                          * v109.m128_f32[0]));
          v107[0][7] = _mm_mul_ps(_mm_shuffle_ps(v77, v77, 0), v73);
          sub_535AA0(&v113, v49);
          v78 = _mm_mul_ps(v107[0][7], _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v113, v113, 0), v107[0][7]), *v24));
          v107[0][7].m128_f32[3] = -(float)(_mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0]
                                          + (float)(_mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0]));
          v79 = sub_94BC40(v107, (int)v25, a3);
          if ( v79 )
          {
            if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
              sub_8A6EE0(a4, 4);
            *((_DWORD *)*a4 + (_DWORD)a4[1]) = v79;
            a4[1] = (char *)a4[1] + 1;
          }
          if ( (int)v107[2] >= 0 )
          {
            v80 = *(_DWORD *)(LODWORD(v111) + 0x19C);
            if ( !v80 )
              v80 = dword_BA7D9C;
            goto LABEL_31;
          }
        }
      }
      break;
    case 7:
      if ( a2->m128_f32[3] > (double)*(this + 2) )
      {
        v19 = dword_BA7D98;
        v109 = _mm_add_ps(
                 _mm_shuffle_ps(
                   (__m128)COERCE_UNSIGNED_INT(a2->m128_f32[3]),
                   (__m128)COERCE_UNSIGNED_INT(a2->m128_f32[3]),
                   0),
                 a2[1]);
        v20 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v19 + 0x10))(v19, 0x70, 8);
        v20[2] = 0x70;
        v18 = sub_949CA0(v20, &v109);
        v99 = a3;
LABEL_17:
        v21 = v18;
        sub_539980((_OWORD *)v18 + 1, v99);
        if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
          sub_8A6EE0(a4, 4);
        *((_DWORD *)*a4 + (_DWORD)a4[1]) = v21;
        a4[1] = (char *)a4[1] + 1;
      }
      break;
    case 9:
      v105 = a2->m128_f32[3];
      if ( v105 > (double)*(this + 2) )
      {
        v81 = sub_916BC0((char *)a2);
        v111 = sub_94B8B0((char *)a2);
        v82 = 0;
        v83 = 0;
        v107[0] = 0;
        v107[1] = 0;
        v107[2] = (__m128 *)0x80000000;
        v84 = *((_DWORD *)v81 + 1);
        if ( v84 > 0 )
        {
          v85 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v85 )
            v85 = dword_BA7D9C;
          v83 = (__m128 *)sub_8A7560(v85, 0x10 * v84, 0x14);
          v107[0] = v83;
          v107[2] = (__m128 *)(*((_DWORD *)v81 + 1) | (int)v107[2] & 0x40000000);
        }
        v107[1] = *((__m128 **)v81 + 1);
        v86 = v107[1];
        v87 = *(__m128 **)v81;
        if ( (int)v107[1] > 0 )
        {
          do
          {
            *v83++ = *v87++;
            v86 = (__m128 *)((char *)v86 + 0xFFFFFFFF);
          }
          while ( v86 );
          v83 = v107[0];
        }
        if ( flt_A5ACC4 - v105 < v111 )
        {
          v88 = *((_DWORD *)v81 + 1);
          if ( v88 >= 4 )
          {
            v89 = 0;
            v90 = ((unsigned int)(v88 - 4) >> 2) + 1;
            v82 = 4 * v90;
            do
            {
              v91 = v83[v89].m128_f32[3];
              v89 += 4;
              --v90;
              *((float *)&v83[v89 - 3] + 0xFFFFFFFF) = v91 - v105;
              *((float *)&v107[0][v89 - 2] + 0xFFFFFFFF) = *((float *)&v107[0][v89 - 2] + 0xFFFFFFFF) - v105;
              *((float *)&v107[0][v89 - 1] + 0xFFFFFFFF) = *((float *)&v107[0][v89 - 1] + 0xFFFFFFFF) - v105;
              v107[0][v89 - 1].m128_f32[3] = v107[0][v89 - 1].m128_f32[3] - v105;
              v83 = v107[0];
            }
            while ( v90 );
          }
          if ( v82 < v88 )
          {
            v92 = v82;
            v93 = v88 - v82;
            while ( 1 )
            {
              v94 = v83[v92++].m128_f32[3];
              --v93;
              v83[v92 - 1].m128_f32[3] = v94 - v105;
              if ( !v93 )
                break;
              v83 = v107[0];
            }
          }
        }
        sub_94B9B0((int)a2, (const void **)v107, SLODWORD(v105));
        v95 = sub_94BC40(v107, (int)a2, a3);
        if ( v95 )
        {
          if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) )
            sub_8A6EE0(a4, 4);
          *((_DWORD *)*a4 + (_DWORD)a4[1]) = v95;
          a4[1] = (char *)a4[1] + 1;
        }
        if ( (int)v107[2] >= 0 )
        {
          v80 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v80 )
            v80 = dword_BA7D9C;
LABEL_31:
          sub_8A75D0(v80, v107[0]->m128_i32, 0x10 * (int)v107[2], 0x14);
        }
      }
      break;
    case 0xA:
      if ( a2->m128_f32[3] > (double)*(this + 2) )
      {
        for ( j = 0; j < a2[2].m128_i32[0]; ++j )
        {
          v9 = (__m128 *)(*(int (__thiscall **)(__int32, _DWORD, _BYTE *))(*(_DWORD *)a2[1].m128_i32[2] + 0x28))(
                           a2[1].m128_i32[2],
                           *(_DWORD *)(a2[1].m128_i32[3] + 4 * j),
                           v124);
          sub_94BE00(this, v9, a3, a4);
        }
      }
      break;
    case 0xE:
      v118 = 0;
      v119 = 0;
      v120 = 0;
      v5 = a2[2];
      v118.m128_i32[0] = 0x3F800000;
      DWORD1(v119) = 0x3F800000;
      DWORD2(v120) = 0x3F800000;
      v121 = v5;
      sub_8B1F70(v123, a3, &v118);
      sub_94BE00(this, (__m128 *)a2[1].m128_i32[0], v123, a4);
      break;
    case 0xF:
      sub_8B1F70(v123, a3, a2 + 2);
      sub_94BE00(this, (__m128 *)a2[1].m128_i32[0], v123, a4);
      break;
    case 0x19:
      sub_8B1F70(v123, a3, a2 + 2);
      sub_94BE00(this, (__m128 *)a2->m128_i32[3], v123, a4);
      break;
    default:
      v96 = dword_BA9514;
      for ( k = 0; k < *(_DWORD *)(dword_BA9514 + 0xC); ++k )
      {
        v97 = *(_DWORD *)(v96 + 8) + 8 * k;
        if ( *(_DWORD *)(v97 + 4) == (*(int (__thiscall **)(__m128 *))(a2->m128_i32[0] + 8))(a2) )
          (*(void (__cdecl **)(__m128 *, __m128 *, const void **, float *))v97)(a2, a3, a4, this);
        v96 = dword_BA9514;
      }
      break;
  }
}
