bool *__thiscall sub_88FC30(__m128 *this, bool *a2, float a3)
{
  int i; // edx
  __m128 v4; // xmm0
  bool *result; // eax

  for ( i = 0; i < 3; ++i )
    ;
  v4 = _mm_mul_ps(*this, *this);
  result = a2;
  *a2 = fabs(
          (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]))
        - fConstant_1) < a3;
  return result;
}
