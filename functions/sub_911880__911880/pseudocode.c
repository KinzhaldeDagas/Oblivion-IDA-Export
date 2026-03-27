_BYTE *__thiscall sub_911880(__m128 *this, _BYTE *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  _BYTE *result; // eax

  v2 = _mm_mul_ps(*(this + 7), *(this + 8));
  if ( fabs(fabs((float)(_mm_shuffle_ps(v2, v2, 0xAA).m128_f32[0]
                       + (float)(_mm_shuffle_ps(v2, v2, 0x55).m128_f32[0] + v2.m128_f32[0])))) >= flt_A3C778
    || (v3 = _mm_mul_ps(*(this + 8), *(this + 8)),
        fabs(
          (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]))
        - fConstant_1) >= flt_A3C778)
    || (v4 = _mm_mul_ps(*(this + 7), *(this + 7)),
        fabs(
          (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]))
        - fConstant_1) >= flt_A3C778) )
  {
    result = a2;
LABEL_5:
    *result = 0;
    return result;
  }
  result = a2;
  if ( *((float *)this + 0x24) > (double)*((float *)this + 0x25) )
    goto LABEL_5;
  *a2 = 1;
  return result;
}
