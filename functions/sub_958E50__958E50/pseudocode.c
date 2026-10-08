float *__thiscall sub_958E50(void *this)
{
  __m128 v1; // xmm1
  __m128 *v2; // eax
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  float v7; // xmm2_4
  __m128 v8; // xmm3
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  float v14; // [esp+Ch] [ebp-14h] BYREF
  __m128 v15; // [esp+10h] [ebp-10h]

  v1 = *(__m128 *)*((_DWORD *)this + 9); /*0x958e5c*/
  v2 = *((__m128 **)this + 5); /*0x958e5f*/
  v3 = _mm_sub_ps(*v2, v1); /*0x958e6b*/
  v4 = _mm_sub_ps(v1, *(__m128 *)*((_DWORD *)this + 0xD)); /*0x958e6e*/
  v5 = _mm_sub_ps( /*0x958e93*/
         _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), _mm_shuffle_ps(v4, v4, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v4, v4, 0xC9)));
  v6 = _mm_mul_ps(v5, v5); /*0x958e99*/
  v7 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]; /*0x958ea3*/
  v8 = _mm_shuffle_ps(v6, v6, 0xAA); /*0x958eaa*/
  v9 = v8; /*0x958eae*/
  v9.m128_f32[0] = v8.m128_f32[0] + v7; /*0x958eb1*/
  v15 = v9; /*0x958eb5*/
  v15.m128_f32[0] = 1.0 / fsqrt(v8.m128_f32[0] + v7); /*0x958ebe*/
  v14 = 0.5; /*0x958ee3*/
  v10 = (__m128)0x3F000000u; /*0x958eeb*/
  v10.m128_f32[0] = (float)(0.5 * v15.m128_f32[0]) /*0x958ef5*/
                  * (float)(3.0 - (float)((float)((float)(v8.m128_f32[0] + v7) * v15.m128_f32[0]) * v15.m128_f32[0]));
  *(__m128 *)this = v5; /*0x958f00*/
  v11 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v5); /*0x958f06*/
  *(__m128 *)this = v11; /*0x958f09*/
  v12 = _mm_mul_ps(v11, *v2); /*0x958f0f*/
  v14 = _mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x958f2c*/
      + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]);
  *((float *)this + 4) = v14; /*0x958f34*/
  return &v14; /*0x958f37*/
}
