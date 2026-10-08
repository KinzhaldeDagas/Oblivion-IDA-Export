void __thiscall sub_8F7D10(_DWORD *this, int a2, int *a3, int a4, int a5)
{
  __m128 *v5; // esi
  __m128 *v6; // eax
  float v7; // [esp+Ch] [ebp-14h]
  __m128 v8; // [esp+10h] [ebp-10h] BYREF

  v5 = *(__m128 **)a5; /*0x8f7d27*/
  v7 = *(float *)(a5 + 0x3034); /*0x8f7d2e*/
  sub_8F7970(this, a3, a2, a4, (__m128 **)a5); /*0x8f7d37*/
  for ( ; (unsigned int)v5 < *(_DWORD *)a5; v5 += 3 ) /*0x8f7d3e*/
  {
    v6 = sub_8F7000(v5, &v8); /*0x8f7d47*/
    *v5 = _mm_add_ps(*v5, _mm_mul_ps(_mm_shuffle_ps(*v6, *v6, 0), v5[1])); /*0x8f7d63*/
    v5[1] = _mm_xor_ps(v5[1], (__m128)xmmword_A9B570); /*0x8f7d74*/
  }
  if ( v7 != *(float *)(a5 + 0x3034) ) /*0x8f7d92*/
    *(__m128 *)(a5 + 0x20) = _mm_xor_ps(*(__m128 *)(a5 + 0x20), (__m128)xmmword_A9B570); /*0x8f7da2*/
}
