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

  v1 = _mm_sub_ps(*(this + 3), *(this + 2)); /*0x8f2313*/
  v2 = _mm_mul_ps(v1, v1); /*0x8f2319*/
  v2.m128_f32[0] = _mm_shuffle_ps(v2, v2, 0xAA).m128_f32[0] /*0x8f2331*/
                 + (float)(_mm_shuffle_ps(v2, v2, 0x55).m128_f32[0] + v2.m128_f32[0]);
  v3 = 1.0 / fsqrt(v2.m128_f32[0]); /*0x8f2344*/
  v4 = (__m128)0x3F000000u; /*0x8f2367*/
  v5 = 3.0 - (float)((float)(v2.m128_f32[0] * v3) * v3); /*0x8f2370*/
  v6 = (__m128)0x3F000000u; /*0x8f2374*/
  v6.m128_f32[0] = (float)(0.5 * v3) * v5; /*0x8f237b*/
  v7 = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v1); /*0x8f2386*/
  v23 = v7; /*0x8f2389*/
  v8 = fabs(v7.m128_f32[0]); /*0x8f2392*/
  v9 = fabs(v7.m128_f32[1]); /*0x8f2398*/
  v10 = 0; /*0x8f239a*/
  v11 = 1; /*0x8f23a6*/
  v22 = fabs(v7.m128_f32[2]); /*0x8f23ab*/
  v12 = 2; /*0x8f23af*/
  if ( v9 < v8 ) /*0x8f23bb*/
  {
    v11 = 0; /*0x8f23bf*/
    v21 = v9; /*0x8f239c*/
    v8 = v21; /*0x8f23c1*/
    v10 = 1; /*0x8f23c5*/
  }
  if ( v22 < v8 ) /*0x8f23d7*/
  {
    v12 = v10; /*0x8f23d9*/
    v10 = 2; /*0x8f23db*/
  }
  *((_DWORD *)this + v10 + 0x10) = 0; /*0x8f23e0*/
  v13 = v23.m128_f32[v11]; /*0x8f23ef*/
  *((_DWORD *)this + 0x13) = 0; /*0x8f23f3*/
  *((_DWORD *)this + v11 + 0x10) = v23.m128_i32[v12]; /*0x8f2407*/
  *((float *)this + v12 + 0x10) = -v13; /*0x8f240b*/
  v15 = *(this + 4); /*0x8f240f*/
  v16 = _mm_mul_ps(v15, v15); /*0x8f2416*/
  v17 = _mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]; /*0x8f2420*/
  v18 = _mm_shuffle_ps(v16, v16, 0xAA); /*0x8f2427*/
  v19 = v18; /*0x8f242b*/
  v19.m128_f32[0] = v18.m128_f32[0] + v17; /*0x8f242e*/
  v23 = v19; /*0x8f2432*/
  v23.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0] + v17); /*0x8f243b*/
  v4.m128_f32[0] = 0.5 * v23.m128_f32[0]; /*0x8f2452*/
  v20 = v4; /*0x8f2456*/
  v20.m128_f32[0] = (float)(0.5 * v23.m128_f32[0]) /*0x8f2459*/
                  * (float)(3.0 - (float)((float)((float)(v18.m128_f32[0] + v17) * v23.m128_f32[0]) * v23.m128_f32[0]));
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v20, v20, 0), v15); /*0x8f2467*/
  *(this + 5) = _mm_sub_ps( /*0x8f2495*/
                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xC9), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xD2), _mm_shuffle_ps(*(this + 4), *(this + 4), 0xC9)));
  return 4 * v12; /*0x8f2499*/
}
