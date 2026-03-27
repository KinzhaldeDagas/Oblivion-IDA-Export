int __thiscall sub_8EB490(int this, float *a2, unsigned int a3, int a4)
{
  __m128 v5; // xmm0
  __m128 *v6; // esi
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __int32 v9; // eax
  __m128 v10; // xmm2
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  double v13; // st7
  double v14; // st7
  long double v15; // st6
  __m128 v16; // xmm0
  float v18; // [esp+Ch] [ebp-2Ch]
  float v19; // [esp+Ch] [ebp-2Ch]
  unsigned int v20; // [esp+10h] [ebp-28h]
  unsigned int v21; // [esp+10h] [ebp-28h]
  float v22; // [esp+10h] [ebp-28h]
  unsigned int v23; // [esp+14h] [ebp-24h]
  __m128 v24; // [esp+18h] [ebp-20h] BYREF
  __m128 v25; // [esp+28h] [ebp-10h] BYREF

  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(__m128 *)(a4 + 0x40));
  v5 = *(__m128 *)(a4 + 0x50);
  v6 = (__m128 *)(this + 0x10);
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(
                               _mm_shuffle_ps((__m128)a3, (__m128)a3, 0),
                               _mm_add_ps(
                                 _mm_add_ps(
                                   _mm_mul_ps(*(__m128 *)(this + 0x10), _mm_shuffle_ps(v5, v5, 0)),
                                   _mm_mul_ps(*(__m128 *)(this + 0x20), _mm_shuffle_ps(v5, v5, 0x55))),
                                 _mm_mul_ps(*(__m128 *)(this + 0x30), _mm_shuffle_ps(v5, v5, 0xAA))));
  *(_WORD *)(this + 0xBE) = *(_WORD *)(a4 + 4);
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(float *)(this + 0x5C) = *a2;
  v7 = *(__m128 *)(this + 0xD0);
  v8 = _mm_mul_ps(v7, v7);
  v18 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
  if ( v18 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v20 = *(float *)(this + 0xB4) / sqrt(v18);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v7);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3];
  v24.m128_u64[0] = *(_QWORD *)(this + 0x80);
  v9 = *(_DWORD *)(this + 0x8C);
  v24.m128_i32[2] = *(_DWORD *)(this + 0x88);
  v24.m128_i32[3] = v9;
  *(__m128 *)(this + 0x70) = v24;
  v10 = *(__m128 *)(this + 0xE0);
  *(float *)&v21 = a2[2] * flt_A3D65C;
  v11 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v10);
  v12 = _mm_mul_ps(v11, v11);
  v13 = (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]))
      * flt_A96F74;
  v25 = v11;
  v19 = v13;
  v14 = *(float *)(this + 0xB8) * a2[2];
  if ( flt_A37450 < v14 )
    v14 = flt_A37450;
  v22 = v14 * v14;
  if ( v19 > (double)v22 )
  {
    v15 = sqrt(v19);
    v19 = v14 * v14;
    *(float *)&v23 = v14 / v15;
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), v10);
    v25 = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), v11);
  }
  v25.m128_f32[3] = fConstant_1 - v19 * flt_A96F70 - v19 * v19 * flt_A96F6C - v19 * v19 * v19 * flt_A96F68;
  sub_889470(&v24, &v25, &v24);
  sub_4D6830(&v24);
  v16 = v24;
  v6[9] = _mm_add_ps(v25, v25);
  v6[9].m128_f32[3] = sqrt(v19) * flt_A9AFC8;
  v6[7] = v16;
  sub_8B1DD0(v6->m128_f32, v6[7].m128_f32);
  v6[3] = _mm_sub_ps(
            v6[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v6, _mm_shuffle_ps(v6[8], v6[8], 0)),
                _mm_mul_ps(v6[1], _mm_shuffle_ps(v6[8], v6[8], 0x55))),
              _mm_mul_ps(v6[2], _mm_shuffle_ps(v6[8], v6[8], 0xAA))));
  *(_OWORD *)(this + 0xD0) = *(_OWORD *)(a4 + 0x10);
  *(__m128 *)(this + 0xE0) = _mm_add_ps(
                               _mm_add_ps(
                                 _mm_mul_ps(*v6, _mm_shuffle_ps(*(__m128 *)(a4 + 0x20), *(__m128 *)(a4 + 0x20), 0)),
                                 _mm_mul_ps(v6[1], _mm_shuffle_ps(*(__m128 *)(a4 + 0x20), *(__m128 *)(a4 + 0x20), 0x55))),
                               _mm_mul_ps(v6[2], _mm_shuffle_ps(*(__m128 *)(a4 + 0x20), *(__m128 *)(a4 + 0x20), 0xAA)));
  return a4 + 0x80;
}
