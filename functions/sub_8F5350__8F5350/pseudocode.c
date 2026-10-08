char *__thiscall sub_8F5350(char *this, char *a2, __m128 *a3, __m128 *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // edi
  _DWORD *v7; // esi
  unsigned __int64 v8; // rax
  char v9; // bl
  __int32 v10; // edi
  float *v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm2
  __m128 v14; // xmm1
  __m128 v15; // xmm0
  __m128 v16; // xmm3
  __m128 v17; // xmm0
  double v18; // st7
  __m128 v19; // xmm0
  long double v20; // st7
  long double v21; // st7
  double v22; // st7
  double v23; // st7
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  double v26; // st7
  int v27; // eax
  int v28; // esi
  _DWORD *v29; // ecx
  unsigned __int64 v30; // rax
  float v32; // [esp+Ch] [ebp-34h]
  float v33; // [esp+Ch] [ebp-34h]
  unsigned int v34; // [esp+Ch] [ebp-34h]
  unsigned int v35; // [esp+Ch] [ebp-34h]
  float v36; // [esp+10h] [ebp-30h]
  float v38; // [esp+18h] [ebp-28h]
  float v39; // [esp+1Ch] [ebp-24h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f5364*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f536b*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8f537c*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f537e*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8f5380*/
    *v7 = "TtrcMultiSpher"; /*0x8f5386*/
    v8 = __rdtsc(); /*0x8f538c*/
    v7[1] = v8; /*0x8f5396*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8f539c*/
  }
  v9 = 0; /*0x8f53a9*/
  v10 = 0; /*0x8f53ab*/
  if ( *((int *)this + 3) > 0 ) /*0x8f53af*/
  {
    v11 = (float *)(this + 0x1C); /*0x8f53b8*/
    do /*0x8f5585*/
    {
      v12 = *(__m128 *)(v11 + 0xFFFFFFFD); /*0x8f53c3*/
      v13 = _mm_sub_ps(a3[1], v12); /*0x8f5400*/
      v14 = _mm_sub_ps(*a3, v12); /*0x8f5410*/
      v15 = _mm_mul_ps(v14, v14); /*0x8f5416*/
      v16 = _mm_sub_ps(v13, v14); /*0x8f5432*/
      v39 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x8f5439*/
          + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
      v17 = _mm_mul_ps(v16, v14); /*0x8f5440*/
      v38 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8f545d*/
          + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
      v18 = v38 + v38; /*0x8f5465*/
      v32 = v18; /*0x8f5471*/
      if ( v18 < *(float *)&SrcStr ) /*0x8f5480*/
      {
        v19 = _mm_mul_ps(v16, v16); /*0x8f548f*/
        v36 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x8f54b8*/
            + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
        v20 = v32 * v32 - (v39 - *v11 * *v11) * v36 * flt_A46B10; /*0x8f54c8*/
        if ( v20 > *(float *)&SrcStr ) /*0x8f54d5*/
        {
          v21 = (-v32 - sqrt(v20)) * kHeadBodyNormalMatchRadius; /*0x8f54eb*/
          v33 = v21; /*0x8f54f1*/
          if ( v21 < v36 && v33 >= (double)*(float *)&SrcStr ) /*0x8f550f*/
          {
            v22 = v33 / v36; /*0x8f5515*/
            if ( v22 < a4[1].m128_f32[1] ) /*0x8f5521*/
            {
              a4[1].m128_f32[1] = v22; /*0x8f5523*/
              v9 = 1; /*0x8f5526*/
              *(float *)&v34 = v22; /*0x8f5528*/
              v23 = fConstant_1; /*0x8f5532*/
              v24 = _mm_shuffle_ps((__m128)v34, (__m128)v34, 0); /*0x8f5538*/
              v25 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), v14), _mm_mul_ps(v24, v13)); /*0x8f5552*/
              *a4 = v25; /*0x8f5555*/
              v26 = v23 / *v11; /*0x8f5558*/
              a4[1].m128_i32[0] = v10; /*0x8f555a*/
              *(float *)&v35 = v26; /*0x8f555d*/
              *a4 = _mm_mul_ps(_mm_shuffle_ps((__m128)v35, (__m128)v35, 0), v25); /*0x8f5571*/
            }
          }
        }
      }
      ++v10; /*0x8f557f*/
      v11 += 4; /*0x8f5580*/
    }
    while ( v10 < *((_DWORD *)this + 3) ); /*0x8f5585*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f558b*/
  }
  v27 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f5598*/
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8f55a7*/
  {
    v28 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f55a9*/
    v29 = *(_DWORD **)(v27 + 0x1A4); /*0x8f55ab*/
    *v29 = "Et"; /*0x8f55b1*/
    v30 = __rdtsc(); /*0x8f55b7*/
    v29[1] = v30; /*0x8f55c1*/
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x8f55c7*/
  }
  *a2 = v9; /*0x8f55d2*/
  return a2; /*0x8f55d0*/
}
