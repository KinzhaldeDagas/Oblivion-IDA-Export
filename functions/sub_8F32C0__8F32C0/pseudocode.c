__m128 *__thiscall sub_8F32C0(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm3
  __m128 v7; // xmm4
  __m128 *v8; // eax
  int v9; // esi
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  float v14; // xmm4_4
  __m128 v15; // xmm5
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm0
  unsigned int v21; // [esp+8h] [ebp-24h]
  unsigned int v22; // [esp+8h] [ebp-24h]
  __m128 v23; // [esp+Ch] [ebp-20h] BYREF
  __m128 v24; // [esp+1Ch] [ebp-10h]

  v4 = *a2; /*0x8f32cc*/
  v5 = a2[1]; /*0x8f32cf*/
  v6 = a2[2]; /*0x8f32d3*/
  v7 = a2[3]; /*0x8f32d7*/
  v8 = this + 2; /*0x8f32db*/
  v9 = 2; /*0x8f32e5*/
  do /*0x8f332b*/
  {
    *(__m128 *)((char *)v8 + (char *)&v23 - (char *)(this + 2)) = _mm_add_ps( /*0x8f3323*/
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v4, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0xAA)),
                                                                      v7));
    ++v8; /*0x8f3327*/
    --v9; /*0x8f332a*/
  }
  while ( v9 ); /*0x8f332b*/
  v10 = v23; /*0x8f332d*/
  v11 = v24; /*0x8f3332*/
  v12 = _mm_sub_ps(v24, v23); /*0x8f333a*/
  v13 = _mm_mul_ps(v12, v12); /*0x8f3340*/
  v14 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]; /*0x8f334a*/
  v15 = _mm_shuffle_ps(v13, v13, 0xAA); /*0x8f3351*/
  v16 = v15; /*0x8f3355*/
  v16.m128_f32[0] = v15.m128_f32[0] + v14; /*0x8f3358*/
  v23 = v16; /*0x8f335c*/
  v23.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + v14); /*0x8f3365*/
  v17 = _mm_mul_ps(v12, _mm_shuffle_ps(v23, v23, 0)); /*0x8f3377*/
  v23 = v17; /*0x8f337a*/
  v21 = *((_DWORD *)this + 4); /*0x8f338a*/
  v23.m128_f32[0] = sqrt(flt_A88D38 - v17.m128_f32[0] * v17.m128_f32[0]); /*0x8f33a7*/
  v23.m128_f32[1] = sqrt(flt_A88D38 - v17.m128_f32[1] * v17.m128_f32[1]); /*0x8f33bb*/
  v23.m128_f32[2] = sqrt(flt_A88D38 - v17.m128_f32[2] * v17.m128_f32[2]); /*0x8f33cf*/
  v19 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v23); /*0x8f33de*/
  *(float *)&v22 = a3 + this->m128_f32[3]; /*0x8f33e1*/
  v20 = _mm_add_ps(_mm_shuffle_ps((__m128)v22, (__m128)v22, 0), v19); /*0x8f33ef*/
  *a4 = _mm_sub_ps(_mm_min_ps(v10, v24), v20); /*0x8f33fb*/
  a4[1] = _mm_max_ps(v10, v11); /*0x8f3401*/
  a4[1] = _mm_add_ps(a4[1], v20); /*0x8f340c*/
  return a4; /*0x8f3410*/
}
