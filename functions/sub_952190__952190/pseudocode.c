int __thiscall sub_952190(__m128 **this)
{
  __m128 v2; // xmm0
  long double v3; // st7
  int v4; // ecx
  long double v5; // st6
  int v6; // edx
  int v7; // edi
  __int32 v8; // eax
  double v9; // st7
  __m128 v10; // xmm2
  __m128 v11; // xmm0
  __m128 *v12; // eax
  float v13; // xmm5_4
  float v14; // xmm6_4
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  __m128 v17; // xmm5
  __m128 v18; // xmm0
  int v19; // edi
  __int32 v20; // ecx
  __m128 v21; // xmm0
  _DWORD *v22; // esi
  int result; // eax
  float v24; // [esp+4h] [ebp-A8h] BYREF
  float v25; // [esp+8h] [ebp-A4h] BYREF
  __m128 v26; // [esp+Ch] [ebp-A0h] BYREF
  __m128 v27; // [esp+1Ch] [ebp-90h] BYREF
  __m128 v28[4]; // [esp+2Ch] [ebp-80h] BYREF
  __m128 v29[4]; // [esp+6Ch] [ebp-40h] BYREF

  v2 = _mm_sub_ps(**(this + 0x1A), (*(this + 0x1A))[1]);
  v26 = v2;
  v3 = fabs(v2.m128_f32[0]);
  v4 = 0;
  v5 = fabs(v2.m128_f32[1]);
  v25 = v5;
  v6 = 1;
  v7 = 2;
  v24 = fabs(v2.m128_f32[2]);
  if ( v5 < v3 )
  {
    v6 = 0;
    v3 = v25;
    v4 = 1;
  }
  if ( v24 < v3 )
  {
    v7 = v4;
    v4 = 2;
  }
  v8 = v26.m128_i32[v7];
  v9 = -v26.m128_f32[v6];
  v27.m128_i32[v4] = 0;
  v27.m128_i32[3] = 0;
  v27.m128_i32[v6] = v8;
  v27.m128_f32[v7] = v9;
  v10 = _mm_sub_ps(
          _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0xC9), _mm_shuffle_ps(v27, v27, 0xD2)),
          _mm_mul_ps(_mm_shuffle_ps(v2, v2, 0xD2), _mm_shuffle_ps(v27, v27, 0xC9)));
  v11 = _mm_mul_ps(v27, v27);
  v12 = *(this + 0x1A);
  v11.m128_f32[0] = _mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]);
  v13 = 1.0 / fsqrt(v11.m128_f32[0]);
  v14 = 3.0 - (float)((float)(v11.m128_f32[0] * v13) * v13);
  v24 = 0.5;
  v15 = (__m128)0x3F000000u;
  v16 = (__m128)0x3F000000u;
  v16.m128_f32[0] = (float)(0.5 * v13) * v14;
  v17 = _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v27);
  v18 = _mm_mul_ps(v10, v10);
  v27 = v17;
  v18.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v26.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0]);
  v15.m128_f32[0] = (float)(0.5 * v26.m128_f32[0])
                  * (float)(3.0 - (float)((float)(v18.m128_f32[0] * v26.m128_f32[0]) * v26.m128_f32[0]));
  v26 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v10);
  sub_951DF0((__m128 *)this, &v27, v12, v28, &v24);
  sub_951DF0((__m128 *)this, &v26, *(this + 0x1A), v29, &v25);
  v19 = (int)*(this + 0x1A);
  v20 = (*(this + 0x1B))->m128_i32[0];
  if ( v24 <= (double)v25 )
  {
    *(__m128 *)(0x10 * v20 + v19) = v29[0];
    (*(this + 0x18))[(*(this + 0x1B))->m128_i32[0]] = v29[1];
    v21 = v29[2];
  }
  else
  {
    *(__m128 *)(0x10 * v20 + v19) = v28[0];
    (*(this + 0x18))[(*(this + 0x1B))->m128_i32[0]] = v28[1];
    v21 = v28[2];
  }
  (*(this + 0x19))[(*(this + 0x1B))->m128_i32[0]] = v21;
  v22 = *(this + 0x1B);
  result = *v22 + 1;
  *v22 = result;
  return result;
}
