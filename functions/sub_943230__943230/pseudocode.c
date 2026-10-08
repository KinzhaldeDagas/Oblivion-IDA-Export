float *__cdecl sub_943230(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4, __m128 *a5, float *a6)
{
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm2
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  long double v16; // st7
  float v18; // [esp+8h] [ebp-18h]
  unsigned int v19; // [esp+8h] [ebp-18h]
  __m128 v20; // [esp+10h] [ebp-10h]

  v6 = *a2; /*0x94323c*/
  v7 = _mm_add_ps(*a2, *a1); /*0x943248*/
  v8 = _mm_mul_ps(v7, v7); /*0x94324e*/
  v18 = fsqrt(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] /*0x943282*/
                                                               + v8.m128_f32[0]));
  if ( v18 > (double)flt_A9CCB4 ) /*0x943295*/
  {
    *(float *)&v19 = fConstant_1 / v18; /*0x9432a1*/
    v6 = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v7); /*0x9432b2*/
  }
  v20 = v6; /*0x9432b5*/
  v9 = _mm_shuffle_ps(v6, v6, 0xD2); /*0x9432d2*/
  v10 = _mm_shuffle_ps(v6, v6, 0xC9); /*0x9432dd*/
  v11 = _mm_sub_ps(_mm_mul_ps(v10, _mm_shuffle_ps(*a4, *a4, 0xD2)), _mm_mul_ps(v9, _mm_shuffle_ps(*a4, *a4, 0xC9))); /*0x9432f4*/
  v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), v10); /*0x9432fe*/
  v13 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), v9); /*0x943308*/
  v14 = _mm_mul_ps(v11, *a3); /*0x943311*/
  v15 = _mm_mul_ps(_mm_sub_ps(v13, v12), *a3); /*0x94331a*/
  v16 = sub_8ECBB0( /*0x943360*/
          _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]),
          _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]));
  *a6 = v16; /*0x94336b*/
  *a5 = v20; /*0x943375*/
  return a6; /*0x943378*/
}
