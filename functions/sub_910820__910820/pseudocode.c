_BYTE *__thiscall sub_910820(__m128 *this, _BYTE *a2)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  _BYTE *result; // eax
  bool v11[5]; // [esp+Bh] [ebp-5h] BYREF

  v3 = _mm_mul_ps(*(this + 6), *(this + 7)); /*0x910834*/
  *(float *)&v11[1] = _mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0] /*0x910851*/
                    + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]);
  if ( fabs(fabs(*(float *)&v11[1])) >= flt_A3C778 ) /*0x910868*/
    goto LABEL_8; /*0x910868*/
  v4 = _mm_mul_ps(*(this + 4), *(this + 5)); /*0x910876*/
  *(float *)&v11[1] = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] /*0x910893*/
                    + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  if ( fabs(fabs(*(float *)&v11[1])) >= flt_A3C778 ) /*0x9108aa*/
    goto LABEL_8; /*0x9108aa*/
  v5 = _mm_mul_ps(*(this + 7), *(this + 7)); /*0x9108b4*/
  *(float *)&v11[1] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] /*0x9108d1*/
                    + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  if ( fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778 ) /*0x9108ec*/
    goto LABEL_8; /*0x9108ec*/
  v6 = _mm_mul_ps(*(this + 4), *(this + 4)); /*0x9108f6*/
  *(float *)&v11[1] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] /*0x910913*/
                    + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  if ( fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778 /*0x9109fe*/
    || (v7 = _mm_mul_ps(*(this + 6), *(this + 6)),
        *(float *)&v11[1] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]),
        fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778)
    || (v8 = _mm_mul_ps(*(this + 2), *(this + 2)),
        *(float *)&v11[1] = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]),
        !*sub_8B1EE0(v11, *(float *)&v11[1], 1.0, 0.0000099999997))
    || (v9 = _mm_mul_ps(*(this + 8), *(this + 8)),
        *(float *)&v11[1] = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]),
        !*sub_8B1EE0(v11, *(float *)&v11[1], 1.0, 0.0000099999997)) )
  {
LABEL_8:
    result = a2; /*0x910a07*/
LABEL_9:
    *result = 0; /*0x910a0a*/
    return result; /*0x910a11*/
  }
  result = a2; /*0x910a25*/
  if ( *((float *)this + 0x24) > (double)*((float *)this + 0x25) ) /*0x910a28*/
    goto LABEL_9; /*0x910a28*/
  *a2 = 1; /*0x910a2a*/
  return result; /*0x910a0d*/
}
