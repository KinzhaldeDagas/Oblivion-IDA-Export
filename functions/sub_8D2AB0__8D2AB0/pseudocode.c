__m128 *__thiscall sub_8D2AB0(char *this, __m128 *a2, __m128 *a3)
{
  __m128 *result; // eax
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm3
  int v7; // ecx
  int v8; // edx

  result = a3; /*0x8d2ab6*/
  v4 = *a2; /*0x8d2ab9*/
  v5 = a2[1]; /*0x8d2abc*/
  v6 = a2[2]; /*0x8d2ac0*/
  v7 = this - (char *)a3; /*0x8d2ac7*/
  v8 = 3; /*0x8d2ac9*/
  do /*0x8d2b08*/
  {
    *(__m128 *)((char *)result + v7) = _mm_add_ps( /*0x8d2b00*/
                                         _mm_add_ps(
                                           _mm_mul_ps(v4, _mm_shuffle_ps(*result, *result, 0)),
                                           _mm_mul_ps(v5, _mm_shuffle_ps(*result, *result, 0x55))),
                                         _mm_mul_ps(v6, _mm_shuffle_ps(*result, *result, 0xAA)));
    ++result; /*0x8d2b04*/
    --v8; /*0x8d2b07*/
  }
  while ( v8 ); /*0x8d2b08*/
  return result; /*0x8d2b0c*/
}
