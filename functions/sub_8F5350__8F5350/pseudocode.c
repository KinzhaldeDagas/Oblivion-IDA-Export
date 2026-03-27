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
  __m128 v40; // [esp+30h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtrcMultiSpher";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = 0;
  v10 = 0;
  if ( *((int *)this + 3) > 0 )
  {
    v11 = (float *)(this + 0x1C);
    do
    {
      v12 = *(__m128 *)(v11 + 0xFFFFFFFD);
      v40.m128_u64[0] = a3->m128_u64[0];
      v13 = _mm_sub_ps(a3[1], v12);
      v40.m128_u64[1] = a3->m128_u64[1];
      v14 = _mm_sub_ps(v40, v12);
      v15 = _mm_mul_ps(v14, v14);
      v16 = _mm_sub_ps(v13, v14);
      v39 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
      v17 = _mm_mul_ps(v16, v14);
      v38 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
      v18 = v38 + v38;
      v32 = v18;
      if ( v18 < *(float *)&SrcStr )
      {
        v19 = _mm_mul_ps(v16, v16);
        v36 = _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]);
        v20 = v32 * v32 - (v39 - *v11 * *v11) * v36 * flt_A46B10;
        if ( v20 > *(float *)&SrcStr )
        {
          v21 = (-v32 - sqrt(v20)) * flt_A3D65C;
          v33 = v21;
          if ( v21 < v36 && v33 >= (double)*(float *)&SrcStr )
          {
            v22 = v33 / v36;
            if ( v22 < a4[1].m128_f32[1] )
            {
              a4[1].m128_f32[1] = v22;
              v9 = 1;
              *(float *)&v34 = v22;
              v23 = fConstant_1;
              v24 = _mm_shuffle_ps((__m128)v34, (__m128)v34, 0);
              v25 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v24), v14), _mm_mul_ps(v24, v13));
              *a4 = v25;
              v26 = v23 / *v11;
              a4[1].m128_i32[0] = v10;
              *(float *)&v35 = v26;
              *a4 = _mm_mul_ps(_mm_shuffle_ps((__m128)v35, (__m128)v35, 0), v25);
            }
          }
        }
      }
      ++v10;
      v11 += 4;
    }
    while ( v10 < *((_DWORD *)this + 3) );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  v27 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
    v28 = ThreadLocalStoragePointer[TlsIndex];
    v29 = *(_DWORD **)(v27 + 0x1A4);
    *v29 = "Et";
    v30 = __rdtsc();
    v29[1] = v30;
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
  }
  *a2 = v9;
  return a2;
}
