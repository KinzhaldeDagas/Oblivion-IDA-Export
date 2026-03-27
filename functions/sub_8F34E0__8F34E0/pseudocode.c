signed int __thiscall sub_8F34E0(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm1
  __m128 v4; // xmm0

  v3 = *(this + 1);
  v4 = _mm_mul_ps(_mm_sub_ps(*(this + 2), v3), *a2);
  if ( (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0])) >= (double)*(float *)&SrcStr )
  {
    *a3 = *(this + 2);
    a3->m128_i32[3] = 0x3F000010;
    return 0x3F000010;
  }
  else
  {
    *a3 = v3;
    a3->m128_i32[3] = 0x3F000000;
    return 0x3F000000;
  }
}
