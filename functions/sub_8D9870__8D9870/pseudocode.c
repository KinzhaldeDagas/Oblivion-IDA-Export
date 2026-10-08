__int32 __thiscall sub_8D9870(__m128 *this, __m128 *a2, __int32 a3)
{
  __m128 v3; // xmm0

  *(this + 1) = *a2; /*0x8d987f*/
  v3 = _mm_mul_ps(*a2, *a2); /*0x8d9886*/
  *((float *)this + 9) = fsqrt( /*0x8d98c5*/
                           _mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]));
  this->m128_i32[2] = a3; /*0x8d98c8*/
  return a3; /*0x8d98cb*/
}
