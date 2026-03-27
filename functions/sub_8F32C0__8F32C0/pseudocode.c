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

  v4 = *a2;
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v8 = this + 2;
  v9 = 2;
  do
  {
    *(__m128 *)((char *)v8 + (char *)&v23 - (char *)(this + 2)) = _mm_add_ps(
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v4, _mm_shuffle_ps(*v8, *v8, 0)),
                                                                      _mm_mul_ps(v5, _mm_shuffle_ps(*v8, *v8, 0x55))),
                                                                    _mm_add_ps(
                                                                      _mm_mul_ps(v6, _mm_shuffle_ps(*v8, *v8, 0xAA)),
                                                                      v7));
    ++v8;
    --v9;
  }
  while ( v9 );
  v10 = v23;
  v11 = v24;
  v12 = _mm_sub_ps(v24, v23);
  v13 = _mm_mul_ps(v12, v12);
  v14 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0];
  v15 = _mm_shuffle_ps(v13, v13, 0xAA);
  v16 = v15;
  v16.m128_f32[0] = v15.m128_f32[0] + v14;
  v23 = v16;
  v23.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + v14);
  v17 = _mm_mul_ps(v12, _mm_shuffle_ps(v23, v23, 0));
  v23 = v17;
  v21 = *((_DWORD *)this + 4);
  v23.m128_f32[0] = sqrt(flt_A88D38 - v17.m128_f32[0] * v17.m128_f32[0]);
  v23.m128_f32[1] = sqrt(flt_A88D38 - v17.m128_f32[1] * v17.m128_f32[1]);
  v23.m128_f32[2] = sqrt(flt_A88D38 - v17.m128_f32[2] * v17.m128_f32[2]);
  v19 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v23);
  *(float *)&v22 = a3 + this->m128_f32[3];
  v20 = _mm_add_ps(_mm_shuffle_ps((__m128)v22, (__m128)v22, 0), v19);
  *a4 = _mm_sub_ps(_mm_min_ps(v10, v24), v20);
  a4[1] = _mm_max_ps(v10, v11);
  a4[1] = _mm_add_ps(a4[1], v20);
  return a4;
}
