int __thiscall sub_8D28B0(__m128 *this, float a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm1
  __m128 v4; // xmm3
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  __m128 v7; // xmm4
  __m128 v8; // xmm5
  __m128 v9; // xmm2
  __m128 v10; // xmm5
  __m128 v11; // xmm0
  float v12; // xmm6_4
  __m128 v13; // xmm1
  __m128 v14; // xmm3
  __m128 v15; // xmm2
  __m128 v16; // xmm4
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  double v19; // st7
  double v20; // st7
  double v21; // st7
  __m128 v23; // [esp+10h] [ebp-20h]
  __m128 v24; // [esp+20h] [ebp-10h]

  v2 = *(this + 2); /*0x8d28b9*/
  v3 = *(this + 1); /*0x8d28bd*/
  v4 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xD2), _mm_shuffle_ps(v2, v2, 0xC9)); /*0x8d28cf*/
  v5 = _mm_shuffle_ps(v2, v2, 0xD2); /*0x8d28d5*/
  v6 = v3; /*0x8d28e3*/
  v24 = _mm_shuffle_ps(v6, v6, 0xD2); /*0x8d28ee*/
  v7 = *(this + 2); /*0x8d28f3*/
  v23 = _mm_shuffle_ps(v6, v6, 0xC9); /*0x8d2901*/
  v8 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0xC9), v5); /*0x8d2906*/
  v9 = *this; /*0x8d2909*/
  v10 = _mm_sub_ps(v8, v4); /*0x8d290c*/
  v11 = _mm_mul_ps(*this, v10); /*0x8d290f*/
  v12 = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x8d292b*/
      + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v13 = _mm_shuffle_ps(v9, v9, 0xD2); /*0x8d2945*/
  v14 = _mm_shuffle_ps(v7, v7, 0xC9); /*0x8d2949*/
  v15 = _mm_shuffle_ps(v9, v9, 0xC9); /*0x8d2950*/
  v16 = _mm_shuffle_ps(v7, v7, 0xD2); /*0x8d2954*/
  if ( a2 * a2 * a2 >= fabs(v12) ) /*0x8d295f*/
    return 1; /*0x8d29d3*/
  v17 = (__m128)0x3F800000u; /*0x8d2971*/
  v17.m128_f32[0] = 1.0 / v12; /*0x8d2977*/
  v18 = _mm_shuffle_ps(v17, v17, 0); /*0x8d297b*/
  *this = _mm_mul_ps(v18, v10); /*0x8d2993*/
  *(this + 1) = _mm_mul_ps(v18, _mm_sub_ps(_mm_mul_ps(v14, v13), _mm_mul_ps(v16, v15))); /*0x8d2999*/
  *(this + 2) = _mm_mul_ps(v18, _mm_sub_ps(_mm_mul_ps(v15, v24), _mm_mul_ps(v13, v23))); /*0x8d29a3*/
  v19 = *((float *)this + 4); /*0x8d29a7*/
  *((_DWORD *)this + 4) = this->m128_i32[1]; /*0x8d29ad*/
  this->m128_f32[1] = v19; /*0x8d29b0*/
  v20 = *((float *)this + 8); /*0x8d29b6*/
  *((_DWORD *)this + 8) = this->m128_i32[2]; /*0x8d29b9*/
  this->m128_f32[2] = v20; /*0x8d29bc*/
  v21 = *((float *)this + 9); /*0x8d29c2*/
  *((_DWORD *)this + 9) = *((_DWORD *)this + 6); /*0x8d29c5*/
  *((float *)this + 6) = v21; /*0x8d29c8*/
  return 0; /*0x8d29cd*/
}
