__m128 *__thiscall sub_8B1F70(__m128 *this, __m128 *a2, __m128 *a3)
{
  __m128 *result; // eax
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm3
  int v7; // edi

  result = a3;
  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = 4;
  do
  {
    *(__m128 *)((char *)result + (char *)this - (char *)a3) = _mm_add_ps(
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v4, _mm_shuffle_ps(*result, *result, 0)),
                                                                  _mm_mul_ps(v5, _mm_shuffle_ps(*result, *result, 0x55))),
                                                                _mm_mul_ps(v6, _mm_shuffle_ps(*result, *result, 0xAA)));
    ++result;
    --v7;
  }
  while ( v7 );
  *(this + 3) = _mm_add_ps(*(this + 3), a2[3]);
  return result;
}
