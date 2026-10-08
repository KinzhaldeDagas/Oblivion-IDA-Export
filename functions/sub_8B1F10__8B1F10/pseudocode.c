int __thiscall sub_8B1F10(__m128 *this, __m128 *a2)
{
  int result; // eax
  __m128 v4; // xmm0

  result = sub_8D2860(this, a2); /*0x8b1f21*/
  v4 = _mm_xor_ps(a2[3], (__m128)xmmword_A965C0); /*0x8b1f39*/
  *(this + 3) = _mm_add_ps( /*0x8b1f64*/
                  _mm_add_ps(
                    _mm_mul_ps(*this, _mm_shuffle_ps(v4, v4, 0)),
                    _mm_mul_ps(*(this + 1), _mm_shuffle_ps(v4, v4, 0x55))),
                  _mm_mul_ps(*(this + 2), _mm_shuffle_ps(v4, v4, 0xAA)));
  return result; /*0x8b1f63*/
}
