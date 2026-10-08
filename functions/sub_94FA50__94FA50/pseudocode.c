int __cdecl sub_94FA50(__m128 *a1, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 v4; // xmm0

  v4 = _mm_add_ps( /*0x94fa9c*/
         _mm_add_ps(
           _mm_mul_ps(a1[0xE], _mm_shuffle_ps(*a2, *a2, 0)),
           _mm_mul_ps(a1[0xF], _mm_shuffle_ps(*a2, *a2, 0x55))),
         _mm_mul_ps(a1[0x10], _mm_shuffle_ps(*a2, *a2, 0xAA)));
  *a3 = _mm_add_ps(*a3, _mm_mul_ps(_mm_shuffle_ps((__m128)a1[6].m128_u32[0], (__m128)a1[6].m128_u32[0], 0), v4)); /*0x94fabc*/
  *a4 = _mm_sub_ps(*a4, _mm_mul_ps(_mm_shuffle_ps((__m128)a1[0xD].m128_u32[0], (__m128)a1[0xD].m128_u32[0], 0), v4)); /*0x94fae2*/
  a3[1] = _mm_add_ps( /*0x94fb1f*/
            a3[1],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(a1[3], _mm_shuffle_ps(*a2, *a2, 0)),
                _mm_mul_ps(a1[4], _mm_shuffle_ps(*a2, *a2, 0x55))),
              _mm_mul_ps(a1[5], _mm_shuffle_ps(*a2, *a2, 0xAA))));
  a4[1] = _mm_sub_ps( /*0x94fb68*/
            a4[1],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(a1[0xA], _mm_shuffle_ps(*a2, *a2, 0)),
                _mm_mul_ps(a1[0xB], _mm_shuffle_ps(*a2, *a2, 0x55))),
              _mm_mul_ps(a1[0xC], _mm_shuffle_ps(*a2, *a2, 0xAA))));
  a3[1].m128_i32[3] = 0; /*0x94fb6c*/
  a4[1].m128_i32[3] = 0; /*0x94fb6f*/
  a3->m128_i32[3] = 0; /*0x94fb72*/
  a4->m128_i32[3] = 0; /*0x94fb75*/
  return 0; /*0x94fb79*/
}
