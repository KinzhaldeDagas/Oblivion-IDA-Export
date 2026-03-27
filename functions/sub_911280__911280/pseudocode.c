_BYTE *__thiscall sub_911280(__m128 *this, _BYTE *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  _BYTE *result; // eax

  v2 = _mm_mul_ps(*(this + 2), *(this + 2));
  if ( fabs(
         (float)(_mm_shuffle_ps(v2, v2, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v2, v2, 0x55).m128_f32[0] + v2.m128_f32[0]))
       - fConstant_1) >= flt_A3C778
    || (v3 = _mm_mul_ps(*(this + 5), *(this + 5)),
        fabs(
          (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]))
        - fConstant_1) >= flt_A3C778)
    || (v4 = _mm_mul_ps(*(this + 3), *(this + 3)),
        fabs(
          (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]))
        - fConstant_1) >= flt_A3C778)
    || (v5 = _mm_mul_ps(*(this + 6), *(this + 6)),
        fabs(
          (float)(_mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]))
        - fConstant_1) >= flt_A3C778)
    || fabs(*((float *)this + 0x1C)) > fConstant_1
    || *((float *)this + 0x1D) > (double)*((float *)this + 0x1E) )
  {
    result = a2;
LABEL_8:
    *result = 0;
    return result;
  }
  result = a2;
  if ( *((float *)this + 0x1F) > (double)*((float *)this + 0x20) )
    goto LABEL_8;
  *a2 = 1;
  return result;
}
