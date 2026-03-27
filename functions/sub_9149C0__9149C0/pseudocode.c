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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = TlsIndex;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  v53 = a1;
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtrcTriangle";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
    a1 = v53;
  }
  v11 = a1[1];
  v12 = a1[2];
  v58 = a1[3];
  v13 = _mm_sub_ps(v58, v11);
  v14 = _mm_sub_ps(v12, v11);
  v15 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9)));
  v16 = _mm_mul_ps(v11, v15);
  v56 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
  v17 = _mm_mul_ps(v15, *a4);
  v18 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
  v19 = a4[1];
  v20 = _mm_mul_ps(v15, v19);
  v52 = v18 - v56;
  v21 = (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]))
      - v56;
  v54 = v21;
  if ( v21 * v52 >= *(float *)&SrcStr && (v52 != *(float *)&SrcStr || v54 == *(float *)&SrcStr) )
  {
    v22 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
      goto LABEL_18;
    goto LABEL_19;
  }
  v57 = v52 / (v52 - v54);
  if ( v57 >= (double)a5[1].m128_f32[1] )
    goto LABEL_17;
  v23 = _mm_mul_ps(v15, v15);
  v24 = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
  v25 = _mm_shuffle_ps((__m128)LODWORD(v57), (__m128)LODWORD(v57), 0);
  v26 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v25), *a4), _mm_mul_ps(v25, v19));
  v27 = _mm_sub_ps(v11, v26);
  v28 = _mm_sub_ps(v12, v26);
  v29 = _mm_shuffle_ps(v27, v27, 0xD2);
  v30 = _mm_shuffle_ps(v28, v28, 0xC9);
  v60 = _mm_shuffle_ps(v27, v27, 0xC9);
  v31 = _mm_shuffle_ps(v28, v28, 0xD2);
  v55 = v24 * flt_A906F4;
  v32 = _mm_mul_ps(_mm_sub_ps(_mm_mul_ps(v60, v31), _mm_mul_ps(v29, v30)), v15);
  if ( (float)(_mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
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
    v22 = ThreadLocalStoragePointer[v6];
    if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
    {
LABEL_18:
      v49 = ThreadLocalStoragePointer[v6];
      v50 = *(_DWORD **)(v22 + 0x1A4);
      *v50 = "Et";
      v51 = __rdtsc();
      v50[1] = v51;
      *(_DWORD *)(v49 + 0x1A4) = v50 + 3;
    }
LABEL_19:
    *a3 = 0;
    return a3;
  }
  v38 = v52 < (double)*(float *)&SrcStr;
  v39 = v52 == *(float *)&SrcStr;
  a5[1].m128_f32[1] = v57;
  if ( v38 || v39 )
    v15 = _mm_xor_ps(v15, (__m128)xmmword_A965C0);
  *a5 = v15;
  v40 = ThreadLocalStoragePointer[v6];
  v41 = _mm_mul_ps(*a5, *a5);
  v42 = _mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0];
  v43 = _mm_shuffle_ps(v41, v41, 0xAA).m128_f32[0];
  v59 = 1.0 / fsqrt(v43 + v42);
  v44 = (__m128)0x3F000000u;
  v44.m128_f32[0] = (float)(0.5 * v59) * (float)(3.0 - (float)((float)((float)(v43 + v42) * v59) * v59));
  *a5 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), *a5);
  a5[1].m128_i32[0] = 0xFFFFFFFF;
  if ( *(_DWORD *)(v40 + 0x1A4) < *(_DWORD *)(v40 + 0x1A8) )
  {
    v45 = v40;
    v46 = *(_DWORD **)(v40 + 0x1A4);
    *v46 = "Et";
    v47 = __rdtsc();
    v46[1] = v47;
    *(_DWORD *)(v45 + 0x1A4) = v46 + 3;
  }
  *a3 = 1;
  return a3;
}
