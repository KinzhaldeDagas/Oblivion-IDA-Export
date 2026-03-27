int __thiscall sub_8E99F0(int this, float *a2, unsigned int a3, int a4)
{
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __int32 v7; // eax
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  double v11; // st7
  double v12; // st7
  long double v13; // st6
  __m128 v14; // xmm0
  float v16; // [esp+Ch] [ebp-2Ch]
  float v17; // [esp+Ch] [ebp-2Ch]
  unsigned int v18; // [esp+10h] [ebp-28h]
  unsigned int v19; // [esp+10h] [ebp-28h]
  float v20; // [esp+10h] [ebp-28h]
  unsigned int v21; // [esp+14h] [ebp-24h]
  __m128 v22; // [esp+18h] [ebp-20h] BYREF
  __m128 v23; // [esp+28h] [ebp-10h] BYREF

  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(__m128 *)(a4 + 0x40));
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(__m128 *)(a4 + 0x50));
  *(_WORD *)(this + 0xBE) = *(_WORD *)(a4 + 4);
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(float *)(this + 0x5C) = *a2;
  v5 = *(__m128 *)(this + 0xD0);
  v6 = _mm_mul_ps(v5, v5);
  v16 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  if ( v16 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v18 = *(float *)(this + 0xB4) / sqrt(v16);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v5);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3];
  v22.m128_u64[0] = *(_QWORD *)(this + 0x80);
  v7 = *(_DWORD *)(this + 0x8C);
  v22.m128_i32[2] = *(_DWORD *)(this + 0x88);
  v22.m128_i32[3] = v7;
  *(__m128 *)(this + 0x70) = v22;
  v8 = *(__m128 *)(this + 0xE0);
  *(float *)&v19 = a2[2] * flt_A3D65C;
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v8);
  v10 = _mm_mul_ps(v9, v9);
  v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
      * flt_A96F74;
  v23 = v9;
  v17 = v11;
  v12 = *(float *)(this + 0xB8) * a2[2];
  if ( flt_A37450 < v12 )
    v12 = flt_A37450;
  v20 = v12 * v12;
  if ( v17 > (double)v20 )
  {
    v13 = sqrt(v17);
    v17 = v12 * v12;
    *(float *)&v21 = v12 / v13;
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v8);
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v9);
  }
  v23.m128_f32[3] = fConstant_1 - v17 * flt_A96F70 - v17 * v17 * flt_A96F6C - v17 * v17 * v17 * flt_A96F68;
  sub_889470(&v22, &v23, &v22);
  sub_4D6830(&v22);
  v14 = v22;
  *(__m128 *)(this + 0xA0) = _mm_add_ps(v23, v23);
  *(float *)(this + 0xAC) = sqrt(v17) * flt_A9AD28;
  *(__m128 *)(this + 0x80) = v14;
  sub_8B1DD0((float *)(this + 0x10), (float *)(this + 0x80));
  *(__m128 *)(this + 0x40) = _mm_sub_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_add_ps(
                                 _mm_add_ps(
                                   _mm_mul_ps(
                                     *(__m128 *)(this + 0x10),
                                     _mm_shuffle_ps(*(__m128 *)(this + 0x90), *(__m128 *)(this + 0x90), 0)),
                                   _mm_mul_ps(
                                     *(__m128 *)(this + 0x20),
                                     _mm_shuffle_ps(*(__m128 *)(this + 0x90), *(__m128 *)(this + 0x90), 0x55))),
                                 _mm_mul_ps(
                                   *(__m128 *)(this + 0x30),
                                   _mm_shuffle_ps(*(__m128 *)(this + 0x90), *(__m128 *)(this + 0x90), 0xAA))));
  *(_OWORD *)(this + 0xD0) = *(_OWORD *)(a4 + 0x10);
  *(_OWORD *)(this + 0xE0) = *(_OWORD *)(a4 + 0x20);
  return a4 + 0x80;
}
