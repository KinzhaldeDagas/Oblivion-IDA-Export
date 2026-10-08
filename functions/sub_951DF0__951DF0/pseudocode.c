void __thiscall sub_951DF0(__m128 *this, __m128 *a2, __m128 *a3, __m128 *a4, float *a5)
{
  __m128 v6; // xmm0
  float v7; // xmm4_4
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __int32 v10; // edx
  float v11; // [esp+10h] [ebp-54h]
  __m128 v12; // [esp+14h] [ebp-50h] BYREF
  __m128 v13[3]; // [esp+24h] [ebp-40h] BYREF
  __int32 v14; // [esp+54h] [ebp-10h]

  v12 = _mm_xor_ps(*a2, (__m128)xmmword_A965C0); /*0x951e14*/
  sub_951D00(this, a2, v13); /*0x951e19*/
  sub_951D00(this, &v12, a4); /*0x951e29*/
  v6 = _mm_mul_ps(_mm_sub_ps(v13[0], *a3), *a2); /*0x951e42*/
  v7 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x951e5a*/
  v8 = _mm_mul_ps(_mm_sub_ps(*a4, *a3), v12); /*0x951e66*/
  v11 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]); /*0x951e8f*/
  if ( v7 < (double)v11 ) /*0x951e9c*/
  {
    *a5 = v11; /*0x951ed4*/
  }
  else
  {
    v9 = v13[1]; /*0x951e9e*/
    v10 = v14; /*0x951ea7*/
    *a4 = v13[0]; /*0x951eae*/
    a4[1] = v9; /*0x951eb1*/
    a4[2] = v13[2]; /*0x951eba*/
    a4[3].m128_i32[0] = v10; /*0x951ebe*/
    *a5 = v7; /*0x951ec1*/
  }
}
