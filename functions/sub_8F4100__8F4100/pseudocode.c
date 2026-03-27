int __thiscall sub_8F4100(__m128 *this)
{
  __m128 v1; // xmm6
  float v2; // eax
  int v3; // edx
  __m128 v4; // xmm2
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  int v7; // edi
  int v8; // esi
  bool v9; // zf
  float v10; // xmm1_4
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm3
  float v14; // xmm4_4
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm2
  __m128 v19; // xmm3
  __m128 v20; // xmm4
  __m128 v21; // xmm1
  float v22; // xmm6_4
  __m128 v23; // xmm7
  __m128 v24; // xmm1
  float v25; // xmm5_4
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 v28; // xmm1
  __m128 *v29; // eax
  __m128 v30; // xmm0
  __m128 v31; // xmm2
  __m128 v32; // xmm0
  float v33; // esi
  __m128 v34; // xmm0
  __m128 v35; // xmm0
  __m128 v36; // xmm2
  __m128 v37; // xmm0
  __m128 *v38; // eax
  int v39; // ebx
  int v40; // esi
  __m128 v41; // xmm0
  __m128 v42; // xmm2
  __m128 v43; // xmm0
  __m128 *v44; // eax
  int v45; // ebx
  __m128 v46; // xmm0
  __m128 v47; // xmm2
  __m128 v48; // xmm0
  float v49; // esi
  __m128 v50; // xmm0
  __m128 v51; // xmm0
  __m128 v52; // xmm2
  __m128 v53; // xmm0
  __m128 *v54; // eax
  __m128 *v55; // eax
  _DWORD *v56; // eax
  float v57; // esi
  int v58; // ecx
  int v59; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v61; // eax
  int v62; // ecx
  int v63; // eax
  _DWORD *v64; // eax
  int v65; // edx
  _OWORD *v66; // ecx
  int v67; // edx
  _OWORD *v68; // eax
  int v69; // ebx
  int v70; // edi
  __int32 v71; // edi
  int v72; // esi
  _DWORD *v73; // eax
  __int32 v74; // edx
  int v75; // esi
  int v76; // edi
  int v77; // ebx
  _DWORD *v78; // edx
  __int32 v79; // ecx
  __int32 v80; // eax
  int v81; // eax
  int *v82; // eax
  __int32 v83; // ecx
  int v84; // ecx
  int v85; // esi
  int v86; // ebx
  __int32 v87; // edi
  _DWORD *v88; // ecx
  __int32 v89; // eax
  int v90; // eax
  int result; // eax
  bool v92; // sf
  int v93; // ecx
  float v94; // [esp+0h] [ebp-1D4h]
  float v95; // [esp+0h] [ebp-1D4h]
  float v96; // [esp+0h] [ebp-1D4h]
  float v97; // [esp+0h] [ebp-1D4h]
  float v98; // [esp+0h] [ebp-1D4h]
  float v99; // [esp+10h] [ebp-1C4h]
  unsigned int v100; // [esp+10h] [ebp-1C4h]
  unsigned int v101; // [esp+10h] [ebp-1C4h]
  unsigned int v102; // [esp+10h] [ebp-1C4h]
  float v103; // [esp+10h] [ebp-1C4h]
  float v104; // [esp+10h] [ebp-1C4h]
  float v105; // [esp+10h] [ebp-1C4h]
  int v106; // [esp+10h] [ebp-1C4h]
  float v107; // [esp+14h] [ebp-1C0h]
  unsigned int v108; // [esp+14h] [ebp-1C0h]
  unsigned int v109; // [esp+14h] [ebp-1C0h]
  unsigned int v110; // [esp+14h] [ebp-1C0h]
  unsigned int v111; // [esp+14h] [ebp-1C0h]
  unsigned int v112; // [esp+14h] [ebp-1C0h]
  unsigned int v113; // [esp+14h] [ebp-1C0h]
  unsigned int v114; // [esp+14h] [ebp-1C0h]
  unsigned int v115; // [esp+14h] [ebp-1C0h]
  unsigned int v116; // [esp+14h] [ebp-1C0h]
  unsigned int v117; // [esp+14h] [ebp-1C0h]
  float v118; // [esp+18h] [ebp-1BCh]
  float v119; // [esp+18h] [ebp-1BCh]
  float v120; // [esp+18h] [ebp-1BCh]
  int v121; // [esp+18h] [ebp-1BCh]
  int v122; // [esp+18h] [ebp-1BCh]
  int v123; // [esp+1Ch] [ebp-1B8h]
  char *v124; // [esp+20h] [ebp-1B4h] BYREF
  int v125; // [esp+24h] [ebp-1B0h]
  int v126; // [esp+28h] [ebp-1ACh]
  float v127; // [esp+2Ch] [ebp-1A8h]
  int v128; // [esp+30h] [ebp-1A4h]
  __m128 v129; // [esp+34h] [ebp-1A0h] BYREF
  float v130; // [esp+4Ch] [ebp-188h]
  int v131; // [esp+50h] [ebp-184h]
  int v132; // [esp+54h] [ebp-180h]
  bool v133; // [esp+5Ah] [ebp-17Ah] BYREF
  bool v134; // [esp+5Bh] [ebp-179h] BYREF
  float v135; // [esp+5Ch] [ebp-178h]
  float v136; // [esp+60h] [ebp-174h]
  __m128 v137; // [esp+64h] [ebp-170h] BYREF
  float v138; // [esp+80h] [ebp-154h]
  __m128 v139; // [esp+84h] [ebp-150h] BYREF
  __m128 v140; // [esp+94h] [ebp-140h]
  __m128 *v141; // [esp+B0h] [ebp-124h]
  __m128 v142; // [esp+B4h] [ebp-120h]
  __m128 v143; // [esp+C4h] [ebp-110h] BYREF
  __m128 v144; // [esp+D4h] [ebp-100h]
  float v145; // [esp+F0h] [ebp-E4h]
  __m128 v146; // [esp+F4h] [ebp-E0h] BYREF
  __m128 v147; // [esp+104h] [ebp-D0h]
  __m128 v148; // [esp+114h] [ebp-C0h]
  __m128 v149; // [esp+124h] [ebp-B0h]
  __m128 v150; // [esp+134h] [ebp-A0h] BYREF
  __m128 v151; // [esp+144h] [ebp-90h]
  __m128 v152; // [esp+154h] [ebp-80h]
  __m128 v153; // [esp+164h] [ebp-70h] BYREF
  __m128 v154; // [esp+174h] [ebp-60h]
  __m128 v155; // [esp+184h] [ebp-50h]
  __m128 v156; // [esp+194h] [ebp-40h]
  __m128 v157; // [esp+1A4h] [ebp-30h]
  __m128 v158; // [esp+1B4h] [ebp-20h]
  __m128 v159; // [esp+1C4h] [ebp-10h]

  v141 = this;
  v1 = *(this + 6);
  v2 = *((float *)this + 0x20);
  v3 = *((_DWORD *)this + 0x21);
  v4 = _mm_sub_ps(*(this + 7), v1);
  v5 = _mm_mul_ps(v4, v4);
  v6 = _mm_shuffle_ps(v5, v5, 0xAA);
  v6.m128_f32[0] = v6.m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  v137 = v6;
  v130 = v2;
  v137.m128_i32[0] = fsqrt(v6.m128_f32[0]);
  v99 = v137.m128_f32[0];
  v7 = *((_DWORD *)this + 0x22);
  v8 = v3 >> 1;
  v9 = v137.m128_f32[0] > (double)*(float *)&SrcStr;
  v128 = v7;
  v123 = v3;
  v132 = v3 >> 1;
  v124 = 0;
  v125 = 0;
  v126 = 0x80000000;
  v144 = v1;
  if ( !v9 )
    goto LABEL_4;
  v10 = _mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0];
  v11 = _mm_shuffle_ps(v5, v5, 0xAA);
  v12 = v11;
  v12.m128_f32[0] = v11.m128_f32[0] + v10;
  v137 = v12;
  v137.m128_f32[0] = 1.0 / fsqrt(v11.m128_f32[0] + v10);
  v13 = (__m128)0x3F000000u;
  v142 = (__m128)0x3F000000u;
  v13.m128_f32[0] = 0.5 * v137.m128_f32[0];
  v14 = 3.0 - (float)((float)(v12.m128_f32[0] * v137.m128_f32[0]) * v137.m128_f32[0]);
  v15 = v13;
  v15.m128_f32[0] = (float)(0.5 * v137.m128_f32[0]) * v14;
  v16 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v4);
  v140.m128_u64[0] = 0;
  v140.m128_u64[1] = 0x3F800000;
  v17 = _mm_mul_ps(v16, v140);
  if ( fabs((float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]))) < flt_A97F54 )
  {
    v18 = _mm_shuffle_ps(v16, v16, 0xD2);
    v19 = _mm_shuffle_ps(v16, v16, 0xC9);
    v20 = _mm_sub_ps(
            _mm_mul_ps(v19, _mm_shuffle_ps(v140, v140, 0xD2)),
            _mm_mul_ps(v18, _mm_shuffle_ps(v140, v140, 0xC9)));
    v21 = _mm_mul_ps(v20, v20);
    v22 = _mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0];
    v23 = _mm_shuffle_ps(v21, v21, 0xAA);
    v24 = v23;
    v24.m128_f32[0] = v23.m128_f32[0] + v22;
    v137 = v24;
    v137.m128_f32[0] = 1.0 / fsqrt(v23.m128_f32[0] + v22);
    v25 = 3.0 - (float)((float)((float)(v23.m128_f32[0] + v22) * v137.m128_f32[0]) * v137.m128_f32[0]);
    v26 = v142;
    v1 = v144;
    v26.m128_f32[0] = (float)(v142.m128_f32[0] * v137.m128_f32[0]) * v25;
    v27 = _mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v20);
    v153 = _mm_sub_ps(_mm_mul_ps(v19, _mm_shuffle_ps(v27, v27, 0xD2)), _mm_mul_ps(v18, _mm_shuffle_ps(v27, v27, 0xC9)));
    v154 = v27;
    v155 = v16;
  }
  else
  {
LABEL_4:
    v153 = 0;
    v154 = 0;
    v155 = 0;
    v153.m128_i32[0] = 0x3F800000;
    v154.m128_i32[1] = 0x3F800000;
    v155.m128_i32[2] = 0x3F800000;
  }
  v28 = *(this + 7);
  v147.m128_f32[2] = v99 * flt_A45E4C;
  v118 = v99 * flt_A3D65C;
  v148.m128_u64[0] = 0;
  v148.m128_u64[1] = LODWORD(v118);
  v147.m128_u64[0] = 0;
  v147.m128_i32[3] = 0;
  v156 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v1, v28));
  v158 = _mm_sub_ps(v148, v147);
  v146.m128_u64[0] = 0;
  v146.m128_u64[1] = 0x3F800000;
  v129.m128_u64[0] = 0x3F800000;
  v129.m128_u64[1] = 0;
  v150.m128_u64[0] = 0xBF80000000000000uLL;
  v150.m128_u64[1] = 0;
  if ( v3 * (v7 + 2 * v8 - 1) + 2 > 0 )
    sub_8A6E40((const void **)&v124, v3 * (v7 + 2 * v8 - 1) + 2, 0x10);
  v138 = v118 + v130;
  v140.m128_u64[0] = 0;
  v140.m128_f32[2] = v138;
  v140.m128_i32[3] = 0;
  v139 = v140;
  sub_88FCC0(&v139, &v153, &v139);
  if ( v125 == (v126 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)&v124, 0x10);
  v29 = (__m128 *)&v124[0x10 * v125++];
  *v29 = v139;
  v131 = v8 - 1;
  if ( v8 - 1 >= 0 )
  {
    v119 = (float)v132;
    v149 = _mm_shuffle_ps(v129, v129, 0xC9);
    v140 = _mm_shuffle_ps(v129, v129, 0xD2);
    do
    {
      v94 = (double)v131 / v119 * flt_A3F3E0;
      sub_8B1B00(&v143, &v150, v94);
      v144 = v143;
      v144.m128_i32[3] = 0;
      v30 = _mm_mul_ps(v144, v129);
      *(float *)&v100 = v143.m128_f32[3] * v143.m128_f32[3] + v143.m128_f32[3] * v143.m128_f32[3] - fConstant_1;
      v31 = (__m128)v100;
      v135 = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
      *(float *)&v101 = v135 + v135;
      v32 = (__m128)v101;
      *(float *)&v102 = v143.m128_f32[3] + v143.m128_f32[3];
      v33 = 0.0;
      v34 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v129), _mm_mul_ps(_mm_shuffle_ps(v32, v32, 0), v144)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v102, (__m128)v102, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v144, v144, 0xC9), v140),
                  _mm_mul_ps(_mm_shuffle_ps(v144, v144, 0xD2), v149))));
      v159 = v34;
      v127 = 0.0;
      if ( v123 > 0 )
      {
        v136 = v130;
        v152 = _mm_shuffle_ps(v34, v34, 0xD2);
        v157 = _mm_shuffle_ps(v34, v34, 0xC9);
        v151 = _mm_shuffle_ps((__m128)LODWORD(v130), (__m128)LODWORD(v130), 0);
        do
        {
          v103 = (float)v123;
          v95 = (double)SLODWORD(v127) / v103 * flt_A46B14;
          sub_8B1B00(&v137, &v146, v95);
          v142 = v137;
          v142.m128_i32[3] = 0;
          v35 = _mm_mul_ps(v142, v159);
          v127 = v137.m128_f32[3] * v137.m128_f32[3] + v137.m128_f32[3] * v137.m128_f32[3] - fConstant_1;
          v36 = (__m128)LODWORD(v127);
          v107 = _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]);
          v127 = v107 + v107;
          v37 = (__m128)LODWORD(v127);
          v127 = v137.m128_f32[3] + v137.m128_f32[3];
          v139 = _mm_add_ps(
                   v148,
                   _mm_mul_ps(
                     v151,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v159),
                         _mm_mul_ps(_mm_shuffle_ps(v37, v37, 0), v142)),
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)LODWORD(v127), (__m128)LODWORD(v127), 0),
                         _mm_sub_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0xC9), v152),
                           _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0xD2), v157))))));
          sub_88FCC0(&v139, &v153, &v139);
          if ( v125 == (v126 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)&v124, 0x10);
          v38 = (__m128 *)&v124[0x10 * v125];
          ++LODWORD(v33);
          ++v125;
          *v38 = v139;
          v127 = v33;
        }
        while ( SLODWORD(v33) < v123 );
      }
      --v131;
    }
    while ( v131 >= 0 );
    v7 = v128;
  }
  v39 = v7 - 1;
  for ( LODWORD(v127) = v7 - 1; v39 > 0; v127 = *(float *)&v39 )
  {
    v40 = 0;
    v131 = 0;
    if ( v123 > 0 )
    {
      v140 = _mm_shuffle_ps(v129, v129, 0xD2);
      v149 = _mm_shuffle_ps(v129, v129, 0xC9);
      *(float *)&v108 = (double)SLODWORD(v127) / (double)v128;
      v136 = v130;
      v151 = _mm_shuffle_ps((__m128)LODWORD(v130), (__m128)LODWORD(v130), 0);
      v152 = _mm_add_ps(v147, _mm_mul_ps(_mm_shuffle_ps((__m128)v108, (__m128)v108, 0), v158));
      do
      {
        v104 = (float)v123;
        v96 = (double)v131 / v104 * flt_A46B14;
        sub_8B1B00(&v137, &v146, v96);
        v142 = v137;
        v142.m128_i32[3] = 0;
        v41 = _mm_mul_ps(v142, v129);
        *(float *)&v109 = v137.m128_f32[3] * v137.m128_f32[3] + v137.m128_f32[3] * v137.m128_f32[3] - fConstant_1;
        v42 = (__m128)v109;
        v135 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]);
        *(float *)&v110 = v135 + v135;
        v43 = (__m128)v110;
        *(float *)&v111 = v137.m128_f32[3] + v137.m128_f32[3];
        v139 = _mm_add_ps(
                 v152,
                 _mm_mul_ps(
                   v151,
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v129),
                       _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v142)),
                     _mm_mul_ps(
                       _mm_shuffle_ps((__m128)v111, (__m128)v111, 0),
                       _mm_sub_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0xC9), v140),
                         _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0xD2), v149))))));
        sub_88FCC0(&v139, &v153, &v139);
        if ( v125 == (v126 & 0x3FFFFFFF) )
          sub_8A6EE0((const void **)&v124, 0x10);
        v44 = (__m128 *)&v124[0x10 * v125];
        ++v40;
        ++v125;
        *v44 = v139;
        v131 = v40;
      }
      while ( v40 < v123 );
    }
    --v39;
  }
  v45 = 0;
  v131 = 0;
  if ( v132 > 0 )
  {
    v120 = (float)v132;
    v149 = _mm_shuffle_ps(v129, v129, 0xC9);
    v140 = _mm_shuffle_ps(v129, v129, 0xD2);
    do
    {
      v97 = (double)v131 / v120 * flt_A3721C;
      sub_8B1B00(&v137, &v150, v97);
      v142 = v137;
      v142.m128_i32[3] = 0;
      v46 = _mm_mul_ps(v142, v129);
      *(float *)&v112 = v137.m128_f32[3] * v137.m128_f32[3] + v137.m128_f32[3] * v137.m128_f32[3] - fConstant_1;
      v47 = (__m128)v112;
      v136 = _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
           + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]);
      *(float *)&v113 = v136 + v136;
      v48 = (__m128)v113;
      *(float *)&v114 = v137.m128_f32[3] + v137.m128_f32[3];
      v49 = 0.0;
      v50 = _mm_add_ps(
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v129), _mm_mul_ps(_mm_shuffle_ps(v48, v48, 0), v142)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v114, (__m128)v114, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0xC9), v140),
                  _mm_mul_ps(_mm_shuffle_ps(v142, v142, 0xD2), v149))));
      v158 = v50;
      v127 = 0.0;
      if ( v123 > 0 )
      {
        v135 = v130;
        v152 = _mm_shuffle_ps(v50, v50, 0xD2);
        v151 = _mm_shuffle_ps(v50, v50, 0xC9);
        v157 = _mm_shuffle_ps((__m128)LODWORD(v130), (__m128)LODWORD(v130), 0);
        do
        {
          v105 = (float)v123;
          v98 = (double)SLODWORD(v127) / v105 * flt_A46B14;
          sub_8B1B00(&v143, &v146, v98);
          v144 = v143;
          v144.m128_i32[3] = 0;
          v51 = _mm_mul_ps(v144, v158);
          *(float *)&v115 = v143.m128_f32[3] * v143.m128_f32[3] + v143.m128_f32[3] * v143.m128_f32[3] - fConstant_1;
          v52 = (__m128)v115;
          v145 = _mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0]);
          *(float *)&v116 = v145 + v145;
          v53 = (__m128)v116;
          *(float *)&v117 = v143.m128_f32[3] + v143.m128_f32[3];
          v139 = _mm_add_ps(
                   v147,
                   _mm_mul_ps(
                     v157,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v158),
                         _mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v144)),
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)v117, (__m128)v117, 0),
                         _mm_sub_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v144, v144, 0xC9), v152),
                           _mm_mul_ps(_mm_shuffle_ps(v144, v144, 0xD2), v151))))));
          sub_88FCC0(&v139, &v153, &v139);
          if ( v125 == (v126 & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)&v124, 0x10);
          v54 = (__m128 *)&v124[0x10 * v125];
          ++LODWORD(v49);
          ++v125;
          *v54 = v139;
          v127 = v49;
        }
        while ( SLODWORD(v49) < v123 );
      }
      v131 = ++v45;
    }
    while ( v45 < v132 );
  }
  v139.m128_f32[2] = -v138;
  v139.m128_u64[0] = 0;
  v139.m128_i32[3] = 0;
  sub_88FCC0(&v139, &v153, &v139);
  if ( v125 == (v126 & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)&v124, 0x10);
  v55 = (__m128 *)&v124[0x10 * v125++];
  *v55 = v139;
  v56 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x18, 0x24);
  v57 = 0.0;
  if ( v56 )
  {
    *v56 = 0;
    v56[1] = 0;
    v56[2] = 0x80000000;
    v56[3] = 0;
    v56[4] = 0;
    v56[5] = 0x80000000;
    v57 = *(float *)&v56;
  }
  v58 = *(_DWORD *)(LODWORD(v57) + 8);
  v59 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v61 = v58 & 0x3FFFFFFF;
  v130 = v57;
  if ( (v58 & 0x3FFFFFFF) < v125 )
  {
    if ( v58 >= 0 )
    {
      v62 = *(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C);
      if ( !v62 )
        v62 = dword_BA7D9C;
      sub_8A75D0(v62, *(_DWORD **)LODWORD(v57), 0x10 * v61, 0x14);
    }
    v63 = *(_DWORD *)(ThreadLocalStoragePointer[v59] + 0x19C);
    if ( !v63 )
      v63 = dword_BA7D9C;
    v64 = sub_8A7560(v63, 0x10 * v125, 0x14);
    v65 = *(_DWORD *)(LODWORD(v57) + 8);
    *(_DWORD *)LODWORD(v57) = v64;
    *(_DWORD *)(LODWORD(v57) + 8) = v125 | v65 & 0x40000000;
  }
  v66 = *(_OWORD **)LODWORD(v57);
  *(_DWORD *)(LODWORD(v57) + 4) = v125;
  v67 = v125;
  if ( v125 > 0 )
  {
    v68 = v124;
    do
    {
      *v66++ = *v68++;
      --v67;
    }
    while ( v67 );
  }
  v69 = 0;
  if ( *(int *)(LODWORD(v57) + 4) > 0 )
  {
    LODWORD(v138) = v141[1].m128_f32;
    v70 = 0;
    do
    {
      sub_88FCC0(
        (__m128 *)(*(_DWORD *)LODWORD(v57) + v70),
        (__m128 *)LODWORD(v138),
        (__m128 *)(*(_DWORD *)LODWORD(v57) + v70));
      ++v69;
      v70 += 0x10;
    }
    while ( v69 < *(_DWORD *)(LODWORD(v57) + 4) );
  }
  v71 = 1;
  v106 = 1;
  if ( v123 > 0 )
  {
    v72 = LODWORD(v57) + 0xC;
    v121 = v123;
    do
    {
      v129.m128_i32[0] = 0;
      v129.m128_i32[1] = v71;
      v129.m128_i32[2] = v71 % v123 + 1;
      if ( !*sub_8F3FA0(&v129, &v133, &v124) )
        v129.m128_u64[0] = (unsigned int)v71;
      if ( *(_DWORD *)(v72 + 4) == (*(_DWORD *)(v72 + 8) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)v72, 0xC);
      v73 = (_DWORD *)(*(_DWORD *)v72 + 0xC * *(_DWORD *)(v72 + 4));
      v74 = v129.m128_i32[1];
      *v73 = v129.m128_i32[0];
      v73[1] = v74;
      v73[2] = v71 % v123 + 1;
      ++v71;
      v9 = v121 == 1;
      ++*(_DWORD *)(v72 + 4);
      --v121;
    }
    while ( !v9 );
  }
  if ( v128 + 2 * v132 - 2 > 0 )
  {
    v132 = v128 + 2 * v132 - 2;
    do
    {
      if ( v123 > 0 )
      {
        v75 = LODWORD(v130) + 0xC;
        v128 = 1;
        v122 = v123;
        do
        {
          v76 = v106 + v128 - 1;
          v129.m128_i32[1] = v76 + v123;
          v129.m128_i32[0] = v76;
          v77 = v128 % v123 + v106;
          LODWORD(v138) = v77 + v123;
          v129.m128_i32[2] = v77 + v123;
          if ( !*sub_8F3FA0(&v129, &v133, &v124) )
            v129.m128_u64[0] = __PAIR64__(v76, v129.m128_u32[1]);
          if ( *(_DWORD *)(v75 + 4) == (*(_DWORD *)(v75 + 8) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)v75, 0xC);
          v78 = (_DWORD *)(*(_DWORD *)v75 + 0xC * *(_DWORD *)(v75 + 4));
          v79 = v129.m128_i32[1];
          *v78 = v129.m128_i32[0];
          v80 = v129.m128_i32[2];
          v78[1] = v79;
          v78[2] = v80;
          ++*(_DWORD *)(v75 + 4);
          v129.m128_i32[0] = v76;
          *(unsigned __int64 *)((char *)v129.m128_u64 + 4) = __PAIR64__(LODWORD(v138), v77);
          if ( !*sub_8F3FA0(&v129, &v134, &v124) )
          {
            v81 = v77;
            v77 = v76;
            v76 = v81;
          }
          if ( *(_DWORD *)(v75 + 4) == (*(_DWORD *)(v75 + 8) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)v75, 0xC);
          v82 = (int *)(*(_DWORD *)v75 + 0xC * *(_DWORD *)(v75 + 4));
          v83 = v129.m128_i32[2];
          *v82 = v76;
          v82[1] = v77;
          v82[2] = v83;
          v84 = v128 + 1;
          v9 = v122 == 1;
          ++*(_DWORD *)(v75 + 4);
          v128 = v84;
          --v122;
        }
        while ( !v9 );
      }
      v9 = v132 == 1;
      v106 += v123;
      --v132;
    }
    while ( !v9 );
  }
  if ( v123 > 0 )
  {
    v129.m128_i32[2] = v123 + v106;
    v85 = LODWORD(v130) + 0xC;
    v86 = 1;
    v128 = v123;
    do
    {
      v129.m128_i32[0] = v86 + v106 - 1;
      v87 = v106 + v86 % v123;
      v129.m128_i32[1] = v87;
      if ( !*sub_8F3FA0(&v129, &v134, &v124) )
      {
        v87 = v129.m128_i32[0];
        v129.m128_i32[0] = v106 + v86 % v123;
      }
      if ( *(_DWORD *)(v85 + 4) == (*(_DWORD *)(v85 + 8) & 0x3FFFFFFF) )
        sub_8A6EE0((const void **)v85, 0xC);
      v88 = (_DWORD *)(*(_DWORD *)v85 + 0xC * *(_DWORD *)(v85 + 4));
      v89 = v129.m128_i32[2];
      *v88 = v129.m128_i32[0];
      v88[1] = v87;
      v88[2] = v89;
      ++v86;
      v90 = v128 - 1;
      v9 = v128 == 1;
      ++*(_DWORD *)(v85 + 4);
      v128 = v90;
    }
    while ( !v9 );
  }
  result = v126;
  v92 = v126 < 0;
  v141[5].m128_f32[0] = v130;
  if ( !v92 )
  {
    v93 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v93 )
      v93 = dword_BA7D9C;
    return sub_8A75D0(v93, v124, 0x10 * result, 0x14);
  }
  return result;
}
