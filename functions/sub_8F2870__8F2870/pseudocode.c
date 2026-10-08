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

  v2 = *(this + 4); /*0x8f2888*/
  v3 = *(this + 5); /*0x8f288c*/
  *(float *)&v18 = *((float *)this + 4) * flt_A9B264; /*0x8f289a*/
  v4 = _mm_shuffle_ps((__m128)*((unsigned int *)this + 4), (__m128)*((unsigned int *)this + 4), 0); /*0x8f28b8*/
  v5 = _mm_mul_ps(v4, v2); /*0x8f28bf*/
  v6 = _mm_mul_ps(v4, v3); /*0x8f28c2*/
  v7 = _mm_add_ps(v2, v3); /*0x8f28c8*/
  v8 = _mm_sub_ps(v2, v3); /*0x8f28ce*/
  v9 = _mm_shuffle_ps((__m128)v18, (__m128)v18, 0); /*0x8f28d8*/
  v10 = _mm_and_ps(v5, (__m128)xmmword_A9A470); /*0x8f28e8*/
  v11 = _mm_and_ps(v6, (__m128)xmmword_A9A470); /*0x8f28eb*/
  v12 = _mm_and_ps(_mm_mul_ps(v9, v7), (__m128)xmmword_A9A470); /*0x8f28ee*/
  v13 = _mm_and_ps(_mm_mul_ps(v9, v8), (__m128)xmmword_A9A470); /*0x8f28f1*/
  v14 = a2 + 2; /*0x8f28f4*/
  v15 = this + 2; /*0x8f28f7*/
  v16 = 2; /*0x8f28fa*/
  do /*0x8f297f*/
  {
    v19.m128_u64[0] = v15->m128_u64[0]; /*0x8f2904*/
    v19.m128_i32[2] = v15->m128_i32[2]; /*0x8f291c*/
    v19.m128_i32[3] = this->m128_i32[3]; /*0x8f2920*/
    v14[0xFFFFFFFE] = _mm_add_ps(v19, v10); /*0x8f292f*/
    v14[0xFFFFFFFF] = _mm_add_ps(v19, v12); /*0x8f2939*/
    *v14 = _mm_add_ps(v19, v11); /*0x8f2943*/
    v14[1] = _mm_sub_ps(v19, v13); /*0x8f294c*/
    v14[2] = _mm_sub_ps(v19, v10); /*0x8f2956*/
    v14[3] = _mm_sub_ps(v19, v12); /*0x8f2960*/
    v14[4] = _mm_sub_ps(v19, v11); /*0x8f296d*/
    v14[5] = _mm_add_ps(v19, v13); /*0x8f2971*/
    ++v15; /*0x8f2975*/
    v14 += 8; /*0x8f2978*/
    --v16; /*0x8f297e*/
  }
  while ( v16 ); /*0x8f297f*/
  return a2; /*0x8f2988*/
}
