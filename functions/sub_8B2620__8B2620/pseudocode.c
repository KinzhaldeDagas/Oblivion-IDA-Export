_BYTE *__thiscall sub_8B2620(__m128 *this, _BYTE *a2)
{
  __m128 v3; // xmm0
  __m128 v4; // xmm0
  __m128 v5; // xmm0
  __m128 v6; // xmm0
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  _BYTE *result; // eax
  long double v10; // st7
  bool v11[5]; // [esp+Bh] [ebp-5h] BYREF

  v3 = _mm_mul_ps(*(this + 4), *(this + 5)); /*0x8b2634*/
  *(float *)&v11[1] = _mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0] /*0x8b2651*/
                    + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]);
  if ( fabs(fabs(*(float *)&v11[1])) >= flt_A3C778 ) /*0x8b2668*/
    goto LABEL_7; /*0x8b2668*/
  v4 = _mm_mul_ps(*(this + 8), *(this + 7)); /*0x8b2679*/
  *(float *)&v11[1] = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] /*0x8b2696*/
                    + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  if ( fabs(fabs(*(float *)&v11[1])) >= flt_A3C778 ) /*0x8b26ad*/
    goto LABEL_7; /*0x8b26ad*/
  v5 = _mm_mul_ps(*(this + 4), *(this + 4)); /*0x8b26b7*/
  *(float *)&v11[1] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] /*0x8b26d4*/
                    + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  if ( fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778 /*0x8b27b3*/
    || (v6 = _mm_mul_ps(*(this + 5), *(this + 5)),
        *(float *)&v11[1] = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]),
        fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778)
    || (v7 = _mm_mul_ps(*(this + 7), *(this + 7)),
        *(float *)&v11[1] = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]),
        fabs(*(float *)&v11[1] - fConstant_1) >= flt_A3C778)
    || (v8 = _mm_mul_ps(*(this + 3), *(this + 3)),
        *(float *)&v11[1] = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]),
        !*sub_8B1EE0(v11, *(float *)&v11[1], 1.0, 0.0000099999997)) )
  {
LABEL_7:
    result = a2; /*0x8b27bc*/
LABEL_8:
    *result = 0; /*0x8b27bf*/
    return result; /*0x8b27c6*/
  }
  if ( this->m128_f32[3] > (double)*(float *)&SrcStr || *((float *)this + 4) > (double)*(float *)&SrcStr ) /*0x8b27e7*/
    v10 = *((float *)this + 4) - this->m128_f32[3]; /*0x8b27f6*/
  else
    v10 = fabs(this->m128_f32[3]) + *((float *)this + 4); /*0x8b27ee*/
  result = a2; /*0x8b2804*/
  if ( v10 > flt_A46B14 ) /*0x8b2807*/
    goto LABEL_8; /*0x8b2807*/
  *a2 = 1; /*0x8b2809*/
  return result; /*0x8b27c2*/
}
