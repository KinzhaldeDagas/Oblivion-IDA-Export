void __thiscall sub_8F8BF0(char *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  __m128 *v5; // esi
  __m128 *v6; // eax
  float v7; // [esp+Ch] [ebp-14h]
  __m128 v8; // [esp+10h] [ebp-10h] BYREF

  v5 = *a5;
  v7 = *((float *)a5 + 0xC0D);
  sub_8F80F0(this, a3, a2, a4, a5);
  for ( ; v5 < *a5; v5 += 3 )
  {
    v6 = sub_8F7000(v5, &v8);
    *v5 = _mm_add_ps(*v5, _mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 0), v5[1]));
    v5[1] = _mm_xor_ps(v5[1], (__m128)xmmword_A9B570);
  }
  if ( v7 != *((float *)a5 + 0xC0D) )
    *((__m128 *)a5 + 2) = _mm_xor_ps(*((__m128 *)a5 + 2), (__m128)xmmword_A9B570);
}
