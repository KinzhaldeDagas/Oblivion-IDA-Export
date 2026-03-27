__m128 *__thiscall sub_8E9D00(int this, float *a2, unsigned int a3, __m128 *a4)
{
  __m128 *v4; // esi
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __int32 v7; // ebx
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  double v11; // st7
  double v12; // st7
  __m128 v13; // xmm0
  float v15; // [esp+10h] [ebp-2Ch]
  float v16; // [esp+10h] [ebp-2Ch]
  unsigned int v17; // [esp+14h] [ebp-28h]
  unsigned int v18; // [esp+14h] [ebp-28h]
  float v19; // [esp+14h] [ebp-28h]
  unsigned int v20; // [esp+18h] [ebp-24h]
  __m128 v21; // [esp+1Ch] [ebp-20h] BYREF
  __m128 v22; // [esp+2Ch] [ebp-10h] BYREF

  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), a4[4]);
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), a4[5]);
  *(_WORD *)(this + 0xBE) = a4->m128_i16[2];
  v4 = (__m128 *)(this + 0x10);
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(float *)(this + 0x5C) = *a2;
  v5 = *(__m128 *)(this + 0xD0);
  v6 = _mm_mul_ps(v5, v5);
  v15 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]);
  if ( v15 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v17 = *(float *)(this + 0xB4) / sqrt(v15);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v5);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3];
  v21.m128_u64[0] = *(_QWORD *)(this + 0x80);
  v7 = *(_DWORD *)(this + 0x88);
  v21.m128_i32[3] = *(_DWORD *)(this + 0x8C);
  v21.m128_i32[2] = v7;
  *(__m128 *)(this + 0x70) = v21;
  v8 = *(__m128 *)(this + 0xE0);
  *(float *)&v18 = a2[2] * flt_A3D65C;
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v8);
  v10 = _mm_mul_ps(v9, v9);
  v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
      * flt_A96F74;
  v22 = v9;
  v16 = v11;
  v12 = *(float *)(this + 0xB8) * a2[2];
  if ( flt_A37450 < v12 )
    v12 = flt_A37450;
  v19 = v12 * v12;
  if ( v16 > (double)v19 )
  {
    *(float *)&v20 = v12 / sqrt(v16);
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v8);
    v22 = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v9);
    v16 = v12 * v12;
  }
  v22.m128_f32[3] = fConstant_1 - v16 * flt_A96F70 - v16 * v16 * flt_A96F6C - v16 * v16 * v16 * flt_A96F68;
  sub_889470(&v21, &v22, &v21);
  sub_4D6830(&v21);
  v13 = v21;
  v4[9] = _mm_add_ps(v22, v22);
  v4[9].m128_f32[3] = sqrt(v16) * flt_A9AD3C;
  v4[7] = v13;
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
