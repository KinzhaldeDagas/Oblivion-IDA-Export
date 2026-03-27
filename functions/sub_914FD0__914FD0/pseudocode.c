__m128 *__thiscall sub_914FD0(__m128 *this, __m128 *a2, __m128 *a3, __m128 *a4)
{
  __m128 v5; // xmm0

  this->m128_i16[3] = 1;
  this->m128_i32[2] = 0;
  this->m128_i32[0] = (__int32)&off_A9CF48;
  *(this + 1) = *a2;
  v5 = _mm_mul_ps(*a2, *a3);
  *((float *)this + 7) = -(float)(_mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                                + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]));
  *(this + 2) = *a3;
  *(this + 3) = *a4;
  return this;
}
