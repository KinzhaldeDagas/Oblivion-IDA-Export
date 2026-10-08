int __thiscall sub_916400(__m128 *this)
{
  double v1; // st7
  __m128 v3; // xmm1
  double v4; // st6
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  double v13; // st7
  const void **v14; // ebx
  const void **v15; // eax
  char *v16; // esi
  int v17; // eax
  int v18; // eax
  int v19; // ebx
  int v20; // esi
  int v21; // eax
  __m128 v22; // xmm0
  int v23; // eax
  int v24; // eax
  __m128 *v25; // esi
  int v26; // eax
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128 v29; // xmm6
  __m128 v30; // xmm0
  __m128 v31; // xmm2
  int v32; // eax
  __m128 v33; // xmm0
  __m128 v34; // xmm0
  int v35; // ebx
  int v36; // esi
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // ebx
  int v41; // esi
  int v42; // eax
  int v43; // eax
  __int32 v44; // ecx
  int v45; // eax
  int v46; // ecx
  __int32 v47; // edx
  int v48; // esi
  int v49; // ebx
  int v50; // eax
  const void **v51; // esi
  int v52; // eax
  int v53; // eax
  char *v54; // ecx
  char *v55; // eax
  int v56; // esi
  int v57; // ebx
  int v58; // eax
  const void **v59; // esi
  int v60; // eax
  int v61; // eax
  char *v62; // ecx
  __int32 v63; // esi
  char *v64; // eax
  __int64 v65; // rcx
  bool v66; // cc
  __int32 v67; // esi
  int v68; // ecx
  int v69; // eax
  int result; // eax
  int v71; // edx
  int v72; // esi
  int v73; // eax
  int v74; // esi
  int v75; // eax
  bool v76; // zf
  float v77; // ecx
  int v78; // ebx
  int v79; // eax
  int *v80; // eax
  int v81; // eax
  _DWORD *v82; // eax
  int v83; // ecx
  float v84; // [esp+0h] [ebp-E4h]
  unsigned int v85; // [esp+18h] [ebp-CCh]
  unsigned int v86; // [esp+18h] [ebp-CCh]
  unsigned int v87; // [esp+18h] [ebp-CCh]
  unsigned int v88; // [esp+18h] [ebp-CCh]
  unsigned int v89; // [esp+18h] [ebp-CCh]
  int v90; // [esp+18h] [ebp-CCh]
  int v91; // [esp+1Ch] [ebp-C8h]
  int v92; // [esp+1Ch] [ebp-C8h]
  int v93; // [esp+1Ch] [ebp-C8h]
  float v94; // [esp+20h] [ebp-C4h]
  int v95; // [esp+20h] [ebp-C4h]
  int v96; // [esp+20h] [ebp-C4h]
  __m128 v97; // [esp+24h] [ebp-C0h] BYREF
  __int32 v98; // [esp+40h] [ebp-A4h]
  __m128 v99; // [esp+44h] [ebp-A0h] BYREF
  int v100; // [esp+58h] [ebp-8Ch]
  float v101; // [esp+5Ch] [ebp-88h]
  int v102; // [esp+60h] [ebp-84h]
  __m128 v103; // [esp+64h] [ebp-80h] BYREF
  __m128 v104; // [esp+74h] [ebp-70h]
  __m128 v105; // [esp+84h] [ebp-60h]
  __m128 v106; // [esp+94h] [ebp-50h] BYREF
  __m128 v107; // [esp+A4h] [ebp-40h]
  __m128 v108; // [esp+B4h] [ebp-30h]
  __m128 v109; // [esp+C4h] [ebp-20h] BYREF
  __m128 v110; // [esp+D4h] [ebp-10h]

  v1 = fConstant_1; /*0x91640c*/
  v3 = _mm_sub_ps(*(this + 6), *(this + 7)); /*0x916425*/
  v4 = v1 / (double)*((int *)this + 0x22); /*0x916428*/
  v5 = _mm_mul_ps(v3, v3); /*0x91642d*/
  v101 = fsqrt(_mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] /*0x916461*/
                                                                + v5.m128_f32[0]));
  *(float *)&v85 = v4; /*0x916465*/
  v6 = _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), v3); /*0x916476*/
  v7 = _mm_mul_ps(v6, v6); /*0x91647c*/
  v3.m128_f32[0] = _mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]; /*0x916486*/
  v8 = _mm_shuffle_ps(v7, v7, 0xAA); /*0x91648d*/
  v9 = v8; /*0x916491*/
  v9.m128_f32[0] = v8.m128_f32[0] + v3.m128_f32[0]; /*0x916494*/
  v99 = v9; /*0x916498*/
  v99.m128_f32[0] = 1.0 / fsqrt(v8.m128_f32[0] + v3.m128_f32[0]); /*0x9164a1*/
  v10 = (__m128)0x3F000000u; /*0x9164ce*/
  v10.m128_f32[0] = (float)(0.5 * v99.m128_f32[0]) /*0x9164d8*/
                  * (float)(3.0
                          - (float)((float)((float)(v8.m128_f32[0] + v3.m128_f32[0]) * v99.m128_f32[0]) * v99.m128_f32[0]));
  v11 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v6); /*0x9164e6*/
  v103 = v11; /*0x9164e9*/
  v105 = v6; /*0x9164f4*/
  if ( fabs(v11.m128_f32[0]) <= kHeadBodyNormalMatchRadius ) /*0x916507*/
  {
    if ( fabs(v103.m128_f32[1]) <= kHeadBodyNormalMatchRadius ) /*0x91653d*/
    {
      if ( fabs(v103.m128_f32[2]) <= kHeadBodyNormalMatchRadius ) /*0x916573*/
      {
        v12 = v106; /*0x916598*/
      }
      else
      {
        v99.m128_f32[0] = v1; /*0x916575*/
        memset(&v99.m128_i16[2], 0, 0xC); /*0x916579*/
        v12 = (__m128)COERCE_UNSIGNED_INT(v99.m128_f32[0]); /*0x916591*/
      }
    }
    else
    {
      v99.m128_f32[2] = v1; /*0x91653f*/
      v99.m128_u64[0] = 0; /*0x916543*/
      v99.m128_i32[3] = 0; /*0x916553*/
      v12 = v99; /*0x91655b*/
    }
  }
  else
  {
    v99.m128_f32[1] = v1; /*0x916509*/
    v99.m128_i32[0] = 0; /*0x91650d*/
    v99.m128_u64[1] = 0; /*0x916515*/
    v12 = (__m128)v99.m128_u64[0]; /*0x916525*/
  }
  v13 = flt_A46B14 / (double)*((int *)this + 0x21); /*0x9165b5*/
  v107 = _mm_mul_ps( /*0x9165f9*/
           _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x20), (__m128)*((unsigned int *)this + 0x20), 0),
           _mm_sub_ps(
             _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v12, v12, 0xD2)),
             _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v12, v12, 0xC9))));
  v84 = v13; /*0x916601*/
  hkQuaternion_SetAxisAngleScaled(&v109, &v103, v84); /*0x916605*/
  v14 = 0; /*0x91660a*/
  hkQuaternion_SetAxisAngleScaled(&v97, &v103, 0.0); /*0x916616*/
  v15 = (const void **)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x24); /*0x916627*/
  if ( v15 ) /*0x91662c*/
  {
    *v15 = 0; /*0x91662e*/
    v15[1] = 0; /*0x916630*/
    v15[2] = (const void *)0x80000000; /*0x916638*/
    v15[3] = 0; /*0x91663b*/
    v15[4] = 0; /*0x91663e*/
    v15[5] = (const void *)0x80000000; /*0x916641*/
    v14 = v15; /*0x916644*/
  }
  *((_DWORD *)this + 0x14) = v14; /*0x916646*/
  v16 = (char *)v14[1]; /*0x916649*/
  v17 = (unsigned int)v14[2] & 0x3FFFFFFF; /*0x916652*/
  if ( v17 < (int)(v16 + 1) ) /*0x916659*/
  {
    v18 = 2 * v17; /*0x91665b*/
    if ( (int)(v16 + 1) >= v18 ) /*0x91665f*/
      v18 = (int)(v16 + 1); /*0x916661*/
    sub_8A6E40(v14, v18, 0x10); /*0x916667*/
  }
  v14[1] = v16 + 1; /*0x916672*/
  *((__m128 *)*v14 + (unsigned int)v16) = *(this + 7); /*0x91667e*/
  v19 = *((_DWORD *)this + 0x14); /*0x916688*/
  *(float *)&v86 = (float)*((int *)this + 0x22); /*0x916691*/
  v20 = *(_DWORD *)(v19 + 4); /*0x91669b*/
  v21 = *(_DWORD *)(v19 + 8) & 0x3FFFFFFF; /*0x9166b6*/
  v22 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps((__m128)v86, (__m128)v86, 0), v105), *(this + 7)); /*0x9166bd*/
  v104 = v22; /*0x9166c0*/
  if ( v21 < v20 + 1 ) /*0x9166c5*/
  {
    v23 = 2 * v21; /*0x9166c7*/
    if ( v20 + 1 >= v23 ) /*0x9166cb*/
      v23 = v20 + 1; /*0x9166cd*/
    sub_8A6E40((const void **)v19, v23, 0x10); /*0x9166d3*/
    v22 = v104; /*0x9166d8*/
  }
  v24 = v20 + 1; /*0x9166e2*/
  v25 = (__m128 *)(*(_DWORD *)v19 + 0x10 * v20); /*0x9166e8*/
  *(_DWORD *)(v19 + 4) = v24; /*0x9166ea*/
  *v25 = v22; /*0x9166ed*/
  v26 = *((_DWORD *)this + 0x21); /*0x9166f0*/
  v98 = 0; /*0x9166f8*/
  if ( v26 > 0 ) /*0x916700*/
  {
    v27 = v107; /*0x916706*/
    v28 = _mm_shuffle_ps(v107, v107, 0xC9); /*0x916714*/
    v29 = _mm_shuffle_ps(v107, v107, 0xD2); /*0x916718*/
    v108 = v28; /*0x91671c*/
    v110 = v29; /*0x916724*/
    while ( 1 ) /*0x91675d*/
    {
      v104 = v97; /*0x91675d*/
      v104.m128_i32[3] = 0; /*0x916762*/
      v30 = _mm_mul_ps(v104, v27); /*0x916774*/
      *(float *)&v87 = v97.m128_f32[3] * v97.m128_f32[3] + v97.m128_f32[3] * v97.m128_f32[3] - fConstant_1; /*0x91678f*/
      v31 = (__m128)v87; /*0x916793*/
      v94 = _mm_shuffle_ps(v30, v30, 0xAA).m128_f32[0] /*0x9167a1*/
          + (float)(_mm_shuffle_ps(v30, v30, 0x55).m128_f32[0] + v30.m128_f32[0]);
      v32 = *((_DWORD *)this + 0x22); /*0x9167a9*/
      *(float *)&v88 = v94 + v94; /*0x9167b6*/
      v33 = (__m128)v88; /*0x9167c2*/
      *(float *)&v89 = v97.m128_f32[3] + v97.m128_f32[3]; /*0x9167d7*/
      v34 = _mm_add_ps( /*0x91680f*/
              *(this + 7),
              _mm_add_ps(
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v31, v31, 0), v27), _mm_mul_ps(_mm_shuffle_ps(v33, v33, 0), v104)),
                _mm_mul_ps(
                  _mm_shuffle_ps((__m128)v89, (__m128)v89, 0),
                  _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0xC9), v29),
                    _mm_mul_ps(_mm_shuffle_ps(v104, v104, 0xD2), v28)))));
      v99 = v34; /*0x916812*/
      v91 = 0; /*0x916817*/
      if ( v32 > 0 ) /*0x91681f*/
      {
        do /*0x916882*/
        {
          v35 = *((_DWORD *)this + 0x14); /*0x916821*/
          v36 = *(_DWORD *)(v35 + 4); /*0x916824*/
          v37 = *(_DWORD *)(v35 + 8) & 0x3FFFFFFF; /*0x91682d*/
          if ( v37 < v36 + 1 ) /*0x916834*/
          {
            v38 = 2 * v37; /*0x916836*/
            if ( v36 + 1 >= v38 ) /*0x91683a*/
              v38 = v36 + 1; /*0x91683c*/
            sub_8A6E40((const void **)v35, v38, 0x10); /*0x916842*/
            v34 = v99; /*0x916847*/
          }
          *(_DWORD *)(v35 + 4) = v36 + 1; /*0x916852*/
          *(__m128 *)(*(_DWORD *)v35 + 0x10 * v36) = v34; /*0x916860*/
          v34 = _mm_add_ps(v34, v105); /*0x916863*/
          v39 = *((_DWORD *)this + 0x22); /*0x91686b*/
          v99 = v34; /*0x916874*/
          ++v91; /*0x91687e*/
        }
        while ( v91 < v39 ); /*0x916882*/
      }
      v40 = *((_DWORD *)this + 0x14); /*0x916884*/
      v41 = *(_DWORD *)(v40 + 4); /*0x916887*/
      v42 = *(_DWORD *)(v40 + 8) & 0x3FFFFFFF; /*0x916890*/
      if ( v42 < v41 + 1 ) /*0x916897*/
      {
        v43 = 2 * v42; /*0x916899*/
        if ( v41 + 1 >= v43 ) /*0x91689d*/
          v43 = v41 + 1; /*0x91689f*/
        sub_8A6E40((const void **)v40, v43, 0x10); /*0x9168a5*/
        v34 = v99; /*0x9168aa*/
      }
      *(_DWORD *)(v40 + 4) = v41 + 1; /*0x9168b5*/
      *(__m128 *)(*(_DWORD *)v40 + 0x10 * v41) = v34; /*0x9168ce*/
      v106 = v97; /*0x9168db*/
      sub_889470(&v97, &v106, &v109); /*0x9168e3*/
      v44 = *((_DWORD *)this + 0x21); /*0x9168ec*/
      if ( ++v98 >= v44 ) /*0x9168f9*/
        break; /*0x9168f9*/
      v28 = v108; /*0x91672e*/
      v29 = v110; /*0x916736*/
      v27 = v107; /*0x91673e*/
    }
  }
  v45 = *((_DWORD *)this + 0x22); /*0x9168ff*/
  v46 = *((_DWORD *)this + 0x21); /*0x916905*/
  v102 = v45 + 1; /*0x916916*/
  v47 = v46 * (v45 + 1) + 2; /*0x91691a*/
  v98 = v47; /*0x916922*/
  v97.m128_i32[0] = 2; /*0x916926*/
  v97.m128_i32[1] = v45 + 3; /*0x91692e*/
  v97.m128_i32[2] = 3; /*0x916932*/
  v97.m128_i32[3] = v45 + 4; /*0x91693a*/
  v95 = 0; /*0x91693e*/
  if ( v46 > 0 ) /*0x916946*/
  {
    do /*0x916a8a*/
    {
      v92 = 0; /*0x916952*/
      if ( v45 > 0 ) /*0x91695a*/
      {
        do /*0x916a2d*/
        {
          v48 = *((_DWORD *)this + 0x14); /*0x916960*/
          v49 = *(_DWORD *)(v48 + 0x10); /*0x916963*/
          v50 = *(_DWORD *)(v48 + 0x14); /*0x916966*/
          v51 = (const void **)(v48 + 0xC); /*0x916969*/
          v52 = v50 & 0x3FFFFFFF; /*0x91696f*/
          if ( v52 < v49 + 1 ) /*0x916976*/
          {
            v53 = 2 * v52; /*0x916978*/
            if ( v49 + 1 >= v53 ) /*0x91697c*/
              v53 = v49 + 1; /*0x91697e*/
            sub_8A6E40(v51, v53, 0xC); /*0x916984*/
            v47 = v98; /*0x916989*/
          }
          v54 = (char *)*v51; /*0x916990*/
          v51[1] = (const void *)(v49 + 1); /*0x916995*/
          v55 = &v54[0xC * v49]; /*0x91699b*/
          *(_QWORD *)v55 = v97.m128_u64[0]; /*0x9169a2*/
          *((_DWORD *)v55 + 2) = v97.m128_i32[2]; /*0x9169af*/
          v56 = *((_DWORD *)this + 0x14); /*0x9169b2*/
          v57 = *(_DWORD *)(v56 + 0x10); /*0x9169b5*/
          v58 = *(_DWORD *)(v56 + 0x14); /*0x9169b8*/
          v59 = (const void **)(v56 + 0xC); /*0x9169bb*/
          v60 = v58 & 0x3FFFFFFF; /*0x9169c1*/
          if ( v60 < v57 + 1 ) /*0x9169c8*/
          {
            v61 = 2 * v60; /*0x9169ca*/
            if ( v57 + 1 >= v61 ) /*0x9169ce*/
              v61 = v57 + 1; /*0x9169d0*/
            sub_8A6E40(v59, v61, 0xC); /*0x9169d6*/
            v47 = v98; /*0x9169db*/
          }
          v62 = (char *)*v59; /*0x9169e2*/
          v59[1] = (const void *)(v57 + 1); /*0x9169e7*/
          v63 = v97.m128_i32[3]; /*0x9169ea*/
          v64 = &v62[0xC * v57]; /*0x9169f5*/
          v65 = *(__int64 *)((char *)v97.m128_i64 + 4); /*0x9169f8*/
          *((_DWORD *)v64 + 1) = v97.m128_i32[1]; /*0x9169fc*/
          *(_DWORD *)v64 = HIDWORD(v65); /*0x9169ff*/
          *((_DWORD *)v64 + 2) = v63; /*0x916a01*/
          v97.m128_i32[1] = v65 + 1; /*0x916a0b*/
          ++v97.m128_i32[0]; /*0x916a14*/
          v45 = *((_DWORD *)this + 0x22); /*0x916a18*/
          v66 = v92 + 1 < v45; /*0x916a1f*/
          v97.m128_i32[2] = HIDWORD(v65) + 1; /*0x916a21*/
          v97.m128_i32[3] = v63 + 1; /*0x916a25*/
          ++v92; /*0x916a29*/
        }
        while ( v66 ); /*0x916a2d*/
      }
      v67 = v97.m128_i32[1] + 1; /*0x916a40*/
      ++v97.m128_i32[2]; /*0x916a42*/
      v66 = v97.m128_i32[3] + 1 < v47; /*0x916a4b*/
      ++v97.m128_i32[0]; /*0x916a4d*/
      ++v97.m128_i32[1]; /*0x916a51*/
      ++v97.m128_i32[3]; /*0x916a55*/
      if ( !v66 ) /*0x916a59*/
      {
        v97.m128_i32[1] = 2 - v47 + v67; /*0x916a64*/
        v97.m128_i32[3] += 2 - v47; /*0x916a75*/
      }
      ++v95; /*0x916a86*/
    }
    while ( v95 < *((_DWORD *)this + 0x21) ); /*0x916a8a*/
  }
  v68 = 0; /*0x916a90*/
  v96 = 0; /*0x916a92*/
  do /*0x916b9f*/
  {
    if ( v68 ) /*0x916a98*/
      v69 = *((_DWORD *)this + 0x22); /*0x916a9a*/
    else
      v69 = 0; /*0x916aa2*/
    v100 = v69 + 2; /*0x916aa7*/
    result = *((_DWORD *)this + 0x21); /*0x916aab*/
    v90 = 0; /*0x916ab3*/
    if ( result > 0 ) /*0x916abb*/
    {
      do /*0x916b91*/
      {
        v71 = v102 + v100; /*0x916ac9*/
        v93 = v102 + v100; /*0x916ad1*/
        if ( v102 + v100 >= v98 ) /*0x916ad5*/
        {
          v71 += 2 - v98; /*0x916ade*/
          v93 = v71; /*0x916ae0*/
        }
        v72 = *((_DWORD *)this + 0x14); /*0x916ae4*/
        v73 = *(_DWORD *)(v72 + 0x14); /*0x916ae7*/
        v74 = v72 + 0xC; /*0x916aea*/
        v75 = v73 & 0x3FFFFFFF; /*0x916aed*/
        v76 = v68 == 0; /*0x916af2*/
        v77 = *(float *)(v74 + 4); /*0x916af4*/
        v78 = LODWORD(v77) + 1; /*0x916af7*/
        v101 = v77; /*0x916afa*/
        if ( v76 ) /*0x916afe*/
        {
          if ( v75 < v78 ) /*0x916b3f*/
          {
            v81 = 2 * v75; /*0x916b41*/
            if ( v78 >= v81 ) /*0x916b45*/
              v81 = LODWORD(v77) + 1; /*0x916b47*/
            sub_8A6E40((const void **)v74, v81, 0xC); /*0x916b4d*/
            v71 = v93; /*0x916b52*/
            v77 = v101; /*0x916b56*/
          }
          v82 = (_DWORD *)(*(_DWORD *)v74 + 0xC * LODWORD(v77)); /*0x916b62*/
          v83 = v100; /*0x916b65*/
          *(_DWORD *)(v74 + 4) = v78; /*0x916b69*/
          *v82 = 0; /*0x916b6c*/
          v82[1] = v71; /*0x916b72*/
          v82[2] = v83; /*0x916b75*/
        }
        else
        {
          if ( v75 < v78 ) /*0x916b02*/
          {
            v79 = 2 * v75; /*0x916b04*/
            if ( v78 >= v79 ) /*0x916b08*/
              v79 = LODWORD(v77) + 1; /*0x916b0a*/
            sub_8A6E40((const void **)v74, v79, 0xC); /*0x916b10*/
            v71 = v93; /*0x916b15*/
            v77 = v101; /*0x916b19*/
          }
          v80 = (int *)(*(_DWORD *)v74 + 0xC * LODWORD(v77)); /*0x916b25*/
          *(_DWORD *)(v74 + 4) = v78; /*0x916b2c*/
          *v80 = v96; /*0x916b2f*/
          v80[1] = v100; /*0x916b35*/
          v80[2] = v71; /*0x916b38*/
        }
        result = v90 + 1; /*0x916b82*/
        v66 = v90 + 1 < *((_DWORD *)this + 0x21); /*0x916b83*/
        v68 = v96; /*0x916b85*/
        v100 = v71; /*0x916b89*/
        ++v90; /*0x916b8d*/
      }
      while ( v66 ); /*0x916b91*/
    }
    v96 = ++v68; /*0x916b9b*/
  }
  while ( v68 < 2 ); /*0x916b9f*/
  return result; /*0x916ba5*/
}
