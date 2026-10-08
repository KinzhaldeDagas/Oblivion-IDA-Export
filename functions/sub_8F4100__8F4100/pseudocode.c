int __thiscall sub_8F4100(__m128 *this)
{
  __m128 v1; // xmm6
  __int64 v2; // rax
  __m128 v3; // xmm2
  __m128 v4; // xmm0
  __m128 v5; // xmm1
  int v6; // edi
  int v7; // esi
  bool v8; // zf
  float v9; // xmm1_4
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  float v13; // xmm4_4
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  float v21; // xmm6_4
  __m128 v22; // xmm7
  __m128 v23; // xmm1
  float v24; // xmm5_4
  __m128 v25; // xmm1
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 *v28; // eax
  __m128 v29; // xmm0
  __m128 v30; // xmm2
  __m128 v31; // xmm0
  float v32; // esi
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  __m128 v35; // xmm2
  __m128 v36; // xmm0
  __m128 *v37; // eax
  int v38; // ebx
  int v39; // esi
  __m128 v40; // xmm0
  __m128 v41; // xmm2
  __m128 v42; // xmm0
  __m128 *v43; // eax
  int v44; // ebx
  __m128 v45; // xmm0
  __m128 v46; // xmm2
  __m128 v47; // xmm0
  float v48; // esi
  __m128 v49; // xmm0
  __m128 v50; // xmm0
  __m128 v51; // xmm2
  __m128 v52; // xmm0
  __m128 *v53; // eax
  __m128 *v54; // eax
  _DWORD *v55; // eax
  float v56; // esi
  int v57; // ecx
  int v58; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v60; // eax
  int v61; // ecx
  int v62; // eax
  _DWORD *v63; // eax
  int v64; // edx
  _OWORD *v65; // ecx
  int v66; // edx
  _OWORD *v67; // eax
  int v68; // ebx
  int v69; // edi
  __int32 v70; // edi
  int v71; // esi
  _DWORD *v72; // eax
  __int32 v73; // edx
  int v74; // esi
  int v75; // edi
  int v76; // ebx
  _DWORD *v77; // edx
  __int32 v78; // ecx
  __int32 v79; // eax
  int v80; // eax
  int *v81; // eax
  __int32 v82; // ecx
  int v83; // ecx
  int v84; // esi
  int v85; // ebx
  __int32 v86; // edi
  _DWORD *v87; // ecx
  __int32 v88; // eax
  int v89; // eax
  int result; // eax
  bool v91; // sf
  int v92; // ecx
  float v93; // [esp+0h] [ebp-1D4h]
  float v94; // [esp+0h] [ebp-1D4h]
  float v95; // [esp+0h] [ebp-1D4h]
  float v96; // [esp+0h] [ebp-1D4h]
  float v97; // [esp+0h] [ebp-1D4h]
  float v98; // [esp+10h] [ebp-1C4h]
  unsigned int v99; // [esp+10h] [ebp-1C4h]
  unsigned int v100; // [esp+10h] [ebp-1C4h]
  unsigned int v101; // [esp+10h] [ebp-1C4h]
  float v102; // [esp+10h] [ebp-1C4h]
  float v103; // [esp+10h] [ebp-1C4h]
  float v104; // [esp+10h] [ebp-1C4h]
  int v105; // [esp+10h] [ebp-1C4h]
  float v106; // [esp+14h] [ebp-1C0h]
  unsigned int v107; // [esp+14h] [ebp-1C0h]
  unsigned int v108; // [esp+14h] [ebp-1C0h]
  unsigned int v109; // [esp+14h] [ebp-1C0h]
  unsigned int v110; // [esp+14h] [ebp-1C0h]
  unsigned int v111; // [esp+14h] [ebp-1C0h]
  unsigned int v112; // [esp+14h] [ebp-1C0h]
  unsigned int v113; // [esp+14h] [ebp-1C0h]
  unsigned int v114; // [esp+14h] [ebp-1C0h]
  unsigned int v115; // [esp+14h] [ebp-1C0h]
  unsigned int v116; // [esp+14h] [ebp-1C0h]
  float v117; // [esp+18h] [ebp-1BCh]
  float v118; // [esp+18h] [ebp-1BCh]
  float v119; // [esp+18h] [ebp-1BCh]
  int v120; // [esp+18h] [ebp-1BCh]
  int v121; // [esp+18h] [ebp-1BCh]
  int v122; // [esp+1Ch] [ebp-1B8h]
  char *v123; // [esp+20h] [ebp-1B4h] BYREF
  int v124; // [esp+24h] [ebp-1B0h]
  int v125; // [esp+28h] [ebp-1ACh]
  float v126; // [esp+2Ch] [ebp-1A8h]
  int v127; // [esp+30h] [ebp-1A4h]
  __m128 v128; // [esp+34h] [ebp-1A0h] BYREF
  float v129; // [esp+4Ch] [ebp-188h]
  int v130; // [esp+50h] [ebp-184h]
  int v131; // [esp+54h] [ebp-180h]
  bool v132; // [esp+5Ah] [ebp-17Ah] BYREF
  bool v133; // [esp+5Bh] [ebp-179h] BYREF
  float v134; // [esp+5Ch] [ebp-178h]
  float v135; // [esp+60h] [ebp-174h]
  __m128 v136; // [esp+64h] [ebp-170h] BYREF
  float v137; // [esp+80h] [ebp-154h]
  __m128 v138; // [esp+84h] [ebp-150h] BYREF
  __m128 v139; // [esp+94h] [ebp-140h]
  __m128 *v140; // [esp+B0h] [ebp-124h]
  __m128 v141; // [esp+B4h] [ebp-120h]
  __m128 v142; // [esp+C4h] [ebp-110h] BYREF
  __m128 v143; // [esp+D4h] [ebp-100h]
  float v144; // [esp+F0h] [ebp-E4h]
  __m128 v145; // [esp+F4h] [ebp-E0h] BYREF
  __m128 v146; // [esp+104h] [ebp-D0h]
  __m128 v147; // [esp+114h] [ebp-C0h]
  __m128 v148; // [esp+124h] [ebp-B0h]
  __m128 v149; // [esp+134h] [ebp-A0h] BYREF
  __m128 v150; // [esp+144h] [ebp-90h]
  __m128 v151; // [esp+154h] [ebp-80h]
  __m128 v152; // [esp+164h] [ebp-70h] BYREF
  __m128 v153; // [esp+174h] [ebp-60h]
  __m128 v154; // [esp+184h] [ebp-50h]
  __m128 v155; // [esp+194h] [ebp-40h]
  __m128 v156; // [esp+1A4h] [ebp-30h]
  __m128 v157; // [esp+1B4h] [ebp-20h]
  __m128 v158; // [esp+1C4h] [ebp-10h]

  v140 = this; /*0x8f410f*/
  v1 = *(this + 6); /*0x8f4116*/
  v2 = *((_QWORD *)this + 0x10); /*0x8f411e*/
  v3 = _mm_sub_ps(*(this + 7), v1); /*0x8f412a*/
  v4 = _mm_mul_ps(v3, v3); /*0x8f4130*/
  v5 = _mm_shuffle_ps(v4, v4, 0xAA); /*0x8f4144*/
  v5.m128_f32[0] = v5.m128_f32[0] + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]); /*0x8f4148*/
  v136 = v5; /*0x8f414c*/
  v129 = *(float *)&v2; /*0x8f4151*/
  v136.m128_i32[0] = fsqrt(v5.m128_f32[0]); /*0x8f415d*/
  v98 = v136.m128_f32[0]; /*0x8f4168*/
  v6 = *((_DWORD *)this + 0x22); /*0x8f417c*/
  v7 = SHIDWORD(v2) >> 1; /*0x8f4182*/
  v8 = v136.m128_f32[0] > (double)*(float *)&SrcStr; /*0x8f4184*/
  v127 = v6; /*0x8f4187*/
  v122 = HIDWORD(v2); /*0x8f418b*/
  v131 = SHIDWORD(v2) >> 1; /*0x8f418f*/
  v123 = 0; /*0x8f4193*/
  v124 = 0; /*0x8f4197*/
  v125 = 0x80000000; /*0x8f419b*/
  v143 = v1; /*0x8f41a3*/
  if ( !v8 ) /*0x8f41ab*/
    goto LABEL_4; /*0x8f41ab*/
  v9 = _mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]; /*0x8f41b8*/
  v10 = _mm_shuffle_ps(v4, v4, 0xAA); /*0x8f41bf*/
  v11 = v10; /*0x8f41c3*/
  v11.m128_f32[0] = v10.m128_f32[0] + v9; /*0x8f41c6*/
  v136 = v11; /*0x8f41ca*/
  v136.m128_f32[0] = 1.0 / fsqrt(v10.m128_f32[0] + v9); /*0x8f41d3*/
  v12 = (__m128)0x3F000000u; /*0x8f41fc*/
  v141 = (__m128)0x3F000000u; /*0x8f4202*/
  v12.m128_f32[0] = 0.5 * v136.m128_f32[0]; /*0x8f420a*/
  v13 = 3.0 - (float)((float)(v11.m128_f32[0] * v136.m128_f32[0]) * v136.m128_f32[0]); /*0x8f4211*/
  v14 = v12; /*0x8f4215*/
  v14.m128_f32[0] = (float)(0.5 * v136.m128_f32[0]) * v13; /*0x8f4218*/
  v15 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v3); /*0x8f4226*/
  v139.m128_u64[0] = 0; /*0x8f4229*/
  v139.m128_u64[1] = 0x3F800000; /*0x8f4237*/
  v16 = _mm_mul_ps(v15, v139); /*0x8f4254*/
  if ( fabs((float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x8f4286*/
                  + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]))) < flt_A97F54 )
  {
    v17 = _mm_shuffle_ps(v15, v15, 0xD2); /*0x8f4296*/
    v18 = _mm_shuffle_ps(v15, v15, 0xC9); /*0x8f42aa*/
    v19 = _mm_sub_ps( /*0x8f42b4*/
            _mm_mul_ps(v18, _mm_shuffle_ps(v139, v139, 0xD2)),
            _mm_mul_ps(v17, _mm_shuffle_ps(v139, v139, 0xC9)));
    v20 = _mm_mul_ps(v19, v19); /*0x8f42ba*/
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]; /*0x8f42c4*/
    v22 = _mm_shuffle_ps(v20, v20, 0xAA); /*0x8f42cb*/
    v23 = v22; /*0x8f42cf*/
    v23.m128_f32[0] = v22.m128_f32[0] + v21; /*0x8f42d2*/
    v136 = v23; /*0x8f42d6*/
    v136.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21); /*0x8f42df*/
    v24 = 3.0 - (float)((float)((float)(v22.m128_f32[0] + v21) * v136.m128_f32[0]) * v136.m128_f32[0]); /*0x8f42f2*/
    v25 = v141; /*0x8f42f6*/
    v1 = v143; /*0x8f4302*/
    v25.m128_f32[0] = (float)(v141.m128_f32[0] * v136.m128_f32[0]) * v24; /*0x8f430a*/
    v26 = _mm_mul_ps(_mm_shuffle_ps(v25, v25, 0), v19); /*0x8f4318*/
    v152 = _mm_sub_ps(_mm_mul_ps(v18, _mm_shuffle_ps(v26, v26, 0xD2)), _mm_mul_ps(v17, _mm_shuffle_ps(v26, v26, 0xC9))); /*0x8f4332*/
    v153 = v26; /*0x8f433a*/
    v154 = v15; /*0x8f4342*/
  }
  else
  {
LABEL_4:
    v152 = 0; /*0x8f434f*/
    v153 = 0; /*0x8f4357*/
    v154 = 0; /*0x8f435f*/
    v152.m128_i32[0] = 0x3F800000; /*0x8f4367*/
    v153.m128_i32[1] = 0x3F800000; /*0x8f4372*/
    v154.m128_i32[2] = 0x3F800000; /*0x8f437d*/
  }
  v27 = *(this + 7); /*0x8f438c*/
  v146.m128_f32[2] = v98 * flt_A45E4C; /*0x8f439d*/
  v117 = v98 * kHeadBodyNormalMatchRadius; /*0x8f43bf*/
  v147.m128_u64[0] = 0; /*0x8f43ce*/
  v147.m128_u64[1] = LODWORD(v117); /*0x8f43e4*/
  v146.m128_u64[0] = 0; /*0x8f4403*/
  v146.m128_i32[3] = 0; /*0x8f4419*/
  v155 = _mm_mul_ps(_mm_shuffle_ps((__m128)0x3F000000u, (__m128)0x3F000000u, 0), _mm_add_ps(v1, v27)); /*0x8f442f*/
  v157 = _mm_sub_ps(v147, v146); /*0x8f4437*/
  v145.m128_u64[0] = 0; /*0x8f443f*/
  v145.m128_u64[1] = 0x3F800000; /*0x8f4455*/
  v128.m128_u64[0] = 0x3F800000; /*0x8f446b*/
  v128.m128_u64[1] = 0; /*0x8f447b*/
  v149.m128_u64[0] = 0xBF80000000000000uLL; /*0x8f448b*/
  v149.m128_u64[1] = 0; /*0x8f44a1*/
  if ( HIDWORD(v2) * (v6 + 2 * v7 - 1) + 2 > 0 ) /*0x8f44b7*/
    sub_8A6E40((const void **)&v123, HIDWORD(v2) * (v6 + 2 * v7 - 1) + 2, 0x10); /*0x8f44c1*/
  v137 = v117 + v129; /*0x8f44e1*/
  v139.m128_u64[0] = 0; /*0x8f44e8*/
  v139.m128_f32[2] = v137; /*0x8f44f3*/
  v139.m128_i32[3] = 0; /*0x8f4505*/
  v138 = v139; /*0x8f451f*/
  hkTransform_TransformPosition(&v138, &v152, &v138); /*0x8f4527*/
  if ( v124 == (v125 & 0x3FFFFFFF) ) /*0x8f453c*/
    sub_8A6EE0((const void **)&v123, 0x10); /*0x8f4545*/
  v28 = (__m128 *)&v123[0x10 * v124++]; /*0x8f4562*/
  *v28 = v138; /*0x8f456c*/
  v130 = v7 - 1; /*0x8f456f*/
  if ( v7 - 1 >= 0 ) /*0x8f4573*/
  {
    v118 = (float)v131; /*0x8f458d*/
    v148 = _mm_shuffle_ps(v128, v128, 0xC9); /*0x8f4591*/
    v139 = _mm_shuffle_ps(v128, v128, 0xD2); /*0x8f4599*/
    do /*0x8f4879*/
    {
      v93 = (double)v130 / v118 * flt_A3F3E0; /*0x8f45b7*/
      hkQuaternion_SetAxisAngleScaled(&v142, &v149, v93); /*0x8f45c2*/
      v143 = v142; /*0x8f45e2*/
      v143.m128_i32[3] = 0; /*0x8f45f0*/
      v29 = _mm_mul_ps(v143, v128); /*0x8f460c*/
      *(float *)&v99 = v142.m128_f32[3] * v142.m128_f32[3] + v142.m128_f32[3] * v142.m128_f32[3] - fConstant_1; /*0x8f4616*/
      v30 = (__m128)v99; /*0x8f461a*/
      v134 = _mm_shuffle_ps(v29, v29, 0xAA).m128_f32[0] /*0x8f4633*/
           + (float)(_mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]);
      *(float *)&v100 = v134 + v134; /*0x8f464c*/
      v31 = (__m128)v100; /*0x8f4650*/
      *(float *)&v101 = v142.m128_f32[3] + v142.m128_f32[3]; /*0x8f4671*/
      v32 = 0.0; /*0x8f4696*/
      v33 = _mm_add_ps( /*0x8f46a0*/
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), v128), _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v143)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v101, (__m128)v101, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v143, v143, 0xC9), v139),
                  _mm_mul_ps(_mm_shuffle_ps(v143, v143, 0xD2), v148))));
      v158 = v33; /*0x8f46a3*/
      v126 = 0.0; /*0x8f46ab*/
      if ( v122 > 0 ) /*0x8f46af*/
      {
        v135 = v129; /*0x8f46d0*/
        v151 = _mm_shuffle_ps(v33, v33, 0xD2); /*0x8f46da*/
        v156 = _mm_shuffle_ps(v33, v33, 0xC9); /*0x8f46e9*/
        v150 = _mm_shuffle_ps((__m128)LODWORD(v129), (__m128)LODWORD(v129), 0); /*0x8f46f1*/
        do /*0x8f486f*/
        {
          v102 = (float)v122; /*0x8f46c8*/
          v94 = (double)SLODWORD(v126) / v102 * flt_A46B14; /*0x8f4716*/
          hkQuaternion_SetAxisAngleScaled(&v136, &v145, v94); /*0x8f471e*/
          v141 = v136; /*0x8f4738*/
          v141.m128_i32[3] = 0; /*0x8f4742*/
          v34 = _mm_mul_ps(v141, v158); /*0x8f475e*/
          v126 = v136.m128_f32[3] * v136.m128_f32[3] + v136.m128_f32[3] * v136.m128_f32[3] - fConstant_1; /*0x8f476c*/
          v35 = (__m128)LODWORD(v126); /*0x8f4770*/
          v106 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0] /*0x8f4785*/
               + (float)(_mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]);
          v126 = v106 + v106; /*0x8f479e*/
          v36 = (__m128)LODWORD(v126); /*0x8f47a9*/
          v126 = v136.m128_f32[3] + v136.m128_f32[3]; /*0x8f47c0*/
          v138 = _mm_add_ps( /*0x8f481b*/
                   v147,
                   _mm_mul_ps(
                     v150,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v158),
                         _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v141)),
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)LODWORD(v126), (__m128)LODWORD(v126), 0),
                         _mm_sub_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v141, v141, 0xC9), v151),
                           _mm_mul_ps(_mm_shuffle_ps(v141, v141, 0xD2), v156))))));
          hkTransform_TransformPosition(&v138, &v152, &v138); /*0x8f4823*/
          if ( v124 == (v125 & 0x3FFFFFFF) ) /*0x8f4838*/
            sub_8A6EE0((const void **)&v123, 0x10); /*0x8f4841*/
          v37 = (__m128 *)&v123[0x10 * v124]; /*0x8f485e*/
          ++LODWORD(v32); /*0x8f4861*/
          ++v124; /*0x8f4864*/
          *v37 = v138; /*0x8f4868*/
          v126 = v32; /*0x8f486b*/
        }
        while ( SLODWORD(v32) < v122 ); /*0x8f486f*/
      }
      --v130; /*0x8f4875*/
    }
    while ( v130 >= 0 ); /*0x8f4879*/
    v6 = v127; /*0x8f487f*/
  }
  v38 = v6 - 1; /*0x8f4883*/
  for ( LODWORD(v126) = v6 - 1; v38 > 0; v126 = *(float *)&v38 ) /*0x8f488c*/
  {
    v39 = 0; /*0x8f4896*/
    v130 = 0; /*0x8f489a*/
    if ( v122 > 0 ) /*0x8f489e*/
    {
      v139 = _mm_shuffle_ps(v128, v128, 0xD2); /*0x8f48c4*/
      v148 = _mm_shuffle_ps(v128, v128, 0xC9); /*0x8f48cc*/
      *(float *)&v107 = (double)SLODWORD(v126) / (double)v127; /*0x8f48da*/
      v135 = v129; /*0x8f48e4*/
      v150 = _mm_shuffle_ps((__m128)LODWORD(v129), (__m128)LODWORD(v129), 0); /*0x8f48f5*/
      v151 = _mm_add_ps(v146, _mm_mul_ps(_mm_shuffle_ps((__m128)v107, (__m128)v107, 0), v157)); /*0x8f491a*/
      do /*0x8f4a8d*/
      {
        v103 = (float)v122; /*0x8f48b4*/
        v95 = (double)v130 / v103 * flt_A46B14; /*0x8f493c*/
        hkQuaternion_SetAxisAngleScaled(&v136, &v145, v95); /*0x8f4940*/
        v141 = v136; /*0x8f4957*/
        v141.m128_i32[3] = 0; /*0x8f4961*/
        v40 = _mm_mul_ps(v141, v128); /*0x8f497d*/
        *(float *)&v108 = v136.m128_f32[3] * v136.m128_f32[3] + v136.m128_f32[3] * v136.m128_f32[3] - fConstant_1; /*0x8f498b*/
        v41 = (__m128)v108; /*0x8f498f*/
        v134 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0] /*0x8f49a4*/
             + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
        *(float *)&v109 = v134 + v134; /*0x8f49bd*/
        v42 = (__m128)v109; /*0x8f49c1*/
        *(float *)&v110 = v136.m128_f32[3] + v136.m128_f32[3]; /*0x8f49df*/
        v138 = _mm_add_ps( /*0x8f4a3a*/
                 v151,
                 _mm_mul_ps(
                   v150,
                   _mm_add_ps(
                     _mm_add_ps(
                       _mm_mul_ps(_mm_shuffle_ps(v41, v41, 0), v128),
                       _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v141)),
                     _mm_mul_ps(
                       _mm_shuffle_ps((__m128)v110, (__m128)v110, 0),
                       _mm_sub_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v141, v141, 0xC9), v139),
                         _mm_mul_ps(_mm_shuffle_ps(v141, v141, 0xD2), v148))))));
        hkTransform_TransformPosition(&v138, &v152, &v138); /*0x8f4a42*/
        if ( v124 == (v125 & 0x3FFFFFFF) ) /*0x8f4a56*/
          sub_8A6EE0((const void **)&v123, 0x10); /*0x8f4a5f*/
        v43 = (__m128 *)&v123[0x10 * v124]; /*0x8f4a7c*/
        ++v39; /*0x8f4a7f*/
        ++v124; /*0x8f4a82*/
        *v43 = v138; /*0x8f4a86*/
        v130 = v39; /*0x8f4a89*/
      }
      while ( v39 < v122 ); /*0x8f4a8d*/
    }
    --v38; /*0x8f4a93*/
  }
  v44 = 0; /*0x8f4aa4*/
  v130 = 0; /*0x8f4aa8*/
  if ( v131 > 0 ) /*0x8f4aac*/
  {
    v119 = (float)v131; /*0x8f4ac6*/
    v148 = _mm_shuffle_ps(v128, v128, 0xC9); /*0x8f4aca*/
    v139 = _mm_shuffle_ps(v128, v128, 0xD2); /*0x8f4ad2*/
    do /*0x8f4dc4*/
    {
      v96 = (double)v130 / v119 * flt_A3721C; /*0x8f4afa*/
      hkQuaternion_SetAxisAngleScaled(&v136, &v149, v96); /*0x8f4afe*/
      v141 = v136; /*0x8f4b15*/
      v141.m128_i32[3] = 0; /*0x8f4b1f*/
      v45 = _mm_mul_ps(v141, v128); /*0x8f4b3b*/
      *(float *)&v111 = v136.m128_f32[3] * v136.m128_f32[3] + v136.m128_f32[3] * v136.m128_f32[3] - fConstant_1; /*0x8f4b49*/
      v46 = (__m128)v111; /*0x8f4b4d*/
      v135 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0] /*0x8f4b62*/
           + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
      *(float *)&v112 = v135 + v135; /*0x8f4b7f*/
      v47 = (__m128)v112; /*0x8f4b87*/
      *(float *)&v113 = v136.m128_f32[3] + v136.m128_f32[3]; /*0x8f4ba1*/
      v48 = 0.0; /*0x8f4bc6*/
      v49 = _mm_add_ps( /*0x8f4bd0*/
              _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v128), _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), v141)),
              _mm_mul_ps(
                _mm_shuffle_ps((__m128)v113, (__m128)v113, 0),
                _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v141, v141, 0xC9), v139),
                  _mm_mul_ps(_mm_shuffle_ps(v141, v141, 0xD2), v148))));
      v157 = v49; /*0x8f4bd3*/
      v126 = 0.0; /*0x8f4bdb*/
      if ( v122 > 0 ) /*0x8f4bdf*/
      {
        v134 = v129; /*0x8f4bfc*/
        v151 = _mm_shuffle_ps(v49, v49, 0xD2); /*0x8f4c06*/
        v150 = _mm_shuffle_ps(v49, v49, 0xC9); /*0x8f4c15*/
        v156 = _mm_shuffle_ps((__m128)LODWORD(v129), (__m128)LODWORD(v129), 0); /*0x8f4c1d*/
        do /*0x8f4db3*/
        {
          v104 = (float)v122; /*0x8f4bf8*/
          v97 = (double)SLODWORD(v126) / v104 * flt_A46B14; /*0x8f4c4d*/
          hkQuaternion_SetAxisAngleScaled(&v142, &v145, v97); /*0x8f4c51*/
          v143 = v142; /*0x8f4c74*/
          v143.m128_i32[3] = 0; /*0x8f4c7e*/
          v50 = _mm_mul_ps(v143, v157); /*0x8f4c9a*/
          *(float *)&v114 = v142.m128_f32[3] * v142.m128_f32[3] + v142.m128_f32[3] * v142.m128_f32[3] - fConstant_1; /*0x8f4ca8*/
          v51 = (__m128)v114; /*0x8f4cac*/
          v144 = _mm_shuffle_ps(v50, v50, 0xAA).m128_f32[0] /*0x8f4cc4*/
               + (float)(_mm_shuffle_ps(v50, v50, 0x55).m128_f32[0] + v50.m128_f32[0]);
          *(float *)&v115 = v144 + v144; /*0x8f4ce0*/
          v52 = (__m128)v115; /*0x8f4ce4*/
          *(float *)&v116 = v142.m128_f32[3] + v142.m128_f32[3]; /*0x8f4d05*/
          v138 = _mm_add_ps( /*0x8f4d60*/
                   v146,
                   _mm_mul_ps(
                     v156,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v51, v51, 0), v157),
                         _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v143)),
                       _mm_mul_ps(
                         _mm_shuffle_ps((__m128)v116, (__m128)v116, 0),
                         _mm_sub_ps(
                           _mm_mul_ps(_mm_shuffle_ps(v143, v143, 0xC9), v151),
                           _mm_mul_ps(_mm_shuffle_ps(v143, v143, 0xD2), v150))))));
          hkTransform_TransformPosition(&v138, &v152, &v138); /*0x8f4d68*/
          if ( v124 == (v125 & 0x3FFFFFFF) ) /*0x8f4d7c*/
            sub_8A6EE0((const void **)&v123, 0x10); /*0x8f4d85*/
          v53 = (__m128 *)&v123[0x10 * v124]; /*0x8f4da2*/
          ++LODWORD(v48); /*0x8f4da5*/
          ++v124; /*0x8f4da8*/
          *v53 = v138; /*0x8f4dac*/
          v126 = v48; /*0x8f4daf*/
        }
        while ( SLODWORD(v48) < v122 ); /*0x8f4db3*/
      }
      v130 = ++v44; /*0x8f4dc0*/
    }
    while ( v44 < v131 ); /*0x8f4dc4*/
  }
  v138.m128_f32[2] = -v137; /*0x8f4ddf*/
  v138.m128_u64[0] = 0; /*0x8f4dee*/
  v138.m128_i32[3] = 0; /*0x8f4e04*/
  hkTransform_TransformPosition(&v138, &v152, &v138); /*0x8f4e0f*/
  if ( v124 == (v125 & 0x3FFFFFFF) ) /*0x8f4e24*/
    sub_8A6EE0((const void **)&v123, 0x10); /*0x8f4e2d*/
  v54 = (__m128 *)&v123[0x10 * v124++]; /*0x8f4e4a*/
  *v54 = v138; /*0x8f4e51*/
  v55 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x8f4e60*/
  v56 = 0.0; /*0x8f4e63*/
  if ( v55 ) /*0x8f4e67*/
  {
    *v55 = 0; /*0x8f4e69*/
    v55[1] = 0; /*0x8f4e6b*/
    v55[2] = 0x80000000; /*0x8f4e73*/
    v55[3] = 0; /*0x8f4e76*/
    v55[4] = 0; /*0x8f4e79*/
    v55[5] = 0x80000000; /*0x8f4e7c*/
    v56 = *(float *)&v55; /*0x8f4e7f*/
  }
  v57 = *(_DWORD *)(LODWORD(v56) + 8); /*0x8f4e81*/
  v58 = MEMORY[0xBA9DE4]; /*0x8f4e88*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f4e8e*/
  v60 = v57 & 0x3FFFFFFF; /*0x8f4e97*/
  v129 = v56; /*0x8f4e9e*/
  if ( (v57 & 0x3FFFFFFF) < v124 ) /*0x8f4ea2*/
  {
    if ( v57 >= 0 ) /*0x8f4ea6*/
    {
      v61 = *(_DWORD *)(ThreadLocalStoragePointer[v58] + 0x19C); /*0x8f4eab*/
      if ( !v61 ) /*0x8f4eb3*/
        v61 = unk_BA7D9C; /*0x8f4eb5*/
      sub_8A75D0(v61, *(_DWORD **)LODWORD(v56), 0x10 * v60, 0x14); /*0x8f4ec4*/
    }
    v62 = *(_DWORD *)(ThreadLocalStoragePointer[v58] + 0x19C); /*0x8f4ecc*/
    if ( !v62 ) /*0x8f4ed4*/
      v62 = unk_BA7D9C; /*0x8f4ed6*/
    v63 = sub_8A7560(v62, 0x10 * v124, 0x14); /*0x8f4ee7*/
    v64 = *(_DWORD *)(LODWORD(v56) + 8); /*0x8f4eec*/
    *(_DWORD *)LODWORD(v56) = v63; /*0x8f4eef*/
    *(_DWORD *)(LODWORD(v56) + 8) = v124 | v64 & 0x40000000; /*0x8f4efd*/
  }
  v65 = *(_OWORD **)LODWORD(v56); /*0x8f4f04*/
  *(_DWORD *)(LODWORD(v56) + 4) = v124; /*0x8f4f06*/
  v66 = v124; /*0x8f4f09*/
  if ( v124 > 0 ) /*0x8f4f0f*/
  {
    v67 = v123; /*0x8f4f11*/
    do /*0x8f4f22*/
    {
      *v65++ = *v67++; /*0x8f4f18*/
      --v66; /*0x8f4f21*/
    }
    while ( v66 ); /*0x8f4f22*/
  }
  v68 = 0; /*0x8f4f27*/
  if ( *(int *)(LODWORD(v56) + 4) > 0 ) /*0x8f4f2b*/
  {
    LODWORD(v137) = v140[1].m128_f32; /*0x8f4f37*/
    v69 = 0; /*0x8f4f3b*/
    do /*0x8f4f59*/
    {
      hkTransform_TransformPosition( /*0x8f4f4b*/
        (__m128 *)(*(_DWORD *)LODWORD(v56) + v69),
        (__m128 *)LODWORD(v137),
        (__m128 *)(*(_DWORD *)LODWORD(v56) + v69));
      ++v68; /*0x8f4f53*/
      v69 += 0x10; /*0x8f4f54*/
    }
    while ( v68 < *(_DWORD *)(LODWORD(v56) + 4) ); /*0x8f4f59*/
  }
  v70 = 1; /*0x8f4f61*/
  v105 = 1; /*0x8f4f66*/
  if ( v122 > 0 ) /*0x8f4f6a*/
  {
    v71 = LODWORD(v56) + 0xC; /*0x8f4f72*/
    v120 = v122; /*0x8f4f75*/
    do /*0x8f5007*/
    {
      v128.m128_i32[0] = 0; /*0x8f4f8b*/
      v128.m128_i32[1] = v70; /*0x8f4f93*/
      v128.m128_i32[2] = v70 % v122 + 1; /*0x8f4fa3*/
      if ( !*sub_8F3FA0(&v128, &v132, &v123) ) /*0x8f4fac*/
        v128.m128_u64[0] = (unsigned int)v70; /*0x8f4fbd*/
      if ( *(_DWORD *)(v71 + 4) == (*(_DWORD *)(v71 + 8) & 0x3FFFFFFF) ) /*0x8f4fce*/
        sub_8A6EE0((const void **)v71, 0xC); /*0x8f4fd3*/
      v72 = (_DWORD *)(*(_DWORD *)v71 + 0xC * *(_DWORD *)(v71 + 4)); /*0x8f4fe3*/
      v73 = v128.m128_i32[1]; /*0x8f4fea*/
      *v72 = v128.m128_i32[0]; /*0x8f4fee*/
      v72[1] = v73; /*0x8f4ff0*/
      v72[2] = v70 % v122 + 1; /*0x8f4ff3*/
      ++v70; /*0x8f4ffe*/
      v8 = v120 == 1; /*0x8f4fff*/
      ++*(_DWORD *)(v71 + 4); /*0x8f5000*/
      --v120; /*0x8f5003*/
    }
    while ( !v8 ); /*0x8f5007*/
  }
  if ( v127 + 2 * v131 - 2 > 0 ) /*0x8f501b*/
  {
    v131 = v127 + 2 * v131 - 2; /*0x8f5021*/
    do /*0x8f517a*/
    {
      if ( v122 > 0 ) /*0x8f5036*/
      {
        v74 = LODWORD(v129) + 0xC; /*0x8f5042*/
        v127 = 1; /*0x8f5045*/
        v121 = v122; /*0x8f504d*/
        do /*0x8f515d*/
        {
          v75 = v105 + v127 - 1; /*0x8f505d*/
          v128.m128_i32[1] = v75 + v122; /*0x8f5064*/
          v128.m128_i32[0] = v75; /*0x8f506b*/
          v76 = v127 % v122 + v105; /*0x8f506f*/
          LODWORD(v137) = v76 + v122; /*0x8f5074*/
          v128.m128_i32[2] = v76 + v122; /*0x8f5078*/
          if ( !*sub_8F3FA0(&v128, &v132, &v123) ) /*0x8f508e*/
            v128.m128_u64[0] = __PAIR64__(v75, v128.m128_u32[1]); /*0x8f50a1*/
          if ( *(_DWORD *)(v74 + 4) == (*(_DWORD *)(v74 + 8) & 0x3FFFFFFF) ) /*0x8f50b3*/
            sub_8A6EE0((const void **)v74, 0xC); /*0x8f50b8*/
          v77 = (_DWORD *)(*(_DWORD *)v74 + 0xC * *(_DWORD *)(v74 + 4)); /*0x8f50c8*/
          v78 = v128.m128_i32[1]; /*0x8f50cf*/
          *v77 = v128.m128_i32[0]; /*0x8f50d3*/
          v79 = v128.m128_i32[2]; /*0x8f50d5*/
          v77[1] = v78; /*0x8f50d9*/
          v77[2] = v79; /*0x8f50dc*/
          ++*(_DWORD *)(v74 + 4); /*0x8f50df*/
          v128.m128_i32[0] = v75; /*0x8f50f7*/
          *(unsigned __int64 *)((char *)v128.m128_u64 + 4) = __PAIR64__(LODWORD(v137), v76); /*0x8f50fb*/
          if ( !*sub_8F3FA0(&v128, &v133, &v123) ) /*0x8f5104*/
          {
            v80 = v76; /*0x8f510d*/
            v76 = v75; /*0x8f510f*/
            v75 = v80; /*0x8f5111*/
          }
          if ( *(_DWORD *)(v74 + 4) == (*(_DWORD *)(v74 + 8) & 0x3FFFFFFF) ) /*0x8f5120*/
            sub_8A6EE0((const void **)v74, 0xC); /*0x8f5125*/
          v81 = (int *)(*(_DWORD *)v74 + 0xC * *(_DWORD *)(v74 + 4)); /*0x8f5135*/
          v82 = v128.m128_i32[2]; /*0x8f5138*/
          *v81 = v75; /*0x8f513c*/
          v81[1] = v76; /*0x8f513e*/
          v81[2] = v82; /*0x8f5141*/
          v83 = v127 + 1; /*0x8f5150*/
          v8 = v121 == 1; /*0x8f5151*/
          ++*(_DWORD *)(v74 + 4); /*0x8f5152*/
          v127 = v83; /*0x8f5155*/
          --v121; /*0x8f5159*/
        }
        while ( !v8 ); /*0x8f515d*/
      }
      v8 = v131 == 1; /*0x8f5171*/
      v105 += v122; /*0x8f5172*/
      --v131; /*0x8f5176*/
    }
    while ( !v8 ); /*0x8f517a*/
  }
  if ( v122 > 0 ) /*0x8f5186*/
  {
    v128.m128_i32[2] = v122 + v105; /*0x8f5196*/
    v84 = LODWORD(v129) + 0xC; /*0x8f519a*/
    v85 = 1; /*0x8f519d*/
    v127 = v122; /*0x8f51a2*/
    do /*0x8f5237*/
    {
      v128.m128_i32[0] = v85 + v105 - 1; /*0x8f51b8*/
      v86 = v105 + v85 % v122; /*0x8f51ca*/
      v128.m128_i32[1] = v86; /*0x8f51d4*/
      if ( !*sub_8F3FA0(&v128, &v133, &v123) ) /*0x8f51dd*/
      {
        v86 = v128.m128_i32[0]; /*0x8f51e8*/
        v128.m128_i32[0] = v105 + v85 % v122; /*0x8f51ec*/
      }
      if ( *(_DWORD *)(v84 + 4) == (*(_DWORD *)(v84 + 8) & 0x3FFFFFFF) ) /*0x8f51fe*/
        sub_8A6EE0((const void **)v84, 0xC); /*0x8f5203*/
      v87 = (_DWORD *)(*(_DWORD *)v84 + 0xC * *(_DWORD *)(v84 + 4)); /*0x8f5213*/
      v88 = v128.m128_i32[2]; /*0x8f521a*/
      *v87 = v128.m128_i32[0]; /*0x8f521e*/
      v87[1] = v86; /*0x8f5220*/
      v87[2] = v88; /*0x8f5223*/
      ++v85; /*0x8f522e*/
      v89 = v127 - 1; /*0x8f522f*/
      v8 = v127 == 1; /*0x8f522f*/
      ++*(_DWORD *)(v84 + 4); /*0x8f5230*/
      v127 = v89; /*0x8f5233*/
    }
    while ( !v8 ); /*0x8f5237*/
  }
  result = v125; /*0x8f523d*/
  v91 = v125 < 0; /*0x8f5241*/
  v140[5].m128_f32[0] = v129; /*0x8f524e*/
  if ( !v91 ) /*0x8f5251*/
  {
    v92 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8f5263*/
    if ( !v92 ) /*0x8f526b*/
      v92 = unk_BA7D9C; /*0x8f526d*/
    return sub_8A75D0(v92, v123, 0x10 * result, 0x14); /*0x8f5283*/
  }
  return result; /*0x8f5288*/
}
