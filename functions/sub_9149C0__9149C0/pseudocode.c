_BYTE *__fastcall sub_9149C0(__m128 *a1, int a2, _BYTE *a3, __m128 *a4, __m128 *a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ecx
  _DWORD *v9; // ebx
  unsigned __int64 v10; // rax
  __m128 v11; // xmm2
  __m128 v12; // xmm4
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  __m128 v17; // xmm1
  float v18; // xmm6_4
  __m128 v19; // xmm5
  __m128 v20; // xmm1
  double v21; // st7
  int v22; // eax
  __m128 v23; // xmm1
  float v24; // xmm7_4
  __m128 v25; // xmm1
  __m128 v26; // xmm5
  __m128 v27; // xmm2
  __m128 v28; // xmm4
  __m128 v29; // xmm6
  __m128 v30; // xmm3
  __m128 v31; // xmm4
  __m128 v32; // xmm1
  __m128 v33; // xmm1
  __m128 v34; // xmm2
  __m128 v35; // xmm5
  __m128 v36; // xmm1
  __m128 v37; // xmm1
  bool v38; // c0
  bool v39; // c3
  int v40; // eax
  __m128 v41; // xmm0
  float v42; // xmm2_4
  float v43; // xmm3_4
  __m128 v44; // xmm0
  int v45; // esi
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  int v49; // esi
  _DWORD *v50; // ecx
  unsigned __int64 v51; // rax
  float v52; // [esp+10h] [ebp-30h]
  __m128 *v53; // [esp+14h] [ebp-2Ch]
  float v54; // [esp+14h] [ebp-2Ch]
  float v55; // [esp+14h] [ebp-2Ch]
  float v56; // [esp+18h] [ebp-28h]
  float v57; // [esp+18h] [ebp-28h]
  __m128 v58; // [esp+20h] [ebp-20h]
  float v59; // [esp+20h] [ebp-20h]
  __m128 v60; // [esp+30h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9149cb*/
  v6 = MEMORY[0xBA9DE4]; /*0x9149d3*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9149d9*/
  v53 = a1; /*0x9149e8*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x9149ec*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9149ee*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x9149f0*/
    *v9 = "TtrcTriangle"; /*0x9149f6*/
    v10 = __rdtsc(); /*0x9149fc*/
    v9[1] = v10; /*0x914a06*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x914a0c*/
    a1 = v53; /*0x914a12*/
  }
  v11 = a1[1]; /*0x914a16*/
  v12 = a1[2]; /*0x914a1e*/
  v58 = a1[3]; /*0x914a25*/
  v13 = _mm_sub_ps(v58, v11); /*0x914a2a*/
  v14 = _mm_sub_ps(v12, v11); /*0x914a37*/
  v15 = _mm_sub_ps( /*0x914a58*/
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
  v16 = _mm_mul_ps(v11, v15); /*0x914a5e*/
  v56 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x914a7e*/
      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v17 = _mm_mul_ps(v15, *a4); /*0x914a85*/
  v18 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x914a9a*/
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v19 = a4[1]; /*0x914a9e*/
  v20 = _mm_mul_ps(v15, v19); /*0x914ab5*/
  v52 = v18 - v56; /*0x914abb*/
  v21 = (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x914ade*/
              + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]))
      - v56;
  v54 = v21; /*0x914ae2*/
  if ( v21 * v52 >= *(float *)&SrcStr && (v52 != *(float *)&SrcStr || v54 == *(float *)&SrcStr) ) /*0x914b1b*/
  {
    v22 = ThreadLocalStoragePointer[v6]; /*0x914b1d*/
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x914b2c*/
      goto LABEL_18; /*0x914b2c*/
    goto LABEL_19; /*0x914b2c*/
  }
  v57 = v52 / (v52 - v54); /*0x914b5e*/
  if ( v57 >= (double)a5[1].m128_f32[1] ) /*0x914b6e*/
    goto LABEL_17; /*0x914b6e*/
  v23 = _mm_mul_ps(v15, v15); /*0x914b7b*/
  v24 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0] /*0x914b90*/
      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
  v25 = _mm_shuffle_ps((__m128)LODWORD(v57), (__m128)LODWORD(v57), 0); /*0x914b9e*/
  v26 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v25), *a4), _mm_mul_ps(v25, v19)); /*0x914bb5*/
  v27 = _mm_sub_ps(v11, v26); /*0x914bb8*/
  v28 = _mm_sub_ps(v12, v26); /*0x914bc5*/
  v29 = _mm_shuffle_ps(v27, v27, 0xD2); /*0x914bc8*/
  v30 = _mm_shuffle_ps(v28, v28, 0xC9); /*0x914be1*/
  v60 = _mm_shuffle_ps(v27, v27, 0xC9); /*0x914be5*/
  v31 = _mm_shuffle_ps(v28, v28, 0xD2); /*0x914bea*/
  v55 = v24 * flt_A906F4; /*0x914bf1*/
  v32 = _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(v60, v31), _mm_mul_ps(v29, v30)), v15); /*0x914bfe*/
  if ( (float)(_mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0] /*0x914cc4*/
             + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0])) < (double)v55
    || (v33 = _mm_sub_ps(v58, v26),
        v34 = _mm_shuffle_ps(v33, v33, 0xC9),
        v35 = _mm_shuffle_ps(v33, v33, 0xD2),
        v36 = _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(v30, v35), _mm_mul_ps(v31, v34)), v15),
        (float)(_mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0])) < (double)v55)
    || (v37 = _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(v34, v29), _mm_mul_ps(v35, v60)), v15),
        (float)(_mm_shuffle_ps(v37, v37, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v37, v37, 0x55).m128_f32[0] + v37.m128_f32[0])) < (double)v55) )
  {
LABEL_17:
    v22 = ThreadLocalStoragePointer[v6]; /*0x914dad*/
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x914dbc*/
    {
LABEL_18:
      v49 = ThreadLocalStoragePointer[v6]; /*0x914dbe*/
      v50 = *(_DWORD **)(v22 + 0x1A4); /*0x914dc0*/
      *v50 = "Et"; /*0x914dc6*/
      v51 = __rdtsc(); /*0x914dcc*/
      v50[1] = v51; /*0x914dd6*/
      *(_DWORD *)(v49 + 0x1A4) = v50 + 3; /*0x914ddc*/
    }
LABEL_19:
    *a3 = 0; /*0x914de2*/
    return a3; /*0x914de2*/
  }
  v38 = v52 < (double)*(float *)&SrcStr; /*0x914cd2*/
  v39 = v52 == *(float *)&SrcStr; /*0x914cd2*/
  a5[1].m128_f32[1] = v57; /*0x914cd8*/
  if ( v38 || v39 ) /*0x914cdd*/
    v15 = _mm_xor_ps(v15, (__m128)xmmword_A965C0); /*0x914ce9*/
  *a5 = v15; /*0x914cec*/
  v40 = ThreadLocalStoragePointer[v6]; /*0x914cf2*/
  v41 = _mm_mul_ps(*a5, *a5); /*0x914cf8*/
  v42 = _mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0]; /*0x914d02*/
  v43 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0]; /*0x914d09*/
  v59 = 1.0 / fsqrt(v43 + v42); /*0x914d1d*/
  v44 = (__m128)0x3F000000u; /*0x914d4a*/
  v44.m128_f32[0] = (float)(0.5 * v59) * (float)(3.0 - (float)((float)((float)(v43 + v42) * v59) * v59)); /*0x914d54*/
  *a5 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), *a5); /*0x914d62*/
  a5[1].m128_i32[0] = 0xFFFFFFFF; /*0x914d65*/
  if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) ) /*0x914d78*/
  {
    v45 = v40; /*0x914d7a*/
    v46 = *(_DWORD **)(v40 + 0x1A4); /*0x914d7c*/
    *v46 = "Et"; /*0x914d82*/
    v47 = __rdtsc(); /*0x914d88*/
    v46[1] = v47; /*0x914d92*/
    *(_DWORD *)(v45 + 0x1A4) = v46 + 3; /*0x914d98*/
  }
  *a3 = 1; /*0x914da1*/
  return a3; /*0x914da4*/
}
