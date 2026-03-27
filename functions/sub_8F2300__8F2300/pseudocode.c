int __thiscall sub_8F2300(__m128 *this)
{
  __m128 v1; // xmm2
  __m128 v2; // xmm0
  float v3; // xmm1_4
  __m128 v4; // xmm4
  float v5; // xmm5_4
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  long double v8; // st7
  long double v9; // st6
  int v10; // edx
  int v11; // esi
  int v12; // edi
  double v13; // st7
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  float v17; // xmm5_4
  __m128 v18; // xmm6
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  float v21; // [esp+8h] [ebp-18h]
  float v22; // [esp+Ch] [ebp-14h]
  __m128 v23; // [esp+10h] [ebp-10h]

  v1 = _mm_sub_ps(*(this + 3), *(this + 2));
  v2 = _mm_mul_ps(v1, v1);
  v2.m128_f32[0] = _mm_shuffle_ps(v2, v2, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v2, v2, 0x55).m128_f32[0] + v2.m128_f32[0]);
  v3 = 1.0 / fsqrt(v2.m128_f32[0]);
  v4 = (__m128)0x3F000000u;
  v5 = 3.0 - (float)((float)(v2.m128_f32[0] * v3) * v3);
  v6 = (__m128)0x3F000000u;
  v6.m128_f32[0] = (float)(0.5 * v3) * v5;
  v7 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v1);
  v23 = v7;
  v8 = fabs(v7.m128_f32[0]);
  v9 = fabs(v7.m128_f32[1]);
  v10 = 0;
  v11 = 1;
  v22 = fabs(v7.m128_f32[2]);
  v12 = 2;
  if ( v9 < v8 )
  {
    v11 = 0;
    v21 = v9;
    v8 = v21;
    v10 = 1;
  }
  if ( v22 < v8 )
  {
    v12 = v10;
    v10 = 2;
  }
  *((_DWORD *)this + v10 + 0x10) = 0;
  v13 = v23.m128_f32[v11];
  *((_DWORD *)this + 0x13) = 0;
  *((_DWORD *)this + v11 + 0x10) = v23.m128_i32[v12];
  *((float *)this + v12 + 0x10) = -v13;
  v15 = *(this + 4);
  v16 = _mm_mul_ps(v15, v15);
  v17 = _mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0];
  v18 = _mm_shuffle_ps(v16, v16, 0xAA);
  v19 = v18;
  v19.m128_f32[0] = v18.m128_f32[0] + v17;
  v23 = v19;
  v23.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0] + v17);
  v4.m128_f32[0] = 0.5 * v23.m128_f32[0];
  v20 = v4;
  v20.m128_f32[0] = (float)(0.5 * v23.m128_f32[0])
                  * (float)(3.0 - (float)((float)((float)(v18.m128_f32[0] + v17) * v23.m128_f32[0]) * v23.m128_f32[0]));
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v15);
  *(this + 5) = _mm_sub_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xC9), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xD2), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xC9)));
  return 4 * v12;
}
