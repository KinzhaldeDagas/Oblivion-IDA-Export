_BYTE *__thiscall sub_913900(__m128 *this, _BYTE *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  _BYTE *result; // eax
  __m128 v6; // xmm0

  v2 = _mm_mul_ps(*(this + 2), *(this + 3)); /*0x913911*/
  if ( fabs(fabs((float)(_mm_shuffle_ps(v2, v2, 0xAA).m128_f32[0] /*0x9139c1*/
                       + (float)(_mm_shuffle_ps(v2, v2, 0x55).m128_f32[0] + v2.m128_f32[0])))) >= flt_A3C778
    || (v3 = _mm_mul_ps(*(this + 2), *(this + 2)),
        fabs(
          (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]))
        - fConstant_1) >= flt_A3C778)
    || (v4 = _mm_mul_ps(*(this + 3), *(this + 3)),
        fabs(
          (float)(_mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]))
        - fConstant_1) >= flt_A3C778) )
  {
    result = a2; /*0x9139c3*/
LABEL_5:
    *result = 0; /*0x9139c6*/
    return result; /*0x9139cc*/
  }
  v6 = _mm_mul_ps(*(this + 5), *(this + 5)); /*0x9139d3*/
  result = a2; /*0x913a0b*/
  if ( fabs( /*0x913a0e*/
         (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
               + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]))
       - fConstant_1) >= flt_A3C778 )
    goto LABEL_5; /*0x913a0e*/
  *a2 = 1; /*0x913a10*/
  return result; /*0x9139c9*/
}
