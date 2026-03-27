void __cdecl sub_8D0CA0(__m128 *a1, float a2, __m128 *a3, float a4, float *a5, float a6, int a7, __m128 *a8)
{
  int v8; // edx
  __m128 v9; // xmm4
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm7
  __m128 v13; // xmm3
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm2
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __m128 v19; // xmm7
  __m128 v20; // xmm6
  __m128 v21; // xmm3
  __m128 *v22; // edi
  __m128 v23; // xmm2
  double v24; // st7
  __m128 v25; // xmm0
  __m128 v26; // xmm2
  __m128 v27; // xmm4
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm2
  __m128 *v31; // eax
  int v32; // ecx
  __m128 *v33; // esi
  double v34; // st7
  __m128 v35; // xmm2
  double v36; // st7
  __m128 v37; // xmm0
  __m128 v38; // xmm3
  double v39; // st7
  int v40; // ebx
  int v41; // eax
  __m128 v42; // xmm0
  float *v43; // ecx
  int v44; // edx
  long double v45; // st7
  double v46; // st6
  double v47; // st6
  __m128 v48; // xmm0
  double v49; // st7
  int i; // ecx
  double v51; // st6
  double v52; // st5
  double v53; // st3
  double v54; // st4
  double v55; // st5
  __m128 v56; // xmm3
  __m128 v57; // xmm2
  __m128 v58; // xmm0
  __m128 v59; // xmm4
  __m128 v60; // xmm0
  __m128 v61; // xmm0
  __m128 v62; // xmm5
  __m128 v63; // xmm0
  long double v64; // st6
  __m128 v65; // xmm4
  __m128 v66; // xmm3
  __m128 v67; // xmm2
  int v68; // ebx
  int v69; // ecx
  int j; // edi
  int v71; // ecx
  int v72; // ebx
  int v73; // edi
  double v74; // st7
  int v75; // eax
  __m128 v76; // xmm2
  int v77; // ecx
  double v78; // st7
  __m128 v79; // xmm0
  __m128 v80; // xmm0
  __m128 v81; // xmm2
  bool v82; // zf
  int v83; // eax
  signed int v84; // eax
  double v85; // st7
  __m128 v86; // xmm1
  __m128 v87; // xmm0
  bool v88; // c0
  bool v89; // c3
  __m128 v90; // xmm0
  float v91; // xmm2_4
  __m128 v92; // xmm3
  __m128 v93; // xmm0
  __m128 v94; // xmm0
  __m128 v95; // xmm2
  __m128 v96; // xmm0
  double v97; // st7
  char v98; // [esp+17h] [ebp-109h]
  unsigned int v99; // [esp+18h] [ebp-108h]
  unsigned int v100; // [esp+18h] [ebp-108h]
  unsigned int v101; // [esp+18h] [ebp-108h]
  float v102; // [esp+18h] [ebp-108h]
  float v103; // [esp+1Ch] [ebp-104h]
  int v104; // [esp+1Ch] [ebp-104h]
  float v105; // [esp+1Ch] [ebp-104h]
  float v106; // [esp+20h] [ebp-100h]
  int v107; // [esp+20h] [ebp-100h]
  float v108; // [esp+24h] [ebp-FCh]
  unsigned int v109; // [esp+28h] [ebp-F8h]
  unsigned int v110; // [esp+28h] [ebp-F8h]
  unsigned int v111; // [esp+28h] [ebp-F8h]
  unsigned int v112; // [esp+2Ch] [ebp-F4h]
  unsigned int v113; // [esp+2Ch] [ebp-F4h]
  unsigned int v114; // [esp+2Ch] [ebp-F4h]
  __m128 v115; // [esp+30h] [ebp-F0h]
  int v116; // [esp+48h] [ebp-D8h]
  float v117; // [esp+4Ch] [ebp-D4h]
  __m128 v118; // [esp+50h] [ebp-D0h]
  __m128 v119; // [esp+60h] [ebp-C0h] BYREF
  __m128 v120; // [esp+70h] [ebp-B0h]
  __m128 v121; // [esp+80h] [ebp-A0h]
  __m128 v122; // [esp+90h] [ebp-90h]
  __m128 v123; // [esp+A0h] [ebp-80h]
  __m128 v124; // [esp+B0h] [ebp-70h]
  __m128 v125; // [esp+C0h] [ebp-60h] BYREF
  __m128 v126; // [esp+D0h] [ebp-50h] BYREF
  __m128 v127; // [esp+E0h] [ebp-40h] BYREF
  __m128 v128; // [esp+F0h] [ebp-30h]
  float v129; // [esp+100h] [ebp-20h]
  __m128 v130; // [esp+110h] [ebp-10h]

  v8 = (int)a3;
  v9 = a3[1];
  v10 = _mm_sub_ps(*a3, a3[2]);
  v11 = _mm_sub_ps(a3[2], v9);
  v12 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9)));
  v13 = _mm_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 0), v11);
  v14 = _mm_mul_ps(_mm_shuffle_ps((__m128)*((unsigned int *)a5 + 1), (__m128)*((unsigned int *)a5 + 1), 0), v10);
  v15 = _mm_mul_ps(_mm_shuffle_ps((__m128)*((unsigned int *)a5 + 3), (__m128)*((unsigned int *)a5 + 3), 0), v12);
  v16 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)*((unsigned int *)a5 + 2), (__m128)*((unsigned int *)a5 + 2), 0),
          _mm_sub_ps(v9, *a3));
  v17 = _mm_shuffle_ps(v15, v15, 0xC9);
  v18 = _mm_shuffle_ps(v15, v15, 0xD2);
  v19 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xC9), v18), _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xD2), v17));
  v20 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), v18), _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), v17));
  v21 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0xC9), v18), _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0xD2), v17));
  v118 = v15;
  v121 = v19;
  v122 = v20;
  v123 = v21;
  v22 = a1;
  v121.m128_f32[1] = v20.m128_f32[0];
  v23 = *a1;
  v122.m128_i32[0] = v19.m128_i32[1];
  v121.m128_f32[2] = v21.m128_f32[0];
  v123.m128_u64[0] = __PAIR64__(v20.m128_u32[2], v19.m128_u32[2]);
  v122.m128_f32[2] = v21.m128_f32[1];
  v24 = a5[4] * *a5;
  v121.m128_i32[3] = v15.m128_i32[0];
  v124 = 0;
  v124.m128_f32[0] = -v24;
  v25 = *a3;
  v26 = _mm_sub_ps(v23, *a3);
  v122.m128_i32[3] = v15.m128_i32[1];
  v27 = v122;
  v119 = v26;
  v28 = _mm_sub_ps(a1[1], v25);
  v123.m128_i32[3] = v15.m128_i32[2];
  v29 = v123;
  v120 = v28;
  v30 = v124;
  v31 = &v119;
  v32 = 2;
  do
  {
    *v31 = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(v121, _mm_shuffle_ps(*v31, *v31, 0)),
               _mm_mul_ps(v27, _mm_shuffle_ps(*v31, *v31, 0x55))),
             _mm_add_ps(_mm_mul_ps(v29, _mm_shuffle_ps(*v31, *v31, 0xAA)), v30));
    ++v31;
    --v32;
  }
  while ( v32 );
  v33 = a8;
  v34 = a2 + a4;
  v35 = v120;
  a8[1].m128_i32[3] = 0x7F7FFFFF;
  v108 = v34;
  a8[3].m128_i32[3] = 0x7F7FFFFF;
  v36 = v34 + a6;
  a8[5].m128_i32[3] = 0x7F7FFFFF;
  *(float *)&v99 = v36;
  v37 = _mm_shuffle_ps((__m128)v99, (__m128)v99, 0);
  v38 = v119;
  if ( (_mm_movemask_ps(_mm_cmplt_ps(v37, v35)) & _mm_movemask_ps(_mm_cmplt_ps(v37, v119))) != 0 )
    return;
  v39 = -v36;
  if ( v119.m128_f32[3] < v39 && v120.m128_f32[3] < v39 )
    return;
  v40 = _mm_movemask_ps(v35);
  v41 = _mm_movemask_ps(v119);
  v115.m128_u64[0] = __PAIR64__(v40, v41);
  if ( (((unsigned __int8)v41 ^ (unsigned __int8)v40) & 8) != 0 )
  {
    *(float *)&v100 = v119.m128_f32[3] / (v119.m128_f32[3] - v120.m128_f32[3]);
    v42 = _mm_shuffle_ps((__m128)v100, (__m128)v100, 0);
    if ( (_mm_movemask_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v42), v119), _mm_mul_ps(v42, v35)))
        & 7) == 7 )
    {
      v43 = &v119.m128_f32[3];
      v44 = 0;
      a8[3].m128_i32[3] = 0xFF7FFFFF;
      do
      {
        if ( (v115.m128_i8[4 * v44] & 7) == 7 )
        {
          v45 = -fabs(*v43) - v108;
          if ( v45 > a8[3].m128_f32[3] )
          {
            v46 = a4;
            if ( (v115.m128_i32[v44] & 8) != 0 )
            {
              v47 = v46 - *v43;
              a8[3] = v15;
            }
            else
            {
              v47 = -v46 - *v43;
              a8[3] = _mm_xor_ps(v15, (__m128)xmmword_A965C0);
            }
            *(float *)&v101 = v47;
            v48 = *(__m128 *)((char *)v43 + (char *)a1 - (char *)&v119.m128_u32[3]);
            a8[3].m128_f32[3] = v45;
            a8[2] = _mm_add_ps(v48, _mm_mul_ps(_mm_shuffle_ps((__m128)v101, (__m128)v101, 0), v15));
          }
        }
        ++v44;
        v43 += 4;
      }
      while ( v44 < 2 );
      v115 = _mm_sub_ps(v35, v38);
      v49 = v115.m128_f32[3] * v115.m128_f32[3];
      for ( i = 0; i < 3; ++i )
      {
        v51 = v115.m128_f32[3];
        v106 = v115.m128_f32[i];
        v52 = fConstant_1 / (v106 * v106 + v49);
        v53 = v119.m128_f32[3] * v106 - v115.m128_f32[3] * v119.m128_f32[i];
        v102 = v53 * v53 * v52;
        v54 = v108 + a8[3].m128_f32[3];
        if ( v102 < v54 * v54 )
        {
          v103 = -((v106 * v119.m128_f32[i] + v115.m128_f32[3] * v119.m128_f32[3]) * v52);
          if ( v103 > (double)flt_A906F4 && v103 < (double)flt_A99F00 )
          {
            v55 = v121.m128_f32[i];
            v118.m128_i32[3] = 0;
            v118.m128_f32[0] = v55;
            v118.m128_f32[1] = v122.m128_f32[i];
            v118.m128_f32[2] = v123.m128_f32[i];
            if ( v115.m128_f32[3] < (double)*(float *)&SrcStr )
            {
              v51 = -v115.m128_f32[3];
              v106 = -v106;
            }
            *(float *)&v112 = v51;
            v56 = (__m128)v112;
            *(float *)&v113 = -v106;
            v118 = _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), v118);
            a8[3] = _mm_add_ps(v118, _mm_mul_ps(_mm_shuffle_ps((__m128)v113, (__m128)v113, 0), v15));
            v57 = a8[3];
            v58 = _mm_mul_ps(v57, v57);
            v56.m128_f32[0] = _mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0];
            v59 = _mm_shuffle_ps(v58, v58, 0xAA);
            v60 = v59;
            v60.m128_f32[0] = v59.m128_f32[0] + v56.m128_f32[0];
            v125 = v60;
            v125.m128_f32[0] = 1.0 / fsqrt(v59.m128_f32[0] + v56.m128_f32[0]);
            v116 = 0x40400000;
            v117 = 0.5;
            v61 = (__m128)0x3F000000u;
            v61.m128_f32[0] = (float)(0.5 * v125.m128_f32[0])
                            * (float)(3.0
                                    - (float)((float)((float)(v59.m128_f32[0] + v56.m128_f32[0]) * v125.m128_f32[0])
                                            * v125.m128_f32[0]));
            a8[3] = _mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v57);
            v62 = (__m128)xmmword_A6DFE0;
            v63 = _mm_shuffle_ps((__m128)LODWORD(v103), (__m128)LODWORD(v103), 0);
            v64 = -sqrt(v102);
            *(float *)&v114 = a4 - v64;
            v65 = _mm_mul_ps(_mm_shuffle_ps((__m128)v114, (__m128)v114, 0), a8[3]);
            v66 = _mm_mul_ps(v63, a1[1]);
            v67 = *a1;
            a8[3].m128_f32[3] = v64 - v108;
            a8[2] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v62, v63), v67), v66), v65);
          }
        }
      }
      return;
    }
  }
  v68 = v41 | v40;
  v69 = 0;
  v107 = 0;
  v125 = _mm_sub_ps(a1[1], *a1);
  v98 = 0;
  if ( (v68 & 7) == 7 )
    goto LABEL_34;
  if ( a7 )
  {
    a8[1].m128_f32[3] = a6;
    a8[3].m128_f32[3] = a6;
    a8[5].m128_f32[3] = a6;
    v104 = 1;
    for ( j = 0; j < 3; ++j )
    {
      if ( (v68 & v104) == 0 )
      {
        v71 = 0x10 * byte_A99F0C[j];
        v119 = *(__m128 *)(0x10 * byte_A99F0E[j] + v8);
        v120 = *(__m128 *)(v71 + v8);
        sub_8D0290(a1, a2, &v119, a4, a8);
        v8 = (int)a3;
      }
      v104 *= 2;
    }
    return;
  }
  v98 = 1;
LABEL_33:
  v72 = 1;
  v73 = 0;
  while ( 1 )
  {
    if ( v98 )
      v82 = (v115.m128_i32[1] & v72 & v115.m128_i32[0]) == 0;
    else
      v82 = (v72 & v115.m128_i32[v69]) == 0;
    if ( v82 )
    {
      v83 = 0x10 * byte_A99F0E[v73];
      v126 = _mm_sub_ps(*(__m128 *)(0x10 * byte_A99F0C[v73] + v8), *(__m128 *)(v83 + v8));
      v84 = sub_8D1A30(a1, &v125, (__m128 *)(v8 + v83), &v126, &v127);
      v85 = v108 + v33[1].m128_f32[3];
      if ( v129 < v85 * v85 )
      {
        if ( ((1 << v107) & v84) == 0 )
        {
LABEL_49:
          if ( v84 )
          {
            if ( v129 > (double)flt_A97F48 )
              goto LABEL_53;
            v128.m128_f32[0] = v121.m128_f32[v73];
            v128.m128_f32[1] = v122.m128_f32[v73];
            v128.m128_f32[2] = v123.m128_f32[v73];
            v86 = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xC9), _mm_shuffle_ps(v126, v126, 0xD2)),
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xD2), _mm_shuffle_ps(v126, v126, 0xC9)));
            v87 = _mm_mul_ps(v86, v86);
            v117 = _mm_shuffle_ps(v87, v87, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v87, v87, 0x55).m128_f32[0] + v87.m128_f32[0]);
            v88 = v117 < (double)flt_A97F48;
            v89 = v117 == flt_A97F48;
            v128.m128_i32[3] = 0;
            if ( v88 || v89 )
LABEL_53:
              v86 = v128;
          }
          else
          {
            v86 = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xC9), _mm_shuffle_ps(v126, v126, 0xD2)),
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xD2), _mm_shuffle_ps(v126, v126, 0xC9)));
          }
          v90 = _mm_mul_ps(v86, v86);
          v91 = _mm_shuffle_ps(v90, v90, 0x55).m128_f32[0] + v90.m128_f32[0];
          v92 = _mm_shuffle_ps(v90, v90, 0xAA);
          v93 = v92;
          v93.m128_f32[0] = v92.m128_f32[0] + v91;
          v130 = v93;
          v130.m128_f32[0] = 1.0 / fsqrt(v92.m128_f32[0] + v91);
          v116 = 0x40400000;
          v94 = (__m128)0x3F000000u;
          v94.m128_f32[0] = (float)(0.5 * v130.m128_f32[0])
                          * (float)(3.0
                                  - (float)((float)((float)(v92.m128_f32[0] + v91) * v130.m128_f32[0]) * v130.m128_f32[0]));
          v95 = _mm_mul_ps(_mm_shuffle_ps(v94, v94, 0), v86);
          v96 = _mm_mul_ps(v95, v128);
          v105 = _mm_shuffle_ps(v96, v96, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v96, v96, 0x55).m128_f32[0] + v96.m128_f32[0]);
          v97 = v105;
          if ( v105 < (double)*(float *)&SrcStr )
          {
            v95 = _mm_xor_ps(v95, (__m128)xmmword_A965C0);
            v97 = -v105;
          }
          v33[1] = v95;
          *(float *)&v111 = a4 - v97;
          *v33 = _mm_add_ps(v127, _mm_mul_ps(_mm_shuffle_ps((__m128)v111, (__m128)v111, 0), v95));
          v33[1].m128_f32[3] = v97 - v108;
          goto LABEL_57;
        }
        if ( v98 )
        {
          v107 = 1;
          goto LABEL_49;
        }
      }
LABEL_57:
      v8 = (int)a3;
    }
    v72 *= 2;
    if ( ++v73 >= 3 )
      break;
    v69 = v107;
  }
  if ( !v98 )
  {
    v22 = a1;
    v33 += 2;
    v69 = ++v107;
LABEL_34:
    while ( v69 < 2 )
    {
      if ( (v115.m128_i8[4 * v69] & 7) != 7 )
        goto LABEL_33;
      v74 = a4;
      if ( (v115.m128_i32[v69] & 8) != 0 )
      {
        v75 = 4 * v69;
        v76 = v22[v69];
        v33 += 2;
        *(float *)&v109 = -v74 - v119.m128_f32[4 * v69 + 3];
        v77 = v107;
        v78 = -v119.m128_f32[v75 + 3] - v108;
        v79 = v118;
        v33[0xFFFFFFFE] = _mm_add_ps(v76, _mm_mul_ps(_mm_shuffle_ps((__m128)v109, (__m128)v109, 0), v118));
        v80 = _mm_xor_ps(v79, (__m128)xmmword_A965C0);
      }
      else
      {
        v81 = v22[v69];
        v33 += 2;
        *(float *)&v110 = v74 - v119.m128_f32[4 * v69 + 3];
        v78 = v119.m128_f32[4 * v69 + 3] - v108;
        v77 = v107;
        v80 = v118;
        v33[0xFFFFFFFE] = _mm_add_ps(v81, _mm_mul_ps(_mm_shuffle_ps((__m128)v110, (__m128)v110, 0), v118));
      }
      v33[0xFFFFFFFF] = v80;
      v33[0xFFFFFFFF].m128_f32[3] = v78;
      v69 = v77 + 1;
      v107 = v69;
    }
  }
}
