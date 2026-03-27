__m128 *__thiscall sub_8CE0D0(__m128 *this, unsigned __int16 *a2, int a3, __m128 *a4)
{
  __m128 *result; // eax
  int v6; // esi

  result = (__m128 *)(a3 - 1);
  if ( a3 - 1 >= 0 )
  {
    v6 = a3;
    result = a4;
    do
    {
      *result = _mm_mul_ps(*(this + 1), stru_A99C50[*a2]);
      result->m128_i32[3] = *a2 | 0x3F000000;
      ++result;
      ++a2;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
