_BYTE *__thiscall sub_8F29A0(__m128 *this, _BYTE *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // ebx
  unsigned __int64 v8; // rax
  __m128 v9; // xmm0
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  float v13; // xmm1_4
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm0
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm6_4
  __m128 v23; // xmm2
  __m128 v24; // xmm1
  __m128 v25; // xmm1
  __m128 v26; // xmm2
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  float v30; // xmm3_4
  __m128 v31; // xmm6
  __m128 v32; // xmm0
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm0
  __m128 v37; // xmm0
  __m128 v38; // xmm1
  __m128 v39; // xmm0
  float v40; // xmm2_4
  __m128 v41; // xmm3
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  int v44; // eax
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  double v47; // st7
  double v48; // st7
  __m128 v49; // xmm0
  __m128 v50; // xmm0
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  int v53; // esi
  _DWORD *v54; // ecx
  unsigned __int64 v55; // rax
  int v57; // eax
  int v58; // esi
  _DWORD *v59; // ecx
  unsigned __int64 v60; // rax
  float v61; // [esp+0h] [ebp-114h]
  float v62; // [esp+14h] [ebp-100h]
  float v63; // [esp+18h] [ebp-FCh]
  float v64; // [esp+18h] [ebp-FCh]
  float v65; // [esp+18h] [ebp-FCh]
  float v66; // [esp+18h] [ebp-FCh]
  float v67; // [esp+1Ch] [ebp-F8h]
  float v68; // [esp+20h] [ebp-F4h]
  float v69; // [esp+20h] [ebp-F4h]
  float v70; // [esp+20h] [ebp-F4h]
  unsigned int v71; // [esp+24h] [ebp-F0h]
  float v72; // [esp+24h] [ebp-F0h]
  float v73; // [esp+28h] [ebp-ECh] BYREF
  float v74; // [esp+2Ch] [ebp-E8h] BYREF
  float v75; // [esp+30h] [ebp-E4h] BYREF
  __m128 v76; // [esp+34h] [ebp-E0h] BYREF
  __m128 v77; // [esp+44h] [ebp-D0h] BYREF
  __m128 v78; // [esp+54h] [ebp-C0h] BYREF
  __m128 v79; // [esp+64h] [ebp-B0h] BYREF
  __m128 v80; // [esp+74h] [ebp-A0h] BYREF
  __m128 v81; // [esp+84h] [ebp-90h] BYREF
  __m128 v82; // [esp+94h] [ebp-80h] BYREF
  __m128 v83; // [esp+A4h] [ebp-70h] BYREF
  __m128 v84; // [esp+B4h] [ebp-60h] BYREF
  __m128 v85; // [esp+C4h] [ebp-50h] BYREF
  __m128 v86; // [esp+D4h] [ebp-40h]
  __int128 v87; // [esp+E4h] [ebp-30h]
  __m128 v88; // [esp+F4h] [ebp-20h]
  __m128 v89; // [esp+104h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f29ae*/
  v5 = MEMORY[0xBA9DE4]; /*0x8f29b6*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f29bc*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f29cb*/
  {
    v7 = *(_DWORD **)(v6 + 0x1A4); /*0x8f29cd*/
    *v7 = "TtrcCylinder"; /*0x8f29d3*/
    v8 = __rdtsc(); /*0x8f29d9*/
    v7[1] = v8; /*0x8f29e3*/
    *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x1A4) = v7 + 3; /*0x8f29ec*/
  }
  v63 = *((float *)this + 4) + this->m128_f32[3]; /*0x8f2a09*/
  v9 = _mm_mul_ps( /*0x8f2a43*/
         _mm_shuffle_ps((__m128)this->m128_u32[3], (__m128)this->m128_u32[3], 0),
         _mm_sub_ps(
           _mm_mul_ps(_mm_shuffle_ps(*(this + 5), *(this + 5), 0xC9), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xD2)),
           _mm_mul_ps(_mm_shuffle_ps(*(this + 5), *(this + 5), 0xD2), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xC9))));
  v77 = _mm_add_ps(*(this + 2), v9); /*0x8f2a4d*/
  v78 = _mm_sub_ps(*(this + 3), v9); /*0x8f2a6c*/
  sub_8F37A0(a3, &v77, &v78, &v81); /*0x8f2a71*/
  v10 = *a3; /*0x8f2a76*/
  v11 = _mm_sub_ps(*a3, v81); /*0x8f2a89*/
  v12 = _mm_mul_ps(v11, v11); /*0x8f2a8c*/
  v13 = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]; /*0x8f2a9d*/
  v14 = _mm_shuffle_ps(v12, v12, 0xAA); /*0x8f2aa1*/
  v14.m128_f32[0] = v14.m128_f32[0] + v13; /*0x8f2aa9*/
  v76 = v14; /*0x8f2aad*/
  v76.m128_i32[0] = fsqrt(v14.m128_f32[0]); /*0x8f2aba*/
  if ( v76.m128_f32[0] < (double)v63 ) /*0x8f2ad9*/
  {
    v15 = _mm_sub_ps(v78, v77); /*0x8f2aeb*/
    v16 = _mm_mul_ps(v15, _mm_sub_ps(v10, v77)); /*0x8f2af1*/
    if ( (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x8f2b21*/
               + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0])) > (double)*(float *)&SrcStr )
    {
      v17 = _mm_mul_ps(v15, _mm_sub_ps(v10, v78)); /*0x8f2b29*/
      if ( (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8f2b59*/
                 + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0])) < (double)*(float *)&SrcStr )
        goto LABEL_24; /*0x8f2b59*/
    }
  }
  v18 = _mm_sub_ps(a3[1], v10); /*0x8f2b94*/
  v73 = 3.4028235e38; /*0x8f2b9b*/
  v79 = v18; /*0x8f2ba3*/
  v80 = _mm_sub_ps(v78, v77); /*0x8f2bab*/
  sub_8F35D0(a3, &v79, &v77, &v80, &v73, &v74, &v75, &v82, &v83); /*0x8f2bb3*/
  v62 = v63 * v63; /*0x8f2bc3*/
  if ( v73 > (double)v62 ) /*0x8f2bd4*/
    goto LABEL_24; /*0x8f2bd4*/
  v19 = _mm_mul_ps(v80, v80); /*0x8f2be2*/
  if ( (float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x8f2c12*/
             + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0])) <= (double)flt_A9B21C )
    goto LABEL_24; /*0x8f2c12*/
  v20 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x8f2c2d*/
      + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
  v21 = 1.0 / fsqrt(v20); /*0x8f2c43*/
  v22 = 3.0 - (float)((float)(v20 * v21) * v21); /*0x8f2c6f*/
  v23 = (__m128)0x3F000000u; /*0x8f2c73*/
  v23.m128_f32[0] = 0.5 * v21; /*0x8f2c76*/
  v24 = v23; /*0x8f2c7a*/
  v24.m128_f32[0] = v23.m128_f32[0] * v22; /*0x8f2c7d*/
  v25 = _mm_shuffle_ps(v24, v24, 0); /*0x8f2c81*/
  v67 = v20 * v25.m128_f32[0]; /*0x8f2c8d*/
  v26 = _mm_mul_ps(v25, v80); /*0x8f2c99*/
  v27 = _mm_mul_ps(v79, v26); /*0x8f2c9f*/
  v85 = (__m128)0x3F000000u; /*0x8f2cc6*/
  *(float *)&v71 = -(float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] /*0x8f2cce*/
                          + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]));
  v28 = _mm_add_ps(v79, _mm_mul_ps(_mm_shuffle_ps((__m128)v71, (__m128)v71, 0), v26)); /*0x8f2cea*/
  v29 = _mm_mul_ps(v28, v28); /*0x8f2cef*/
  v30 = _mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]; /*0x8f2cf9*/
  v31 = _mm_shuffle_ps(v29, v29, 0xAA); /*0x8f2d00*/
  v32 = v31; /*0x8f2d04*/
  v32.m128_f32[0] = v31.m128_f32[0] + v30; /*0x8f2d07*/
  v76 = v32; /*0x8f2d0b*/
  v76.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0] + v30); /*0x8f2d14*/
  v87 = 0x40400000u; /*0x8f2d23*/
  v89 = v26; /*0x8f2d43*/
  v68 = v74 /*0x8f2d53*/
      - sqrt(v62 - v73)
      * (float)((float)(0.5 * v76.m128_f32[0])
              * (float)(3.0 - (float)((float)((float)(v31.m128_f32[0] + v30) * v76.m128_f32[0]) * v76.m128_f32[0])));
  if ( v68 >= (double)a4[1].m128_f32[1] ) /*0x8f2d66*/
    goto LABEL_24; /*0x8f2d66*/
  v33 = _mm_mul_ps(v77, v26); /*0x8f2d78*/
  v72 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0] /*0x8f2d95*/
      + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
  v34 = *a3; /*0x8f2da0*/
  v35 = _mm_shuffle_ps((__m128)LODWORD(v68), (__m128)LODWORD(v68), 0); /*0x8f2dad*/
  v88 = a3[1]; /*0x8f2db7*/
  v86 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v35), v34), _mm_mul_ps(v35, v88)); /*0x8f2dd2*/
  v36 = _mm_mul_ps(v86, v26); /*0x8f2dda*/
  v84 = v34; /*0x8f2e03*/
  v64 = (float)(_mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0] /*0x8f2e0b*/
              + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]))
      - v72;
  if ( v68 >= (double)*(float *)&SrcStr && v64 > (double)*(float *)&SrcStr && v64 < (double)v67 ) /*0x8f2e46*/
  {
    v61 = v64 / v67; /*0x8f2e59*/
    sub_535AA0(&v76, v61); /*0x8f2e5c*/
    v37 = _mm_shuffle_ps(v76, v76, 0); /*0x8f2e6b*/
    v38 = _mm_sub_ps(v86, _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v37), v77), _mm_mul_ps(v37, v78))); /*0x8f2e96*/
    v39 = _mm_mul_ps(v38, v38); /*0x8f2e9c*/
    v40 = _mm_shuffle_ps(v39, v39, 0x55).m128_f32[0] + v39.m128_f32[0]; /*0x8f2ea6*/
    v41 = _mm_shuffle_ps(v39, v39, 0xAA); /*0x8f2ead*/
    v42 = v41; /*0x8f2eb1*/
    v42.m128_f32[0] = v41.m128_f32[0] + v40; /*0x8f2eb4*/
    v76 = v42; /*0x8f2eb8*/
    v76.m128_f32[0] = 1.0 / fsqrt(v41.m128_f32[0] + v40); /*0x8f2ec1*/
    v43 = v85; /*0x8f2ee6*/
    v43.m128_f32[0] = (float)(v85.m128_f32[0] * v76.m128_f32[0]) /*0x8f2ef2*/
                    * (float)(*(float *)&v87
                            - (float)((float)((float)(v41.m128_f32[0] + v40) * v76.m128_f32[0]) * v76.m128_f32[0]));
    a4[1].m128_f32[1] = v68; /*0x8f2ef6*/
    v44 = ThreadLocalStoragePointer[v5]; /*0x8f2ef9*/
    *a4 = _mm_mul_ps(_mm_shuffle_ps(v43, v43, 0), v38); /*0x8f2f06*/
    a4[1].m128_i32[0] = 0xFFFFFFFF; /*0x8f2f09*/
    if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) ) /*0x8f2f1c*/
      goto LABEL_22; /*0x8f2f1c*/
    goto LABEL_23; /*0x8f2f1c*/
  }
  v45 = _mm_mul_ps(v34, v26); /*0x8f2f3e*/
  v65 = _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0] /*0x8f2f5b*/
      + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]);
  if ( v65 >= (double)v72 ) /*0x8f2f6c*/
  {
    if ( v72 + v67 >= v65 ) /*0x8f2f8e*/
      goto LABEL_24; /*0x8f2f8e*/
    v66 = 1.0; /*0x8f2f99*/
    v76 = v78; /*0x8f2fa1*/
  }
  else
  {
    v66 = -1.0; /*0x8f2f6e*/
    v76 = v77; /*0x8f2f76*/
  }
  v46 = _mm_mul_ps(_mm_sub_ps(v76, v34), v26); /*0x8f2fae*/
  v47 = (float)(_mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0] /*0x8f2fd7*/
              + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]))
      * v66
      * kTerrainLODQuadRayDirectionZ;
  v69 = v47; /*0x8f2fdd*/
  if ( v47 >= *(float *)&SrcStr ) /*0x8f2fec*/
  {
    v48 = (float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] /*0x8f3018*/
                + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]))
        * v66
        * kTerrainLODQuadRayDirectionZ;
    if ( v48 * a4[1].m128_f32[1] > v69 ) /*0x8f302c*/
    {
      v70 = v69 / v48; /*0x8f303f*/
      sub_535AA0(&v85, v70); /*0x8f304a*/
      v49 = _mm_shuffle_ps(v85, v85, 0); /*0x8f3057*/
      v50 = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v49), v84), _mm_mul_ps(v49, v88)), v76); /*0x8f3081*/
      v51 = _mm_mul_ps(v50, v50); /*0x8f3086*/
      if ( (float)(_mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0] /*0x8f30b4*/
                 + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0])) <= (double)v62 )
      {
        sub_535AA0(&v84, v66); /*0x8f30c2*/
        v52 = v84; /*0x8f30c7*/
        a4[1].m128_f32[1] = v70; /*0x8f30d3*/
        v44 = ThreadLocalStoragePointer[v5]; /*0x8f30d6*/
        *a4 = _mm_mul_ps(_mm_shuffle_ps(v52, v52, 0), v89); /*0x8f30e8*/
        a4[1].m128_i32[0] = 0xFFFFFFFF; /*0x8f30eb*/
        if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) ) /*0x8f30fe*/
        {
LABEL_22:
          v53 = v44; /*0x8f3100*/
          v54 = *(_DWORD **)(v44 + 0x1A4); /*0x8f3102*/
          *v54 = "Et"; /*0x8f3108*/
          v55 = __rdtsc(); /*0x8f310e*/
          v54[1] = v55; /*0x8f3118*/
          *(_DWORD *)(v53 + 0x1A4) = v54 + 3; /*0x8f311e*/
        }
LABEL_23:
        *a2 = 1; /*0x8f3124*/
        return a2; /*0x8f3130*/
      }
    }
  }
LABEL_24:
  v57 = ThreadLocalStoragePointer[v5]; /*0x8f3135*/
  if ( *(_DWORD *)(v57 + 0x1A4) < *(_DWORD *)(v57 + 0x1A8) ) /*0x8f3144*/
  {
    v58 = ThreadLocalStoragePointer[v5]; /*0x8f3146*/
    v59 = *(_DWORD **)(v57 + 0x1A4); /*0x8f3148*/
    *v59 = "Et"; /*0x8f314e*/
    v60 = __rdtsc(); /*0x8f3154*/
    v59[1] = v60; /*0x8f315e*/
    *(_DWORD *)(v58 + 0x1A4) = v59 + 3; /*0x8f3164*/
  }
  *a2 = 0; /*0x8f316f*/
  return a2; /*0x8f312a*/
}
