void __thiscall sub_911060(float *this, __m128 *a2, __m128 *a3, __m128 *a4, int a5, int a6)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  double v11; // st7
  double v12; // st6
  __m128 v13; // xmm0
  __m128 v14; // xmm2
  __m128 v15; // xmm1
  __m128 v16; // xmm0
  double v17; // st7
  double v18; // st6
  float v19; // [esp+4h] [ebp-40h]
  float v20; // [esp+4h] [ebp-40h]
  float v21; // [esp+4h] [ebp-40h]
  float v22; // [esp+4h] [ebp-40h]
  unsigned int v23; // [esp+8h] [ebp-3Ch]
  float v24; // [esp+8h] [ebp-3Ch]
  float v25; // [esp+Ch] [ebp-38h]
  unsigned int v26; // [esp+Ch] [ebp-38h]
  int v27; // [esp+10h] [ebp-34h]
  __m128 v28; // [esp+14h] [ebp-30h]
  __m128 v29; // [esp+14h] [ebp-30h]
  __m128 v30; // [esp+24h] [ebp-20h] BYREF
  float v31; // [esp+34h] [ebp-10h]
  int v32; // [esp+38h] [ebp-Ch]
  float v33; // [esp+3Ch] [ebp-8h]

  v6 = *a3;
  v7 = *a2;
  v28 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0xC9), _mm_shuffle_ps(v6, v6, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xD2), _mm_shuffle_ps(v6, v6, 0xC9)));
  v9 = _mm_mul_ps(v28, v28);
  v25 = -*(this + 0x1C);
  v19 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
  if ( v19 >= (double)flt_A9CCAC )
  {
    v10 = _mm_mul_ps(v7, v6);
    v20 = sqrt(v19);
    v11 = sub_8ECBB0(
            v20,
            _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]));
    v12 = fConstant_1 / v20;
    v31 = v25;
    v32 = 0x42C80000;
    *(float *)&v23 = v12;
    v33 = -v11;
    v30 = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), v28);
    sub_8F1B60(&v30, a5, a6);
  }
  v13 = *a2;
  v14 = *a4;
  v29 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(*a2, *a2, 0xC9), _mm_shuffle_ps(*a4, *a4, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0xD2), _mm_shuffle_ps(v14, v14, 0xC9)));
  v15 = _mm_mul_ps(v29, v29);
  v27 = *((_DWORD *)this + 0x1E);
  v21 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
      + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
  v24 = *(this + 0x1D);
  if ( v21 >= (double)flt_A9CCAC )
  {
    v16 = _mm_mul_ps(v13, v14);
    v22 = sqrt(v21);
    v17 = sub_8ECBB0(
            _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]),
            v22);
    v18 = fConstant_1 / v22;
    v31 = v24;
    v32 = v27;
    *(float *)&v26 = v18;
    v33 = v17;
    v30 = _mm_mul_ps(_mm_shuffle_ps((__m128)v26, (__m128)v26, 0), v29);
    sub_8F1B60(&v30, a5, a6);
  }
}
