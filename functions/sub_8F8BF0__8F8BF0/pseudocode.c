void __thiscall sub_8F8BF0(char *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  __m128 *v5; // esi
  __m128 *v6; // eax
  float v7; // [esp+Ch] [ebp-14h]
  __m128 v8; // [esp+10h] [ebp-10h] BYREF

  v5 = *a5; /*0x8f8c07*/
  v7 = *((float *)a5 + 0xC0D); /*0x8f8c0e*/
  sub_8F80F0(this, a3, a2, a4, a5); /*0x8f8c17*/
  for ( ; v5 < *a5; v5 += 3 ) /*0x8f8c1e*/
  {
    v6 = sub_8F7000(v5, &v8); /*0x8f8c27*/
    *v5 = _mm_add_ps(*v5, _mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 0), v5[1])); /*0x8f8c43*/
    v5[1] = _mm_xor_ps(v5[1], (__m128)xmmword_A9B570); /*0x8f8c54*/
  }
  if ( v7 != *((float *)a5 + 0xC0D) ) /*0x8f8c72*/
    *((__m128 *)a5 + 2) = _mm_xor_ps(*((__m128 *)a5 + 2), (__m128)xmmword_A9B570); /*0x8f8c82*/
}
