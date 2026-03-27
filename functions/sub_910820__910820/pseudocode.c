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

  v3 = _mm_mul_ps(*(this + 6), *(this + 7));
  *(float *)&v11[1] = _mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]);
  if ( fabs(fabs(*(float *)&v11[1])) >= flt_A3C778 )
    goto LABEL_8;
  v4 = _mm_mul_ps(*(this + 4), *(this + 5));
  *(float *)&v11[1] = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  if ( fabs(fabs(*(float *)&v11[1])) >= flt_A3C778 )
    goto LABEL_8;
  v5 = _mm_mul_ps(*(this + 7), *(this + 7));
  *(float *)&v11[1] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  if ( fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778 )
    goto LABEL_8;
  v6 = _mm_mul_ps(*(this + 4), *(this + 4));
  *(float *)&v11[1] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                    + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  if ( fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778
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
    result = a2;
LABEL_9:
    *result = 0;
    return result;
  }
  result = a2;
  if ( *((float *)this + 0x24) > (double)*((float *)this + 0x25) )
    goto LABEL_9;
  *a2 = 1;
  return result;
}
