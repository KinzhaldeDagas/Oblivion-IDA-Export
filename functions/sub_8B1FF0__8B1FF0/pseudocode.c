__m128 *__thiscall sub_8B1FF0(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm2
  __m128 v4; // xmm3
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm0
  __m128 *result; // eax
  __m128 v11; // xmm2
  int v12; // edi
  __m128 v13; // xmm3
  __m128 v14; // xmm5
  __m128 v15; // xmm0
  __m128 v16; // xmm4
  __m128 v17; // xmm1

  v3 = a2[2]; /*0x8b1ffa*/
  v4 = a2[1]; /*0x8b2001*/
  v5 = _mm_shuffle_ps(*a2, v4, 0x44); /*0x8b2008*/
  v6 = _mm_shuffle_ps(*a2, v4, 0xEE); /*0x8b200c*/
  v7 = _mm_shuffle_ps(v3, v3, 0x44); /*0x8b2017*/
  v8 = _mm_shuffle_ps(v5, v7, 0x88); /*0x8b201f*/
  v9 = _mm_shuffle_ps(v5, v7, 0xDD); /*0x8b2023*/
  result = a3; /*0x8b2035*/
  v11 = _mm_shuffle_ps(v6, _mm_shuffle_ps(v3, v3, 0xEE), 0x88); /*0x8b2037*/
  v12 = 3; /*0x8b203c*/
  do /*0x8b2079*/
  {
    *(__m128 *)((char *)result + (char *)this - (char *)a3) = _mm_add_ps( /*0x8b2071*/
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v8, _mm_shuffle_ps(*result, *result, 0)),
                                                                  _mm_mul_ps(v9, _mm_shuffle_ps(*result, *result, 0x55))),
                                                                _mm_mul_ps(v11, _mm_shuffle_ps(*result, *result, 0xAA)));
    ++result; /*0x8b2075*/
    --v12; /*0x8b2078*/
  }
  while ( v12 ); /*0x8b2079*/
  v13 = a2[2]; /*0x8b207b*/
  v14 = a2[1]; /*0x8b208a*/
  v15 = _mm_sub_ps(a3[3], a2[3]); /*0x8b208e*/
  v16 = _mm_shuffle_ps(v13, v13, 0x44); /*0x8b2094*/
  v17 = _mm_shuffle_ps(*a2, v14, 0x44); /*0x8b209e*/
  *(this + 3) = _mm_add_ps( /*0x8b20df*/
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v17, v16, 0x88), _mm_shuffle_ps(v15, v15, 0)),
                    _mm_mul_ps(_mm_shuffle_ps(v17, v16, 0xDD), _mm_shuffle_ps(v15, v15, 0x55))),
                  _mm_mul_ps(
                    _mm_shuffle_ps(_mm_shuffle_ps(*a2, v14, 0xEE), _mm_shuffle_ps(v13, v13, 0xEE), 0x88),
                    _mm_shuffle_ps(v15, v15, 0xAA)));
  return result; /*0x8b20e6*/
}
