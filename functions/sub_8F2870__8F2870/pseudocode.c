__m128 *__thiscall sub_8F2870(__m128 *this, __m128 *a2)
{
  __m128 v2; // xmm0
  __m128 v3; // xmm6
  __m128 v4; // xmm3
  __m128 v5; // xmm1
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm0
  __m128 v9; // xmm6
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  __m128 *v14; // edx
  __m128 *v15; // esi
  int v16; // edi
  unsigned int v18; // [esp+Ch] [ebp-14h]
  __m128 v19; // [esp+10h] [ebp-10h]

  v2 = *(this + 4);
  v3 = *(this + 5);
  *(float *)&v18 = *((float *)this + 4) * flt_A9B264;
  v4 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 4), 0);
  v5 = _mm_mul_ps(v4, v2);
  v6 = _mm_mul_ps(v4, v3);
  v7 = _mm_add_ps(v2, v3);
  v8 = _mm_sub_ps(v2, v3);
  v9 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 0);
  v10 = _mm_and_ps(v5, (__m128)xmmword_A9A470);
  v11 = _mm_and_ps(v6, (__m128)xmmword_A9A470);
  v12 = _mm_and_ps(_mm_mul_ps(v9, v7), (__m128)xmmword_A9A470);
  v13 = _mm_and_ps(_mm_mul_ps(v9, v8), (__m128)xmmword_A9A470);
  v14 = a2 + 2;
  v15 = this + 2;
  v16 = 2;
  do
  {
    v19.m128_u64[0] = v15->m128_u64[0];
    v19.m128_i32[2] = v15->m128_i32[2];
    v19.m128_i32[3] = this->m128_i32[3];
    v14[0xFFFFFFFE] = _mm_add_ps(v19, v10);
    v14[0xFFFFFFFF] = _mm_add_ps(v19, v12);
    *v14 = _mm_add_ps(v19, v11);
    v14[1] = _mm_sub_ps(v19, v13);
    v14[2] = _mm_sub_ps(v19, v10);
    v14[3] = _mm_sub_ps(v19, v12);
    v14[4] = _mm_sub_ps(v19, v11);
    v14[5] = _mm_add_ps(v19, v13);
    ++v15;
    v14 += 8;
    --v16;
  }
  while ( v16 );
  return a2;
}
