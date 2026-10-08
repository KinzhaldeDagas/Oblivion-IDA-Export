void __cdecl sub_8D0CA0(__m128 *a1, float a2, __m128 *a3, float a4, float *a5, float a6, int a7, __m128 *a8)
{
  __m128 *v8; // edx
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

  v8 = a3; /*0x8d0caf*/
  v9 = a3[1]; /*0x8d0cbc*/
  v10 = _mm_sub_ps(*a3, a3[2]); /*0x8d0cc6*/
  v11 = _mm_sub_ps(a3[2], v9); /*0x8d0ccc*/
  v12 = _mm_sub_ps( /*0x8d0cfd*/
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9)));
  v13 = _mm_mul_ps(_mm_shuffle_ps((__m128)*(unsigned int *)a5, (__m128)*(unsigned int *)a5, 0), v11); /*0x8d0d21*/
  v14 = _mm_mul_ps(_mm_shuffle_ps((__m128)*((unsigned int *)a5 + 1), (__m128)*((unsigned int *)a5 + 1), 0), v10); /*0x8d0d3b*/
  v15 = _mm_mul_ps(_mm_shuffle_ps((__m128)*((unsigned int *)a5 + 3), (__m128)*((unsigned int *)a5 + 3), 0), v12); /*0x8d0d41*/
  v16 = _mm_mul_ps( /*0x8d0d66*/
          _mm_shuffle_ps((__m128)*((unsigned int *)a5 + 2), (__m128)*((unsigned int *)a5 + 2), 0),
          _mm_sub_ps(v9, *a3));
  v17 = _mm_shuffle_ps(v15, v15, 0xC9); /*0x8d0d6c*/
  v18 = _mm_shuffle_ps(v15, v15, 0xD2); /*0x8d0d76*/
  v19 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xC9), v18), _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xD2), v17)); /*0x8d0d84*/
  v20 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), v18), _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), v17)); /*0x8d0d94*/
  v21 = _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0xC9), v18), _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0xD2), v17)); /*0x8d0dab*/
  v118 = v15; /*0x8d0dae*/
  v121 = v19; /*0x8d0db3*/
  v122 = v20; /*0x8d0dbb*/
  v123 = v21; /*0x8d0dc3*/
  v22 = a1; /*0x8d0dd9*/
  v121.m128_f32[1] = v20.m128_f32[0]; /*0x8d0ddc*/
  v23 = *a1; /*0x8d0dea*/
  v122.m128_i32[0] = v19.m128_i32[1]; /*0x8d0ded*/
  v121.m128_f32[2] = v21.m128_f32[0]; /*0x8d0dfb*/
  v123.m128_u64[0] = __PAIR64__(v20.m128_u32[2], v19.m128_u32[2]); /*0x8d0e09*/
  v122.m128_f32[2] = v21.m128_f32[1]; /*0x8d0e17*/
  v24 = a5[4] * *a5; /*0x8d0e2c*/
  v121.m128_i32[3] = v15.m128_i32[0]; /*0x8d0e2e*/
  v124 = 0; /*0x8d0e3e*/
  v124.m128_f32[0] = -v24; /*0x8d0e46*/
  v25 = *a3; /*0x8d0e4d*/
  v26 = _mm_sub_ps(v23, *a3); /*0x8d0e50*/
  v122.m128_i32[3] = v15.m128_i32[1]; /*0x8d0e53*/
  v27 = v122; /*0x8d0e5e*/
  v119 = v26; /*0x8d0e66*/
  v28 = _mm_sub_ps(a1[1], v25); /*0x8d0e6f*/
  v123.m128_i32[3] = v15.m128_i32[2]; /*0x8d0e72*/
  v29 = v123; /*0x8d0e79*/
  v120 = v28; /*0x8d0e81*/
  v30 = v124; /*0x8d0e86*/
  v31 = &v119; /*0x8d0e8e*/
  v32 = 2; /*0x8d0e92*/
  do /*0x8d0edf*/
  {
    *v31 = _mm_add_ps( /*0x8d0ed8*/
             _mm_add_ps(
               _mm_mul_ps(v121, _mm_shuffle_ps(*v31, *v31, 0)),
               _mm_mul_ps(v27, _mm_shuffle_ps(*v31, *v31, 0x55))),
             _mm_add_ps(_mm_mul_ps(v29, _mm_shuffle_ps(*v31, *v31, 0xAA)), v30));
    ++v31; /*0x8d0edb*/
    --v32; /*0x8d0ede*/
  }
  while ( v32 ); /*0x8d0edf*/
  v33 = a8; /*0x8d0ee4*/
  v34 = a2 + a4; /*0x8d0ee7*/
  v35 = v120; /*0x8d0eea*/
  a8[1].m128_i32[3] = 0x7F7FFFFF; /*0x8d0ef4*/
  v108 = v34; /*0x8d0ef7*/
  a8[3].m128_i32[3] = 0x7F7FFFFF; /*0x8d0efb*/
  v36 = v34 + a6; /*0x8d0efe*/
  a8[5].m128_i32[3] = 0x7F7FFFFF; /*0x8d0f01*/
  *(float *)&v99 = v36; /*0x8d0f04*/
  v37 = _mm_shuffle_ps((__m128)v99, (__m128)v99, 0); /*0x8d0f0e*/
  v38 = v119; /*0x8d0f1c*/
  if ( (_mm_movemask_ps(_mm_cmplt_ps(v37, v35)) & _mm_movemask_ps(_mm_cmplt_ps(v37, v119))) != 0 ) /*0x8d0f2a*/
    return; /*0x8d0f2a*/
  v39 = -v36; /*0x8d0f30*/
  if ( v119.m128_f32[3] < v39 && v120.m128_f32[3] < v39 ) /*0x8d0f4c*/
    return; /*0x8d0f4c*/
  v40 = _mm_movemask_ps(v35); /*0x8d0f56*/
  v41 = _mm_movemask_ps(v119); /*0x8d0f59*/
  v115.m128_u64[0] = __PAIR64__(v40, v41); /*0x8d0f63*/
  if ( (((unsigned __int8)v41 ^ (unsigned __int8)v40) & 8) != 0 ) /*0x8d0f6b*/
  {
    *(float *)&v100 = v119.m128_f32[3] / (v119.m128_f32[3] - v120.m128_f32[3]); /*0x8d0f84*/
    v42 = _mm_shuffle_ps((__m128)v100, (__m128)v100, 0); /*0x8d0f8e*/
    if ( (_mm_movemask_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v42), v119), _mm_mul_ps(v42, v35))) /*0x8d0faa*/
        & 7) == 7 )
    {
      v43 = &v119.m128_f32[3]; /*0x8d0fb0*/
      v44 = 0; /*0x8d0fb8*/
      a8[3].m128_i32[3] = 0xFF7FFFFF; /*0x8d0fbc*/
      do /*0x8d1048*/
      {
        if ( (v115.m128_i8[4 * v44] & 7) == 7 ) /*0x8d0fd2*/
        {
          v45 = -fabs(*v43) - v108; /*0x8d0fda*/
          if ( v45 > a8[3].m128_f32[3] ) /*0x8d0fe6*/
          {
            v46 = a4; /*0x8d0feb*/
            if ( (v115.m128_i32[v44] & 8) != 0 ) /*0x8d0ff2*/
            {
              v47 = v46 - *v43; /*0x8d0ff4*/
              a8[3] = v15; /*0x8d0ff6*/
            }
            else
            {
              v47 = -v46 - *v43; /*0x8d100f*/
              a8[3] = _mm_xor_ps(v15, (__m128)xmmword_A965C0); /*0x8d1017*/
            }
            *(float *)&v101 = v47; /*0x8d0ffa*/
            v48 = *(__m128 *)((char *)v43 + (char *)a1 - (char *)&v119.m128_u32[3]); /*0x8d102c*/
            a8[3].m128_f32[3] = v45; /*0x8d1030*/
            a8[2] = _mm_add_ps(v48, _mm_mul_ps(_mm_shuffle_ps((__m128)v101, (__m128)v101, 0), v15)); /*0x8d1039*/
          }
        }
        ++v44; /*0x8d1041*/
        v43 += 4; /*0x8d1042*/
      }
      while ( v44 < 2 ); /*0x8d1048*/
      v115 = _mm_sub_ps(v35, v38); /*0x8d1051*/
      v49 = v115.m128_f32[3] * v115.m128_f32[3]; /*0x8d105a*/
      for ( i = 0; i < 3; ++i ) /*0x8d105e*/
      {
        v51 = v115.m128_f32[3]; /*0x8d1060*/
        v106 = v115.m128_f32[i]; /*0x8d1068*/
        v52 = fConstant_1 / (v106 * v106 + v49); /*0x8d1072*/
        v53 = v119.m128_f32[3] * v106 - v115.m128_f32[3] * v119.m128_f32[i]; /*0x8d108a*/
        v102 = v53 * v53 * v52; /*0x8d1090*/
        v54 = v108 + a8[3].m128_f32[3]; /*0x8d109a*/
        if ( v102 < v54 * v54 ) /*0x8d10ae*/
        {
          v103 = -((v106 * v119.m128_f32[i] + v115.m128_f32[3] * v119.m128_f32[3]) * v52); /*0x8d10ca*/
          if ( v103 > (double)flt_A906F4 && v103 < (double)flt_A99F00 ) /*0x8d10f4*/
          {
            v55 = v121.m128_f32[i]; /*0x8d10fa*/
            v118.m128_i32[3] = 0; /*0x8d1101*/
            v118.m128_f32[0] = v55; /*0x8d1109*/
            v118.m128_f32[1] = v122.m128_f32[i]; /*0x8d1114*/
            v118.m128_f32[2] = v123.m128_f32[i]; /*0x8d111f*/
            if ( v115.m128_f32[3] < (double)*(float *)&SrcStr ) /*0x8d1132*/
            {
              v51 = -v115.m128_f32[3]; /*0x8d113a*/
              v106 = -v106; /*0x8d1142*/
            }
            *(float *)&v112 = v51; /*0x8d1146*/
            v56 = (__m128)v112; /*0x8d115b*/
            *(float *)&v113 = -v106; /*0x8d115e*/
            v118 = _mm_mul_ps(_mm_shuffle_ps(v56, v56, 0), v118); /*0x8d117c*/
            a8[3] = _mm_add_ps(v118, _mm_mul_ps(_mm_shuffle_ps((__m128)v113, (__m128)v113, 0), v15)); /*0x8d118e*/
            v57 = a8[3]; /*0x8d1192*/
            v58 = _mm_mul_ps(v57, v57); /*0x8d1199*/
            v56.m128_f32[0] = _mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]; /*0x8d11a3*/
            v59 = _mm_shuffle_ps(v58, v58, 0xAA); /*0x8d11aa*/
            v60 = v59; /*0x8d11ae*/
            v60.m128_f32[0] = v59.m128_f32[0] + v56.m128_f32[0]; /*0x8d11b1*/
            v125 = v60; /*0x8d11b5*/
            v125.m128_f32[0] = 1.0 / fsqrt(v59.m128_f32[0] + v56.m128_f32[0]); /*0x8d11c1*/
            v116 = 0x40400000; /*0x8d11da*/
            v117 = 0.5; /*0x8d11ec*/
            v61 = (__m128)0x3F000000u; /*0x8d11f4*/
            v61.m128_f32[0] = (float)(0.5 * v125.m128_f32[0]) /*0x8d11fe*/
                            * (float)(3.0
                                    - (float)((float)((float)(v59.m128_f32[0] + v56.m128_f32[0]) * v125.m128_f32[0])
                                            * v125.m128_f32[0]));
            a8[3] = _mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), v57); /*0x8d120c*/
            v62 = (__m128)xmmword_A6DFE0; /*0x8d1214*/
            v63 = _mm_shuffle_ps((__m128)LODWORD(v103), (__m128)LODWORD(v103), 0); /*0x8d1225*/
            v64 = -sqrt(v102); /*0x8d122c*/
            *(float *)&v114 = a4 - v64; /*0x8d1233*/
            v65 = _mm_mul_ps(_mm_shuffle_ps((__m128)v114, (__m128)v114, 0), a8[3]); /*0x8d124c*/
            v66 = _mm_mul_ps(v63, a1[1]); /*0x8d1252*/
            v67 = *a1; /*0x8d1255*/
            a8[3].m128_f32[3] = v64 - v108; /*0x8d1258*/
            a8[2] = _mm_add_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v62, v63), v67), v66), v65); /*0x8d1264*/
          }
        }
      }
      return; /*0x8d1274*/
    }
  }
  v68 = v41 | v40; /*0x8d128a*/
  v69 = 0; /*0x8d128e*/
  v107 = 0; /*0x8d1298*/
  v125 = _mm_sub_ps(a1[1], *a1); /*0x8d129c*/
  v98 = 0; /*0x8d12a4*/
  if ( (v68 & 7) == 7 ) /*0x8d12a8*/
    goto LABEL_34; /*0x8d12a8*/
  if ( a7 ) /*0x8d12b3*/
  {
    a8[1].m128_f32[3] = a6; /*0x8d12be*/
    a8[3].m128_f32[3] = a6; /*0x8d12c1*/
    a8[5].m128_f32[3] = a6; /*0x8d12c4*/
    v104 = 1; /*0x8d12c7*/
    for ( j = 0; j < 3; ++j ) /*0x8d12cf*/
    {
      if ( (v68 & v104) == 0 ) /*0x8d12d5*/
      {
        v71 = byte_A99F0C[j]; /*0x8d12ec*/
        v119 = v8[byte_A99F0E[j]]; /*0x8d12ef*/
        v120 = v8[v71]; /*0x8d130a*/
        sub_8D0290(a1, a2, &v119, a4, a8); /*0x8d1312*/
        v8 = a3; /*0x8d1317*/
      }
      v104 *= 2; /*0x8d1327*/
    }
    return; /*0x8d132b*/
  }
  v98 = 1; /*0x8d1334*/
LABEL_33:
  v72 = 1; /*0x8d1339*/
  v73 = 0; /*0x8d133e*/
  while ( 1 ) /*0x8d1410*/
  {
    if ( v98 ) /*0x8d1416*/
      v82 = (v115.m128_i32[1] & v72 & v115.m128_i32[0]) == 0; /*0x8d142a*/
    else
      v82 = (v72 & v115.m128_i32[v69]) == 0; /*0x8d1418*/
    if ( v82 ) /*0x8d142c*/
    {
      v83 = byte_A99F0E[v73]; /*0x8d1440*/
      v126 = _mm_sub_ps(v8[byte_A99F0C[v73]], v8[v83]); /*0x8d1470*/
      v84 = sub_8D1A30(a1, &v125, &v8[v83], &v126, &v127); /*0x8d1478*/
      v85 = v108 + v33[1].m128_f32[3]; /*0x8d1481*/
      if ( v129 < v85 * v85 ) /*0x8d149d*/
      {
        if ( ((1 << v107) & v84) == 0 ) /*0x8d14b0*/
        {
LABEL_49:
          if ( v84 ) /*0x8d14c8*/
          {
            if ( v129 > (double)flt_A97F48 ) /*0x8d151c*/
              goto LABEL_53; /*0x8d151c*/
            v128.m128_f32[0] = v121.m128_f32[v73]; /*0x8d1534*/
            v128.m128_f32[1] = v122.m128_f32[v73]; /*0x8d1549*/
            v128.m128_f32[2] = v123.m128_f32[v73]; /*0x8d1562*/
            v86 = _mm_sub_ps( /*0x8d1584*/
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xC9), _mm_shuffle_ps(v126, v126, 0xD2)),
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xD2), _mm_shuffle_ps(v126, v126, 0xC9)));
            v87 = _mm_mul_ps(v86, v86); /*0x8d158a*/
            v117 = _mm_shuffle_ps(v87, v87, 0xAA).m128_f32[0] /*0x8d15a7*/
                 + (float)(_mm_shuffle_ps(v87, v87, 0x55).m128_f32[0] + v87.m128_f32[0]);
            v88 = v117 < (double)flt_A97F48; /*0x8d15af*/
            v89 = v117 == flt_A97F48; /*0x8d15af*/
            v128.m128_i32[3] = 0; /*0x8d15b5*/
            if ( v88 || v89 ) /*0x8d15c2*/
LABEL_53:
              v86 = v128; /*0x8d15c7*/
          }
          else
          {
            v86 = _mm_sub_ps( /*0x8d1502*/
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xC9), _mm_shuffle_ps(v126, v126, 0xD2)),
                    _mm_mul_ps(_mm_shuffle_ps(v125, v125, 0xD2), _mm_shuffle_ps(v126, v126, 0xC9)));
          }
          v90 = _mm_mul_ps(v86, v86); /*0x8d15d2*/
          v91 = _mm_shuffle_ps(v90, v90, 0x55).m128_f32[0] + v90.m128_f32[0]; /*0x8d15dc*/
          v92 = _mm_shuffle_ps(v90, v90, 0xAA); /*0x8d15e3*/
          v93 = v92; /*0x8d15e7*/
          v93.m128_f32[0] = v92.m128_f32[0] + v91; /*0x8d15ea*/
          v130 = v93; /*0x8d15ee*/
          v130.m128_f32[0] = 1.0 / fsqrt(v92.m128_f32[0] + v91); /*0x8d15fa*/
          v116 = 0x40400000; /*0x8d1613*/
          v94 = (__m128)0x3F000000u; /*0x8d162d*/
          v94.m128_f32[0] = (float)(0.5 * v130.m128_f32[0]) /*0x8d1637*/
                          * (float)(3.0
                                  - (float)((float)((float)(v92.m128_f32[0] + v91) * v130.m128_f32[0]) * v130.m128_f32[0]));
          v95 = _mm_mul_ps(_mm_shuffle_ps(v94, v94, 0), v86); /*0x8d1642*/
          v96 = _mm_mul_ps(v95, v128); /*0x8d1648*/
          v105 = _mm_shuffle_ps(v96, v96, 0xAA).m128_f32[0] /*0x8d166a*/
               + (float)(_mm_shuffle_ps(v96, v96, 0x55).m128_f32[0] + v96.m128_f32[0]);
          v97 = v105; /*0x8d166e*/
          if ( v105 < (double)*(float *)&SrcStr ) /*0x8d1681*/
          {
            v95 = _mm_xor_ps(v95, (__m128)xmmword_A965C0); /*0x8d1690*/
            v97 = -v105; /*0x8d1693*/
          }
          v33[1] = v95; /*0x8d1698*/
          *(float *)&v111 = a4 - v97; /*0x8d169e*/
          *v33 = _mm_add_ps(v127, _mm_mul_ps(_mm_shuffle_ps((__m128)v111, (__m128)v111, 0), v95)); /*0x8d16c1*/
          v33[1].m128_f32[3] = v97 - v108; /*0x8d16c4*/
          goto LABEL_57; /*0x8d16c4*/
        }
        if ( v98 ) /*0x8d14b8*/
        {
          v107 = 1; /*0x8d14be*/
          goto LABEL_49; /*0x8d14be*/
        }
      }
LABEL_57:
      v8 = a3; /*0x8d16c7*/
    }
    v72 *= 2; /*0x8d16ca*/
    if ( ++v73 >= 3 ) /*0x8d16d0*/
      break; /*0x8d16d0*/
    v69 = v107; /*0x8d140a*/
  }
  if ( !v98 ) /*0x8d16dc*/
  {
    v22 = a1; /*0x8d16e6*/
    v33 += 2; /*0x8d16e9*/
    v69 = ++v107; /*0x8d16ec*/
LABEL_34:
    while ( v69 < 2 ) /*0x8d1348*/
    {
      if ( (v115.m128_i8[4 * v69] & 7) != 7 ) /*0x8d135a*/
        goto LABEL_33; /*0x8d135a*/
      v74 = a4; /*0x8d135c*/
      if ( (v115.m128_i32[v69] & 8) != 0 ) /*0x8d1363*/
      {
        v75 = 4 * v69; /*0x8d1367*/
        v76 = v22[v69]; /*0x8d136e*/
        v33 += 2; /*0x8d1376*/
        *(float *)&v109 = -v74 - v119.m128_f32[4 * v69 + 3]; /*0x8d1379*/
        v77 = v107; /*0x8d1385*/
        v78 = -v119.m128_f32[v75 + 3] - v108; /*0x8d138b*/
        v79 = v118; /*0x8d1396*/
        v33[0xFFFFFFFE] = _mm_add_ps(v76, _mm_mul_ps(_mm_shuffle_ps((__m128)v109, (__m128)v109, 0), v118)); /*0x8d13a1*/
        v80 = _mm_xor_ps(v79, (__m128)xmmword_A965C0); /*0x8d13ac*/
      }
      else
      {
        v81 = v22[v69]; /*0x8d13c4*/
        v33 += 2; /*0x8d13cc*/
        *(float *)&v110 = v74 - v119.m128_f32[4 * v69 + 3]; /*0x8d13cf*/
        v78 = v119.m128_f32[4 * v69 + 3] - v108; /*0x8d13db*/
        v77 = v107; /*0x8d13df*/
        v80 = v118; /*0x8d13ea*/
        v33[0xFFFFFFFE] = _mm_add_ps(v81, _mm_mul_ps(_mm_shuffle_ps((__m128)v110, (__m128)v110, 0), v118)); /*0x8d13f5*/
      }
      v33[0xFFFFFFFF] = v80; /*0x8d13af*/
      v33[0xFFFFFFFF].m128_f32[3] = v78; /*0x8d13b3*/
      v69 = v77 + 1; /*0x8d13b6*/
      v107 = v69; /*0x8d13b7*/
    }
  }
}
