signed int __thiscall sub_8F34E0(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm0

  v3 = *(this + 1); /*0x8f34ed*/
  v4 = _mm_mul_ps(_mm_sub_ps(*(this + 2), v3), *a2); /*0x8f34fd*/
  if ( (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] /*0x8f3530*/
             + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0])) >= (double)*(float *)&SrcStr )
  {
    *a3 = *(this + 2); /*0x8f354f*/
    a3->m128_i32[3] = 0x3F000010; /*0x8f3552*/
    return 0x3F000010; /*0x8f354a*/
  }
  else
  {
    *a3 = v3; /*0x8f3539*/
    a3->m128_i32[3] = 0x3F000000; /*0x8f353c*/
    return 0x3F000000; /*0x8f3534*/
  }
}
