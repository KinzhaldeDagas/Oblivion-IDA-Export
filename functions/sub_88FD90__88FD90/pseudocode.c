// TES4 authoritative: basis projection helper, computes local components from basis columns and source vector without translation.
__m128 *__thiscall hkBasis_ProjectVector(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm3
  __m128 v4; // xmm5
  __m128 v6; // xmm4
  __m128 v7; // xmm0

  v3 = a2[2]; /*0x88fd99*/
  v4 = a2[1]; /*0x88fd9d*/
  v6 = _mm_shuffle_ps(v3, v3, 0x44); /*0x88fdad*/
  v7 = _mm_shuffle_ps(*a2, v4, 0x44); /*0x88fdb7*/
  *this = _mm_add_ps( /*0x88fdf6*/
            _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v7, v6, 0x88), _mm_shuffle_ps(*a3, *a3, 0)),
              _mm_mul_ps(_mm_shuffle_ps(v7, v6, 0xDD), _mm_shuffle_ps(*a3, *a3, 0x55))),
            _mm_mul_ps(
              _mm_shuffle_ps(_mm_shuffle_ps(*a2, v4, 0xEE), _mm_shuffle_ps(v3, v3, 0xEE), 0x88),
              _mm_shuffle_ps(*a3, *a3, 0xAA)));
  return a3; /*0x88fdfb*/
}
