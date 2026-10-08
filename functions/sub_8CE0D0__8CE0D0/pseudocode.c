__m128 *__thiscall sub_8CE0D0(__m128 *this, unsigned __int16 *a2, int a3, __m128 *a4)
{
  __m128 *result; // eax
  int v6; // esi

  result = (__m128 *)(a3 - 1); /*0x8ce0dc*/
  if ( a3 - 1 >= 0 ) /*0x8ce0df*/
  {
    v6 = a3; /*0x8ce0e4*/
    result = a4; /*0x8ce0e7*/
    do /*0x8ce11c*/
    {
      *result = _mm_mul_ps(*(this + 1), stru_A99C50[*a2]); /*0x8ce106*/
      result->m128_i32[3] = *a2 | 0x3F000000; /*0x8ce112*/
      ++result; /*0x8ce115*/
      ++a2; /*0x8ce118*/
      --v6; /*0x8ce11b*/
    }
    while ( v6 ); /*0x8ce11c*/
  }
  return result; /*0x8ce11e*/
}
