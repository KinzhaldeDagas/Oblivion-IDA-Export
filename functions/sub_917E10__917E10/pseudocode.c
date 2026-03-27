__m128 *__thiscall sub_917E10(__m128 *this, int a2, int a3, __m128 *a4)
{
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  int v9; // ecx
  __m128 *result; // eax
  double v11; // st7

  (*(void (__thiscall **)(_DWORD, int, int, __m128 *))(**((_DWORD **)this + 4) + 0x28))(
    *((_DWORD *)this + 4),
    a2,
    a3,
    a4);
  v5 = *(this + 2);
  v6 = *(this + 3);
  v7 = *(this + 4);
  v8 = *(this + 5);
  v9 = a3;
  result = a4;
  do
  {
    v11 = result->m128_f32[3];
    *result = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(v5, _mm_shuffle_ps(*result, *result, 0)),
                  _mm_mul_ps(v6, _mm_shuffle_ps(*result, *result, 0x55))),
                _mm_add_ps(_mm_mul_ps(v7, _mm_shuffle_ps(*result, *result, 0xAA)), v8));
    result->m128_f32[3] = v11;
    ++result;
    --v9;
  }
  while ( v9 > 0 );
  return result;
}
