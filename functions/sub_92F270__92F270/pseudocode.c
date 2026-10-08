int __cdecl sub_92F270(__m128 *a1, __m128 *a2, signed int a3, const void **a4, __m128 **a5)
{
  bool v5; // zf
  __m128 *v6; // edi
  __m128 v7; // xmm0
  __m128 *v8; // eax
  __m128 *v9; // eax
  _DWORD *ThreadLocalStoragePointer; // edx
  int v11; // ecx
  _DWORD *v12; // eax
  __m128 v13; // xmm0
  unsigned int v14; // edx
  __m128 v15; // xmm3
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  double v18; // st7
  signed int v19; // ecx
  __m128 *v20; // edi
  __m128 v21; // xmm1
  __m128 *v22; // eax
  __m128 v23; // xmm5
  unsigned int v24; // edi
  __m128 v25; // xmm1
  __m128 v26; // xmm0
  float v27; // xmm2_4
  float v28; // xmm3_4
  __m128 v29; // xmm0
  unsigned int v30; // ecx
  __m128 v31; // xmm3
  __m128 v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128 v35; // xmm0
  double v36; // st7
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  double v39; // st7
  double v40; // st6
  double v41; // st6
  __m128 v42; // xmm6
  __m128 v43; // xmm0
  __m128 v44; // xmm6
  __m128 *v45; // ecx
  __m128 v46; // xmm1
  __m128 v47; // xmm2
  __m128 v48; // xmm0
  bool v49; // c0
  double v50; // st7
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  float v53; // xmm2_4
  float v54; // xmm6_4
  __m128 v55; // xmm0
  __m128 v56; // xmm0
  __m128 v57; // xmm0
  const void **v58; // ecx
  bool v59; // c0
  __m128 *v60; // eax
  __m128 v61; // xmm1
  __m128 v62; // xmm0
  float v63; // xmm2_4
  float v64; // xmm6_4
  __m128 v65; // xmm0
  __m128 v66; // xmm0
  unsigned int v67; // edi
  __m128 v68; // xmm1
  __m128 *v69; // edi
  __m128 v70; // xmm0
  __m128 *v71; // edx
  __m128 *v72; // ecx
  __m128 v73; // xmm2
  __m128 v74; // xmm0
  bool v75; // c0
  double v76; // st7
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  float v79; // xmm2_4
  float v80; // xmm3_4
  __m128 v81; // xmm0
  __m128 v82; // xmm0
  __m128 v83; // xmm0
  int result; // eax
  unsigned int v85; // [esp+14h] [ebp-ACh]
  float v86; // [esp+18h] [ebp-A8h]
  float v87; // [esp+1Ch] [ebp-A4h]
  unsigned int v88; // [esp+1Ch] [ebp-A4h]
  __m128 *v89; // [esp+20h] [ebp-A0h]
  __m128 *v90; // [esp+20h] [ebp-A0h]
  float v91; // [esp+24h] [ebp-9Ch]
  unsigned int v92; // [esp+24h] [ebp-9Ch]
  unsigned int v93; // [esp+28h] [ebp-98h]
  unsigned int v94; // [esp+2Ch] [ebp-94h]
  __m128 v95; // [esp+30h] [ebp-90h]
  float v96; // [esp+40h] [ebp-80h]
  float v97; // [esp+40h] [ebp-80h]
  float v98; // [esp+40h] [ebp-80h]
  float v99; // [esp+50h] [ebp-70h]
  unsigned int v100; // [esp+54h] [ebp-6Ch]
  float v101; // [esp+58h] [ebp-68h]
  int v102; // [esp+60h] [ebp-60h]
  float v103; // [esp+80h] [ebp-40h]
  _DWORD *v104; // [esp+94h] [ebp-2Ch]
  __m128 v105; // [esp+A0h] [ebp-20h]

  v5 = ((unsigned int)a5[2] & 0x3FFFFFFF) == 0; /*0x92f281*/
  v6 = a1; /*0x92f289*/
  a5[1] = 0; /*0x92f28c*/
  v7 = _mm_xor_ps(*a1, (__m128)xmmword_A965C0); /*0x92f29d*/
  if ( v5 ) /*0x92f2a5*/
    sub_8A6EE0((const void **)a5, 0x10); /*0x92f2aa*/
  v8 = &(*a5)[(_DWORD)a5[1]]; /*0x92f2c1*/
  a5[1] = (__m128 *)((char *)a5[1] + 1); /*0x92f2c4*/
  *v8 = *a1; /*0x92f2ca*/
  if ( a5[1] == (__m128 *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x92f2da*/
    sub_8A6EE0((const void **)a5, 0x10); /*0x92f2df*/
  v9 = &(*a5)[(_DWORD)a5[1]]; /*0x92f2f9*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92f2fb*/
  a5[1] = (__m128 *)((char *)a5[1] + 1); /*0x92f303*/
  v11 = MEMORY[0xBA9DE4]; /*0x92f306*/
  *v9 = v7; /*0x92f30c*/
  v102 = ThreadLocalStoragePointer[v11]; /*0x92f31b*/
  v12 = sub_8A7560(*(_DWORD *)(v102 + 0x19C), a3, 0x14); /*0x92f31f*/
  v104 = v12; /*0x92f328*/
  if ( a3 > 0 ) /*0x92f32f*/
  {
    memset(v12, 0, a3); /*0x92f33c*/
    v6 = a1; /*0x92f345*/
  }
  v13 = *v6; /*0x92f34b*/
  v14 = 0xFFFFFFFF; /*0x92f350*/
  v94 = 0xFFFFFFFF; /*0x92f359*/
  v95.m128_i32[3] = 0; /*0x92f35d*/
  v95.m128_i32[1] = 0; /*0x92f36d*/
  if ( fabs(fConstant_1 - fabs(v6->m128_f32[2])) >= flt_A372CC ) /*0x92f37a*/
  {
    v95.m128_i32[0] = 0; /*0x92f3c3*/
    v95.m128_i32[2] = 0x3F800000; /*0x92f3cb*/
    v15 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xD2), _mm_shuffle_ps(v95, v95, 0xC9)); /*0x92f3e3*/
    v16 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xC9), _mm_shuffle_ps(v95, v95, 0xD2)); /*0x92f3f7*/
  }
  else
  {
    v95.m128_i32[0] = 0x3F800000; /*0x92f386*/
    v95.m128_i32[2] = 0; /*0x92f38e*/
    v15 = _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)); /*0x92f3a2*/
    v16 = _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)); /*0x92f3b3*/
  }
  v17 = _mm_sub_ps(v16, v15); /*0x92f3b6*/
  v18 = flt_A3B888; /*0x92f407*/
  v19 = 0; /*0x92f40d*/
  if ( a3 > 0 ) /*0x92f414*/
  {
    v20 = a2; /*0x92f416*/
    do /*0x92f466*/
    {
      v21 = _mm_mul_ps(*v20, v17); /*0x92f423*/
      v87 = _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0] /*0x92f440*/
          + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]);
      if ( v87 > v18 ) /*0x92f44f*/
      {
        v94 = v19; /*0x92f453*/
        v18 = v87; /*0x92f457*/
        v14 = v19; /*0x92f45b*/
      }
      ++v19; /*0x92f460*/
      ++v20; /*0x92f461*/
    }
    while ( v19 < a3 ); /*0x92f466*/
  }
  *((_BYTE *)v12 + v14) = 1; /*0x92f474*/
  if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x92f485*/
  {
    sub_8A6EE0(a4, 0x10); /*0x92f48a*/
    v14 = v94; /*0x92f494*/
  }
  v22 = (__m128 *)((char *)*a4 + 0x10 * (_DWORD)a4[1]); /*0x92f4a3*/
  a4[1] = (char *)a4[1] + 1; /*0x92f4a6*/
  *v22 = a2[v14]; /*0x92f4b2*/
  v23 = (__m128)0x3F000000u; /*0x92f4f3*/
  v24 = 0xFFFFFFFF; /*0x92f4f9*/
  v25 = _mm_add_ps( /*0x92f4ff*/
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xC9), _mm_shuffle_ps(*a1, *a1, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xD2), _mm_shuffle_ps(*a1, *a1, 0xC9))),
          v17);
  v93 = v14; /*0x92f502*/
  v88 = v14; /*0x92f506*/
  v100 = 0xFFFFFFFF; /*0x92f50a*/
  while ( 1 )
  {
    v26 = _mm_mul_ps(v25, v25); /*0x92f526*/
    v27 = _mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]; /*0x92f530*/
    v28 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0]; /*0x92f537*/
    v96 = 1.0 / fsqrt(v28 + v27); /*0x92f54b*/
    v29 = v23; /*0x92f565*/
    v29.m128_f32[0] = (float)(v23.m128_f32[0] * v96) * (float)(3.0 - (float)((float)((float)(v28 + v27) * v96) * v96)); /*0x92f56c*/
    v30 = 0; /*0x92f57a*/
    v31 = _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v25); /*0x92f57e*/
    v86 = -2.0; /*0x92f581*/
    v99 = 3.4028235e38; /*0x92f591*/
    if ( a3 > 0 ) /*0x92f599*/
    {
      v89 = a2; /*0x92f59f*/
      while ( v30 == v14 ) /*0x92f5a5*/
      {
LABEL_31:
        ++v89; /*0x92f722*/
        if ( (int)++v30 >= a3 ) /*0x92f72d*/
          goto LABEL_32; /*0x92f72d*/
      }
      v32 = _mm_sub_ps(*v89, a2[v14]); /*0x92f5c1*/
      v33 = _mm_sub_ps( /*0x92f5e9*/
              _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v32, v32, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v32, v32, 0xC9)));
      v34 = _mm_mul_ps(v31, v32); /*0x92f5ef*/
      v35 = _mm_mul_ps(v32, v32); /*0x92f5f2*/
      v101 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0] /*0x92f63c*/
           + (float)(_mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]);
      v36 = fConstant_1 /*0x92f648*/
          / fsqrt(
              _mm_shuffle_ps(v35, v35, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]));
      v37 = _mm_mul_ps(v33, v33); /*0x92f64f*/
      v38 = _mm_mul_ps(v33, *a1); /*0x92f68d*/
      v91 = v36; /*0x92f6ae*/
      v39 = v36 /*0x92f6b2*/
          * fsqrt(
              _mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0]));
      if ( (float)(_mm_shuffle_ps(v38, v38, 0xAA).m128_f32[0] /*0x92f6cd*/
                 + (float)(_mm_shuffle_ps(v38, v38, 0x55).m128_f32[0] + v38.m128_f32[0])) > (double)*(float *)&SrcStr )
        v39 = v39 * kTerrainLODQuadRayDirectionZ; /*0x92f6d7*/
      if ( v91 * v101 >= *(float *)&SrcStr ) /*0x92f6e4*/
      {
        if ( v39 > *(float *)&SrcStr ) /*0x92f6f9*/
        {
          v41 = v39; /*0x92f6fb*/
          goto LABEL_29; /*0x92f6fd*/
        }
        v40 = flt_A46B10; /*0x92f6ff*/
      }
      else
      {
        v40 = fConstant_2; /*0x92f6e6*/
      }
      v41 = v40 - v39; /*0x92f705*/
LABEL_29:
      if ( v41 < v99 ) /*0x92f710*/
      {
        v99 = v41; /*0x92f712*/
        v24 = v30; /*0x92f716*/
        v86 = v39; /*0x92f718*/
      }
      goto LABEL_31; /*0x92f718*/
    }
LABEL_32:
    if ( v14 == v94 )
    {
      v100 = v24; /*0x92f916*/
    }
    else
    {
      v42 = a2[v14]; /*0x92f742*/
      v90 = &a2[v14]; /*0x92f749*/
      v43 = _mm_sub_ps(v42, a2[v88]); /*0x92f763*/
      v44 = _mm_sub_ps(v42, a2[v24]); /*0x92f774*/
      if ( a5[1] == (__m128 *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x92f787*/
      {
        sub_8A6EE0((const void **)a5, 0x10); /*0x92f78c*/
        v23 = (__m128)0x3F000000u; /*0x92f7ae*/
        v14 = v93; /*0x92f7b3*/
      }
      v45 = &(*a5)[(_DWORD)a5[1]]; /*0x92f7c2*/
      a5[1] = (__m128 *)((char *)a5[1] + 1); /*0x92f7c5*/
      if ( v88 == v24 ) /*0x92f7cc*/
        v46 = *a1; /*0x92f7fb*/
      else
        v46 = _mm_sub_ps( /*0x92f7f3*/
                _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(v44, v44, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(v44, v44, 0xC9)));
      v47 = _mm_sub_ps( /*0x92f826*/
              _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xC9), _mm_shuffle_ps(v46, v46, 0xD2)),
              _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0xD2), _mm_shuffle_ps(v46, v46, 0xC9)));
      v48 = _mm_mul_ps(v47, v44); /*0x92f82c*/
      v49 = (float)(_mm_shuffle_ps(v48, v48, 0xAA).m128_f32[0] /*0x92f851*/
                  + (float)(_mm_shuffle_ps(v48, v48, 0x55).m128_f32[0] + v48.m128_f32[0])) < (double)flt_A372CC;
      *v45 = v47; /*0x92f857*/
      v50 = v49 ? kTerrainLODQuadRayDirectionZ : fConstant_1;
      *(float *)&v92 = v50; /*0x92f873*/
      v51 = _mm_mul_ps(_mm_shuffle_ps((__m128)v92, (__m128)v92, 0), v47); /*0x92f884*/
      v52 = _mm_mul_ps(v51, v51); /*0x92f88a*/
      v53 = _mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]; /*0x92f894*/
      v54 = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]; /*0x92f89b*/
      v97 = 1.0 / fsqrt(v54 + v53); /*0x92f8af*/
      v55 = v23; /*0x92f8c9*/
      v55.m128_f32[0] = (float)(v23.m128_f32[0] * v97) * (float)(3.0 - (float)((float)((float)(v54 + v53) * v97) * v97)); /*0x92f8d0*/
      *v45 = v51; /*0x92f8db*/
      v56 = _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), v51); /*0x92f8e1*/
      *v45 = v56; /*0x92f8e4*/
      v57 = _mm_mul_ps(v56, *v90); /*0x92f8ea*/
      v45->m128_f32[3] = -(float)(_mm_shuffle_ps(v57, v57, 0xAA).m128_f32[0] /*0x92f911*/
                                + (float)(_mm_shuffle_ps(v57, v57, 0x55).m128_f32[0] + v57.m128_f32[0]));
    }
    if ( *((_BYTE *)v104 + v24) ) /*0x92f921*/
      break; /*0x92f921*/
    v58 = a4; /*0x92f92b*/
    *((_BYTE *)v104 + v24) = 1; /*0x92f92e*/
    if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x92f940*/
    {
      sub_8A6EE0(a4, 0x10); /*0x92f945*/
      v23 = (__m128)0x3F000000u; /*0x92f957*/
      v58 = a4; /*0x92f95c*/
    }
    v59 = v86 < (double)flt_A79DB4; /*0x92f96b*/
    v60 = (__m128 *)((char *)*v58 + 0x10 * (_DWORD)v58[1]); /*0x92f974*/
    v58[1] = (char *)v58[1] + 1; /*0x92f977*/
    *v60 = a2[v24]; /*0x92f987*/
    v61 = _mm_sub_ps(a2[v24], a2[v93]); /*0x92f99b*/
    v62 = _mm_mul_ps(v61, v61); /*0x92f9a4*/
    v63 = _mm_shuffle_ps(v62, v62, 0x55).m128_f32[0] + v62.m128_f32[0]; /*0x92f9ae*/
    v64 = _mm_shuffle_ps(v62, v62, 0xAA).m128_f32[0]; /*0x92f9b5*/
    v98 = 1.0 / fsqrt(v64 + v63); /*0x92f9c9*/
    v65 = v23; /*0x92f9e3*/
    v65.m128_f32[0] = (float)(v23.m128_f32[0] * v98) * (float)(3.0 - (float)((float)((float)(v64 + v63) * v98) * v98)); /*0x92f9ea*/
    v66 = _mm_mul_ps(_mm_shuffle_ps(v65, v65, 0), v61); /*0x92f9f8*/
    if ( !v59 ) /*0x92f9fb*/
      v66 = _mm_add_ps(v66, v31); /*0x92f9fd*/
    v88 = v93; /*0x92fa00*/
    v25 = v66; /*0x92fa04*/
    v93 = v24; /*0x92fa07*/
    v14 = v24; /*0x92fa0b*/
  }
  v67 = v24; /*0x92fa19*/
  v68 = a2[v67]; /*0x92fa1c*/
  v69 = &a2[v67]; /*0x92fa20*/
  v70 = _mm_sub_ps(v68, a2[v14]); /*0x92fa2f*/
  v105 = _mm_sub_ps(v68, a2[v100]); /*0x92fa4c*/
  if ( a5[1] == (__m128 *)((unsigned int)a5[2] & 0x3FFFFFFF) ) /*0x92fa54*/
  {
    sub_8A6EE0((const void **)a5, 0x10); /*0x92fa59*/
    v23 = (__m128)0x3F000000u; /*0x92fa6b*/
  }
  v71 = *a5; /*0x92fa76*/
  v72 = &(*a5)[(_DWORD)a5[1]]; /*0x92fa7d*/
  a5[1] = (__m128 *)((char *)a5[1] + 1); /*0x92fa80*/
  v73 = _mm_sub_ps( /*0x92faae*/
          _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0xC9), _mm_shuffle_ps(*v71, *v71, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v70, v70, 0xD2), _mm_shuffle_ps(*v71, *v71, 0xC9)));
  v74 = _mm_mul_ps(v73, v105); /*0x92fab4*/
  v75 = (float)(_mm_shuffle_ps(v74, v74, 0xAA).m128_f32[0] /*0x92fade*/
              + (float)(_mm_shuffle_ps(v74, v74, 0x55).m128_f32[0] + v74.m128_f32[0])) < (double)flt_A372CC;
  *v72 = v73; /*0x92fae4*/
  if ( v75 ) /*0x92faec*/
    v76 = kTerrainLODQuadRayDirectionZ; /*0x92faee*/
  else
    v76 = fConstant_1; /*0x92faf6*/
  *(float *)&v85 = v76; /*0x92fafc*/
  v77 = _mm_mul_ps(_mm_shuffle_ps((__m128)v85, (__m128)v85, 0), v73); /*0x92fb0d*/
  v78 = _mm_mul_ps(v77, v77); /*0x92fb13*/
  v79 = _mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0]; /*0x92fb1d*/
  v80 = _mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0]; /*0x92fb24*/
  v103 = 1.0 / fsqrt(v80 + v79); /*0x92fb3b*/
  v23.m128_f32[0] = v23.m128_f32[0] * v103; /*0x92fb54*/
  *v72 = v77; /*0x92fb5c*/
  v81 = v23; /*0x92fb5f*/
  v81.m128_f32[0] = v23.m128_f32[0] * (float)(3.0 - (float)((float)((float)(v80 + v79) * v103) * v103)); /*0x92fb62*/
  v82 = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v77); /*0x92fb70*/
  *v72 = v82; /*0x92fb73*/
  v83 = _mm_mul_ps(v82, *v69); /*0x92fb79*/
  result = a3; /*0x92fb9e*/
  v72->m128_f32[3] = -(float)(_mm_shuffle_ps(v83, v83, 0xAA).m128_f32[0] /*0x92fba5*/
                            + (float)(_mm_shuffle_ps(v83, v83, 0x55).m128_f32[0] + v83.m128_f32[0]));
  if ( a3 >= 0 ) /*0x92fba8*/
    return sub_8A75D0(*(_DWORD *)(v102 + 0x19C), v104, a3 & 0x3FFFFFFF, 0x14); /*0x92fbc4*/
  return result; /*0x92fbc9*/
}
