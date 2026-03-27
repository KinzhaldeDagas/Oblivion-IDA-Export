void __thiscall sub_938060(__m128 *this, __m128 *a2)
{
  __int32 v2; // eax
  __m128 v3; // xmm0
  __m128 v4; // xmm1
  __m128 v5; // xmm3
  __m128 v6; // xmm5
  __m128 v7; // xmm4
  __m128 v8; // xmm1
  __m128 v9; // xmm1
  __m128 v10; // [esp+1Ch] [ebp-10h]

  v2 = 0x10 * (a2[3].m128_i32[3] + 2);
  v10 = 0;
  v10.m128_i32[a2[3].m128_i32[2]] = 0x3F800000;
  v3 = _mm_sub_ps(
         _mm_mul_ps(
           _mm_shuffle_ps(v10, v10, 0xC9),
           _mm_shuffle_ps(*(__m128 *)((char *)this + v2), *(__m128 *)((char *)this + v2), 0xD2)),
         _mm_mul_ps(
           _mm_shuffle_ps(v10, v10, 0xD2),
           _mm_shuffle_ps(*(__m128 *)((char *)this + v2), *(__m128 *)((char *)this + v2), 0xC9)));
  v4 = _mm_mul_ps(v3, *(this + 0xC));
  if ( (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0])) < (double)*(float *)&SrcStr )
    v3 = _mm_xor_ps(v3, (__m128)xmmword_A965C0);
  v5 = *(this + 4);
  v6 = *(this + 3);
  v7 = _mm_shuffle_ps(v5, v5, 0x44);
  v8 = _mm_shuffle_ps(*(this + 2), v6, 0x44);
  v9 = _mm_add_ps(
         _mm_add_ps(
           _mm_mul_ps(_mm_shuffle_ps(v8, v7, 0x88), _mm_shuffle_ps(v3, v3, 0)),
           _mm_mul_ps(_mm_shuffle_ps(v8, v7, 0xDD), _mm_shuffle_ps(v3, v3, 0x55))),
         _mm_mul_ps(
           _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v6, 0xEE), _mm_shuffle_ps(v5, v5, 0xEE), 0x88),
           _mm_shuffle_ps(v3, v3, 0xAA)));
  *a2 = v3;
  a2[1] = v9;
}
