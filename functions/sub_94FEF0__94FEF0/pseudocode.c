void __cdecl sub_94FEF0(__m128 *a1, signed int a2, int a3, int a4, int a5, int *a6)
{
  double v6; // st7
  __m128 *v7; // edx
  double v8; // st6
  __m128 *v9; // esi
  int *v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  __m128 *v13; // ecx
  float *v14; // ebx
  __m128 v15; // xmm7
  __m128 v16; // xmm3
  float *v17; // edi
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  __m128 v21; // xmm0
  __m128 v22; // xmm1
  __m128 v23; // xmm0
  double v24; // st6
  float *v25; // edi
  double v26; // st6
  double v27; // st4
  long double v28; // st6
  double v29; // st5
  __m128 v30; // xmm1
  double v31; // st6
  __m128 v32; // xmm0
  double v33; // st5
  __m128 v34; // xmm6
  __m128 *v35; // ecx
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  double v38; // st4
  bool v39; // zf
  double v40; // st7
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  float v43; // xmm1_4
  float v44; // xmm2_4
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  __m128 v47; // xmm3
  __m128 v48; // xmm6
  __m128 v49; // xmm0
  __m128 v50; // xmm2
  __m128 v51; // xmm0
  __int16 v52; // ax
  __m128 v53; // xmm0
  float v54; // xmm1_4
  float v55; // xmm4_4
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm5
  __m128 v59; // xmm0
  __m128 v60; // xmm3
  __m128 v61; // xmm4
  __m128 v62; // xmm0
  __m128 v63; // xmm2
  __m128 v64; // xmm6
  __m128 v65; // xmm7
  __m128 v66; // xmm0
  __m128 v67; // xmm2
  __m128 v68; // xmm0
  __m128 v69; // xmm6
  __m128 v70; // xmm2
  __m128 v71; // xmm0
  double v72; // st6
  __m128 *v73; // ecx
  __m128 v74; // xmm0
  __m128 v75; // xmm1
  __m128 v76; // xmm0
  __m128 v77; // xmm4
  __m128 v78; // xmm1
  __m128 v79; // xmm0
  double v80; // st6
  int v81; // ecx
  double v82; // st6
  double v83; // st5
  __m128 v84; // xmm0
  __m128 v85; // xmm0
  double v86; // st4
  double v87; // st7
  float *v88; // eax
  __m128 v89; // xmm0
  __m128 v90; // xmm0
  double v91; // st7
  __m128 v92; // xmm0
  __m128 v93; // xmm1
  __m128 v94; // xmm0
  int v95; // ebx
  int v96; // ecx
  double v97; // st7
  __m128 *v98; // [esp+8h] [ebp-6Ch]
  float v99; // [esp+Ch] [ebp-68h]
  float v100; // [esp+10h] [ebp-64h]
  float v101; // [esp+14h] [ebp-60h]
  float v102; // [esp+14h] [ebp-60h]
  float v103; // [esp+14h] [ebp-60h]
  float v104; // [esp+18h] [ebp-5Ch]
  float v105; // [esp+18h] [ebp-5Ch]
  float v106; // [esp+18h] [ebp-5Ch]
  int v107; // [esp+1Ch] [ebp-58h]
  float v108; // [esp+1Ch] [ebp-58h]
  __m128 *v109; // [esp+1Ch] [ebp-58h]
  float *v110; // [esp+20h] [ebp-54h]
  float v111; // [esp+20h] [ebp-54h]
  signed int v112; // [esp+24h] [ebp-50h]
  float v113; // [esp+24h] [ebp-50h]
  signed int v114; // [esp+24h] [ebp-50h]
  __m128 v115; // [esp+34h] [ebp-40h]
  float v116; // [esp+44h] [ebp-30h]
  __m128 v117; // [esp+44h] [ebp-30h]
  float v118; // [esp+44h] [ebp-30h]
  __m128 v119; // [esp+44h] [ebp-30h]
  __m128 v120; // [esp+54h] [ebp-20h]

  v6 = *(float *)&SrcStr;
  v7 = *(__m128 **)(a5 + 0x14);
  v8 = fConstant_1 / (double)a2;
  v9 = *(__m128 **)(a5 + 0x18);
  v10 = a6;
  v11 = (_DWORD *)a6[1];
  v12 = *a6;
  v11[2] = a3;
  *v11 = 0x11801;
  v11[3] = v7;
  v11[4] = v9;
  v11[5] = 0x14;
  v11[1] = v12;
  v13 = (__m128 *)*a6;
  v14 = (float *)(v11 + 6);
  v15 = 0;
  v16 = 0;
  v107 = 0;
  v99 = v8;
  if ( a2 - 1 >= 0 )
  {
    v98 = a1 + 1;
    v17 = (float *)(a3 + 0x10);
    v110 = (float *)(a3 + 0x10);
    v112 = a2;
    do
    {
      *v13 = *v98;
      v18 = _mm_sub_ps(v98[0xFFFFFFFF], v7[4]);
      v19 = _mm_sub_ps(v98[0xFFFFFFFF], v9[4]);
      v20 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0xC9), _mm_shuffle_ps(*v98, *v98, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v18, v18, 0xD2), _mm_shuffle_ps(*v98, *v98, 0xC9)));
      if ( !v7->m128_i8[0xC] )
        v20 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v7[5], _mm_shuffle_ps(v20, v20, 0)),
                  _mm_mul_ps(v7[6], _mm_shuffle_ps(v20, v20, 0x55))),
                _mm_mul_ps(v7[7], _mm_shuffle_ps(v20, v20, 0xAA)));
      v13[1] = v20;
      v21 = _mm_sub_ps(
              _mm_mul_ps(_mm_shuffle_ps(*v98, *v98, 0xC9), _mm_shuffle_ps(v19, v19, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(*v98, *v98, 0xD2), _mm_shuffle_ps(v19, v19, 0xC9)));
      if ( !v9->m128_i8[0xC] )
        v21 = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v9[5], _mm_shuffle_ps(v21, v21, 0)),
                  _mm_mul_ps(v9[6], _mm_shuffle_ps(v21, v21, 0x55))),
                _mm_mul_ps(v9[7], _mm_shuffle_ps(v21, v21, 0xAA)));
      v22 = v13[1];
      v13[2] = v21;
      v23 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v22, v22), v7[3]), _mm_mul_ps(_mm_mul_ps(v13[2], v13[2]), v9[3]));
      v24 = v9[3].m128_f32[3]
          + v7[3].m128_f32[3]
          + flt_AA2F14
          + (float)(_mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]));
      v13[2].m128_f32[3] = v24;
      v13[1].m128_f32[3] = fConstant_1 / v24;
      v107 += *((unsigned __int16 *)v17 + 0xFFFFFFFE);
      v25 = v110;
      v6 = v6 + v110[0xFFFFFFFC];
      v26 = *v110;
      v111 = v98->m128_f32[3] - v26;
      v104 = -v25[0xFFFFFFFD] - v111;
      v27 = v26 * flt_AA2F1C;
      if ( v27 >= *(float *)(a5 + 8) )
      {
        v100 = *(float *)(a5 + 8);
      }
      else
      {
        v101 = v27;
        v100 = v101;
      }
      v102 = v100 + v26;
      v28 = v111 - v100;
      if ( v100 + v100 + flt_A37080 < v104 )
      {
        v102 = v102 - v104;
        v28 = v28 + v104;
      }
      if ( fabs(v28) < flt_A9E034 )
        v28 = *(float *)&SrcStr;
      if ( v102 >= (double)*(float *)&SrcStr )
        v29 = *(float *)&SrcStr;
      else
        v29 = v102;
      *v25 = v29;
      v13->m128_f32[3] = -v28 * *(float *)(a5 + 4);
      v15 = _mm_add_ps(v15, v98[0xFFFFFFFF]);
      v16 = _mm_add_ps(v16, *v98);
      if ( (*((_BYTE *)v25 + 0xFFFFFFFF) & 2) != 0 )
      {
        v30 = v13[0xFFFFFFFD];
        v31 = v13[0xFFFFFFFF].m128_f32[3];
        v32 = *v13;
        v33 = v13[2].m128_f32[3];
        v34 = v13[1];
        v35 = v13 + 0xFFFFFFFD;
        v36 = _mm_mul_ps(v32, v30);
        v37 = _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v34, v35[1]), v7[3]), _mm_mul_ps(_mm_mul_ps(v35[5], v35[2]), v9[3])),
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v7[3], v7[3], 0xFF), v36),
                  _mm_mul_ps(_mm_shuffle_ps(v9[3], v9[3], 0xFF), v36)));
        ++v14;
        v13 = v35 + 6;
        v103 = (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]))
             * flt_A65520;
        v38 = fConstant_1 / (v33 * v31 - v103 * v103);
        v105 = v38;
        v13[0xFFFFFFFC].m128_f32[3] = v38 * v33;
        v13[0xFFFFFFFF].m128_f32[3] = v105 * v31;
        *((_DWORD *)v14 + 0xFFFFFFFE) = 0x50803;
        v14[0xFFFFFFFF] = -(v105 * v103);
      }
      else
      {
        *(_DWORD *)v14++ = 0x30402;
        v13 += 3;
      }
      v98 += 2;
      v17 = v25 + 5;
      v39 = v112 == 1;
      v110 = v17;
      --v112;
    }
    while ( !v39 );
    v10 = a6;
  }
  v40 = v6 * ((double)v107 * flt_A9A028 * v99);
  if ( v40 <= *(float *)&SrcStr )
  {
    v10[1] = (int)v14;
    *v10 = (int)v13;
    return;
  }
  v41 = _mm_mul_ps(v16, v16);
  v113 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
       + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
  if ( v99 * v99 * v113 <= flt_AA1C60 )
  {
    if ( v113 <= (double)flt_A2FAAC )
    {
      v42 = a1[1];
      v46 = _mm_mul_ps(v42, v42);
      v115 = v42;
      if ( (float)(_mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0])) < (double)flt_A37450 )
      {
        v115 = 0;
        v40 = *(float *)&SrcStr;
        v115.m128_i32[1] = 0x3F800000;
        v42 = v115;
      }
    }
    else
    {
      v43 = _mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0];
      v44 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0];
      v116 = 1.0 / fsqrt(v44 + v43);
      v45 = (__m128)0x3F000000u;
      v45.m128_f32[0] = (float)(0.5 * v116) * (float)(3.0 - (float)((float)((float)(v44 + v43) * v116) * v116));
      v42 = _mm_mul_ps(_mm_shuffle_ps(v45, v45, 0), v16);
      v115 = v42;
    }
  }
  else
  {
    v42 = a1[1];
    v115 = v42;
  }
  v47 = _mm_shuffle_ps(v42, v42, 0xC9);
  v48 = _mm_shuffle_ps(v42, v42, 0xD2);
  while ( 1 )
  {
    v49 = (__m128)xmmword_B2F090[*(unsigned __int16 *)(a4 + 2)];
    v50 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xC9), v48), _mm_mul_ps(_mm_shuffle_ps(v49, v49, 0xD2), v47));
    v51 = _mm_mul_ps(v50, v50);
    if ( (float)(_mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0])) > (double)flt_A2FAAC )
      break;
    v117 = _mm_and_ps(v42, (__m128)xmmword_A372D0);
    if ( v117.m128_f32[0] >= (double)v117.m128_f32[1] )
    {
      v52 = 1;
      if ( v117.m128_f32[1] < (double)v117.m128_f32[2] )
        goto LABEL_36;
      goto LABEL_35;
    }
    if ( v117.m128_f32[0] >= (double)v117.m128_f32[2] )
    {
LABEL_35:
      v52 = 2;
LABEL_36:
      *(_WORD *)(a4 + 2) = v52;
      *(_DWORD *)(a4 + 8) = 0;
      *(_DWORD *)(a4 + 0x10) = 0;
    }
    else
    {
      *(_WORD *)(a4 + 2) = 0;
      *(_DWORD *)(a4 + 8) = 0;
      *(_DWORD *)(a4 + 0x10) = 0;
    }
  }
  v53 = _mm_mul_ps(v50, v50);
  v54 = _mm_shuffle_ps(v53, v53, 0x55).m128_f32[0] + v53.m128_f32[0];
  v55 = _mm_shuffle_ps(v53, v53, 0xAA).m128_f32[0];
  v118 = 1.0 / fsqrt(v55 + v54);
  v56 = (__m128)0x3F000000u;
  v56.m128_f32[0] = (float)(0.5 * v118) * (float)(3.0 - (float)((float)((float)(v55 + v54) * v118) * v118));
  v57 = _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), v50);
  v58 = _mm_shuffle_ps(v57, v57, 0xD2);
  v59 = _mm_mul_ps(v47, v58);
  v60 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v99), (__m128)LODWORD(v99), 0), v15);
  v61 = _mm_shuffle_ps(v57, v57, 0xC9);
  v62 = _mm_sub_ps(v59, _mm_mul_ps(v48, v61));
  *v13 = v62;
  v63 = _mm_sub_ps(v60, v7[4]);
  v120 = _mm_sub_ps(v60, v9[4]);
  v64 = _mm_shuffle_ps(v62, v62, 0xC9);
  v119 = _mm_shuffle_ps(v62, v62, 0xD2);
  v65 = _mm_mul_ps(_mm_shuffle_ps(v63, v63, 0xD2), v64);
  v66 = _mm_shuffle_ps(v63, v63, 0xC9);
  v67 = v119;
  v68 = _mm_sub_ps(_mm_mul_ps(v66, v119), v65);
  if ( !v7->m128_i8[0xC] )
  {
    v67 = v119;
    v68 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v7[5], _mm_shuffle_ps(v68, v68, 0)),
              _mm_mul_ps(v7[6], _mm_shuffle_ps(v68, v68, 0x55))),
            _mm_mul_ps(v7[7], _mm_shuffle_ps(v68, v68, 0xAA)));
  }
  v13[1] = v68;
  v69 = _mm_sub_ps(_mm_mul_ps(v64, _mm_shuffle_ps(v120, v120, 0xD2)), _mm_mul_ps(v67, _mm_shuffle_ps(v120, v120, 0xC9)));
  if ( !v9->m128_i8[0xC] )
    v69 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v9[5], _mm_shuffle_ps(v69, v69, 0)),
              _mm_mul_ps(v9[6], _mm_shuffle_ps(v69, v69, 0x55))),
            _mm_mul_ps(v9[7], _mm_shuffle_ps(v69, v69, 0xAA)));
  v70 = v13[1];
  v13[2] = v69;
  v71 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v70, v70), v7[3]), _mm_mul_ps(_mm_mul_ps(v13[2], v13[2]), v9[3]));
  v72 = v9[3].m128_f32[3]
      + v7[3].m128_f32[3]
      + flt_AA2F14
      + (float)(_mm_shuffle_ps(v71, v71, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v71, v71, 0x55).m128_f32[0] + v71.m128_f32[0]));
  v73 = v13 + 3;
  v73[0xFFFFFFFF].m128_f32[3] = v72;
  v73[0xFFFFFFFE].m128_f32[3] = fConstant_1 / v72;
  v73[0xFFFFFFFD].m128_f32[3] = *(float *)(a4 + 8) * *(float *)(a5 + 4);
  *v73 = v57;
  v74 = _mm_sub_ps(v60, v7[4]);
  v75 = _mm_sub_ps(v60, v9[4]);
  v76 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v74, v74, 0xC9), v58), _mm_mul_ps(_mm_shuffle_ps(v74, v74, 0xD2), v61));
  if ( !v7->m128_i8[0xC] )
    v76 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v7[5], _mm_shuffle_ps(v76, v76, 0)),
              _mm_mul_ps(v7[6], _mm_shuffle_ps(v76, v76, 0x55))),
            _mm_mul_ps(v7[7], _mm_shuffle_ps(v76, v76, 0xAA)));
  v73[1] = v76;
  v77 = _mm_sub_ps(_mm_mul_ps(v61, _mm_shuffle_ps(v75, v75, 0xD2)), _mm_mul_ps(v58, _mm_shuffle_ps(v75, v75, 0xC9)));
  if ( !v9->m128_i8[0xC] )
    v77 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v9[5], _mm_shuffle_ps(v77, v77, 0)),
              _mm_mul_ps(v9[6], _mm_shuffle_ps(v77, v77, 0x55))),
            _mm_mul_ps(v9[7], _mm_shuffle_ps(v77, v77, 0xAA)));
  v78 = v73[1];
  v73[2] = v77;
  v79 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(v78, v78), v7[3]), _mm_mul_ps(_mm_mul_ps(v73[2], v73[2]), v9[3]));
  v80 = v9[3].m128_f32[3]
      + v7[3].m128_f32[3]
      + flt_AA2F14
      + (float)(_mm_shuffle_ps(v79, v79, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v79, v79, 0x55).m128_f32[0] + v79.m128_f32[0]));
  v81 = (int)&v73[3];
  *(float *)(v81 - 4) = v80;
  *(float *)(v81 - 0x14) = fConstant_1 / v80;
  *(float *)(v81 - 0x24) = *(float *)(a4 + 0x10) * *(float *)(a5 + 4);
  v82 = *(float *)(v81 - 0x34);
  v83 = *(float *)(v81 - 4);
  v84 = _mm_mul_ps(*(__m128 *)(v81 - 0x30), *(__m128 *)(v81 - 0x60));
  v85 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(*(__m128 *)(v81 - 0x20), *(__m128 *)(v81 - 0x50)), v7[3]),
            _mm_mul_ps(_mm_mul_ps(*(__m128 *)(v81 - 0x10), *(__m128 *)(v81 - 0x40)), v9[3])),
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v7[3], v7[3], 0xFF), v84),
            _mm_mul_ps(_mm_shuffle_ps(v9[3], v9[3], 0xFF), v84)));
  v108 = _mm_shuffle_ps(v85, v85, 0xAA).m128_f32[0]
       + (float)(_mm_shuffle_ps(v85, v85, 0x55).m128_f32[0] + v85.m128_f32[0]);
  v86 = fConstant_1 / (v82 * v83 - v108 * v108);
  v106 = v86;
  *(float *)(v81 - 0x34) = v86 * v83;
  *(float *)(v81 - 4) = v106 * v82;
  v87 = v40 * *(float *)(a5 + 0x10);
  *((_DWORD *)v14 + 1) = a4 + 4;
  v88 = v14 + 5;
  *(_DWORD *)v14 = 0x51407;
  *((_DWORD *)v14 + 4) = 8;
  v14[2] = -(v108 * v106);
  v14[3] = v87;
  if ( a2 <= 1 )
  {
    *a6 = v81;
    a6[1] = (int)v88;
  }
  else if ( (*(_BYTE *)a4 & 4) != 0 )
  {
    while ( 1 )
    {
      v109 = a1;
      *(_DWORD *)(a4 + 0x1C) = 0;
      v114 = a2;
      do
      {
        v89 = _mm_sub_ps(*v109, v60);
        v90 = _mm_mul_ps(v89, v89);
        v109 += 2;
        *(float *)(a4 + 0x1C) = fsqrt(
                                  _mm_shuffle_ps(v90, v90, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v90, v90, 0x55).m128_f32[0] + v90.m128_f32[0]))
                              + *(float *)(a4 + 0x1C);
        --v114;
      }
      while ( v114 );
      v91 = v99 * *(float *)(a4 + 0x1C);
      *(float *)(a4 + 0x1C) = v91;
      if ( v91 < flt_A372CC )
        break;
      *(_BYTE *)a4 &= ~4u;
      if ( (*(_BYTE *)a4 & 4) == 0 )
      {
        v88 = v14 + 5;
        goto LABEL_53;
      }
    }
    *a6 = v81;
    a6[1] = (int)(v14 + 5);
  }
  else
  {
LABEL_53:
    if ( v7->m128_i8[0xC] )
      *(__m128 *)v81 = v115;
    else
      *(__m128 *)v81 = _mm_add_ps(
                         _mm_add_ps(
                           _mm_mul_ps(v7[5], _mm_shuffle_ps(v115, v115, 0)),
                           _mm_mul_ps(v7[6], _mm_shuffle_ps(v115, v115, 0x55))),
                         _mm_mul_ps(v7[7], _mm_shuffle_ps(v115, v115, 0xAA)));
    v92 = _mm_xor_ps(v115, (__m128)xmmword_A965C0);
    if ( !v9->m128_i8[0xC] )
      v92 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v9[5], _mm_shuffle_ps(v92, v92, 0)),
                _mm_mul_ps(v9[6], _mm_shuffle_ps(v92, v92, 0x55))),
              _mm_mul_ps(v9[7], _mm_shuffle_ps(v92, v92, 0xAA)));
    v93 = *(__m128 *)v81;
    *(__m128 *)(v81 + 0x10) = v92;
    v94 = _mm_add_ps(
            _mm_mul_ps(_mm_mul_ps(v93, v93), v7[3]),
            _mm_mul_ps(_mm_mul_ps(*(__m128 *)(v81 + 0x10), *(__m128 *)(v81 + 0x10)), v9[3]));
    v95 = (int)(v14 + 6);
    v96 = v81 + 0x20;
    *(float *)(v96 - 0x14) = fConstant_1
                           / ((float)(_mm_shuffle_ps(v94, v94, 0xAA).m128_f32[0]
                                    + (float)(_mm_shuffle_ps(v94, v94, 0x55).m128_f32[0] + v94.m128_f32[0]))
                            + flt_AA2F14);
    v97 = fConstant_1 / *(float *)(a4 + 0x1C);
    *v88 = *(float *)(a4 + 0x1C);
    *(_DWORD *)(v95 - 0x18) = 0x61808;
    *(float *)(v96 - 4) = *(float *)(a4 + 0x18) * *(float *)(a5 + 4);
    *(float *)(v96 - 0x14) = v97 * *(float *)(v96 - 0x14);
    *a6 = v96;
    a6[1] = v95;
  }
}
