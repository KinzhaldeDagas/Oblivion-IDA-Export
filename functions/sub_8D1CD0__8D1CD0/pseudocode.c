signed int __cdecl sub_8D1CD0(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  float v9; // [esp+8h] [ebp-8h]
  float v10; // [esp+Ch] [ebp-4h]
  unsigned int v11; // [esp+Ch] [ebp-4h]

  v4 = *a2; /*0x8d1cdc*/
  v5 = _mm_sub_ps(*a3, *a2); /*0x8d1cf1*/
  v6 = _mm_mul_ps(v5, _mm_sub_ps(*a1, *a2)); /*0x8d1cf7*/
  v9 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x8d1d14*/
  v7 = _mm_mul_ps(v5, v5); /*0x8d1d25*/
  v10 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]); /*0x8d1d47*/
  if ( v9 > (double)*(float *)&SrcStr ) /*0x8d1d4b*/
  {
    if ( v9 < (double)v10 ) /*0x8d1d69*/
    {
      *(float *)&v11 = v9 / v10; /*0x8d1d8a*/
      *a4 = _mm_add_ps(v4, _mm_mul_ps(_mm_shuffle_ps((__m128)v11, (__m128)v11, 0), v5)); /*0x8d1da1*/
      return 0; /*0x8d1d88*/
    }
    else
    {
      *a4 = _mm_add_ps(v4, v5); /*0x8d1d71*/
      return 4; /*0x8d1d74*/
    }
  }
  else
  {
    *a4 = v4; /*0x8d1d50*/
    return 8; /*0x8d1d53*/
  }
}
