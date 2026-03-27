__m128 *__thiscall sub_8EA790(int this, float *a2, unsigned int a3, __m128 *a4)
{
  __m128 *v4; // esi
  __m128 v5; // xmm0
  __m128 v6; // xmm1
  __m128 v7; // xmm0
  __int32 v8; // ebx
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  double v12; // st7
  double v13; // st7
  __m128 v14; // xmm0
  float v16; // [esp+10h] [ebp-2Ch]
  float v17; // [esp+10h] [ebp-2Ch]
  unsigned int v18; // [esp+14h] [ebp-28h]
  unsigned int v19; // [esp+14h] [ebp-28h]
  float v20; // [esp+14h] [ebp-28h]
  unsigned int v21; // [esp+18h] [ebp-24h]
  __m128 v22; // [esp+1Ch] [ebp-20h] BYREF
  __m128 v23; // [esp+2Ch] [ebp-10h] BYREF

  v4 = (__m128 *)(this + 0x10);
  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), a4[4]);
  v5 = a4[5];
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(
                               _mm_shuffle_ps((__m128)a3, (__m128)a3, 0),
                               _mm_add_ps(
                                 _mm_add_ps(
                                   _mm_mul_ps(*(__m128 *)(this + 0x10), _mm_shuffle_ps(v5, v5, 0)),
                                   _mm_mul_ps(*(__m128 *)(this + 0x20), _mm_shuffle_ps(v5, v5, 0x55))),
                                 _mm_mul_ps(*(__m128 *)(this + 0x30), _mm_shuffle_ps(v5, v5, 0xAA))));
  *(_WORD *)(this + 0xBE) = a4->m128_i16[2];
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(float *)(this + 0x5C) = *a2;
  v6 = *(__m128 *)(this + 0xD0);
  v7 = _mm_mul_ps(v6, v6);
  v16 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]);
  if ( v16 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v18 = *(float *)(this + 0xB4) / sqrt(v16);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v6);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3];
  v22.m128_u64[0] = *(_QWORD *)(this + 0x80);
  v8 = *(_DWORD *)(this + 0x88);
  v22.m128_i32[3] = *(_DWORD *)(this + 0x8C);
  v22.m128_i32[2] = v8;
  *(__m128 *)(this + 0x70) = v22;
  v9 = *(__m128 *)(this + 0xE0);
  *(float *)&v19 = a2[2] * flt_A3D65C;
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v9);
  v11 = _mm_mul_ps(v10, v10);
  v12 = (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]))
      * flt_A96F74;
  v23 = v10;
  v17 = v12;
  v13 = *(float *)(this + 0xB8) * a2[2];
  if ( flt_A37450 < v13 )
    v13 = flt_A37450;
  v20 = v13 * v13;
  if ( v17 > (double)v20 )
  {
    *(float *)&v21 = v13 / sqrt(v17);
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v9);
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v10);
    v17 = v13 * v13;
  }
  v23.m128_f32[3] = fConstant_1 - v17 * flt_A96F70 - v17 * v17 * flt_A96F6C - v17 * v17 * v17 * flt_A96F68;
  sub_889470(&v22, &v23, &v22);
  sub_4D6830(&v22);
  v14 = v22;
  v4[9] = _mm_add_ps(v23, v23);
  v4[9].m128_f32[3] = sqrt(v17) * flt_A9AEBC;
  v4[7] = v14;
  sub_8B1DD0(v4->m128_f32, v4[7].m128_f32);
  v4[3] = _mm_sub_ps(
            v4[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v4, _mm_shuffle_ps(v4[8], v4[8], 0)),
                _mm_mul_ps(v4[1], _mm_shuffle_ps(v4[8], v4[8], 0x55))),
              _mm_mul_ps(v4[2], _mm_shuffle_ps(v4[8], v4[8], 0xAA))));
  return a4 + 8;
}
