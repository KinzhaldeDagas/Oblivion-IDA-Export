bool *__usercall sub_8EB910@<eax>(__m128 *a1@<eax>, bool *a2@<ecx>, __m128 *a3)
{
  __m128 v3; // xmm0
  bool *result; // eax

  v3 = _mm_mul_ps(_mm_sub_ps(*a3, a1[1]), *a1);
  result = a2;
  *a2 = (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])) < (double)flt_A57CB0;
  return result;
}
