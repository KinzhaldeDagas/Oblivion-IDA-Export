int __thiscall sub_8EA4B0(int this, float *a2, int a3)
{
  __m128 *v3; // esi
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  __m128 *v6; // edi
  __int32 v7; // ebx
  __m128 v8; // xmm2
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  double v11; // st7
  double v12; // st7
  __m128 v13; // xmm0
  int result; // eax
  float v15; // [esp+14h] [ebp-2Ch]
  float v16; // [esp+14h] [ebp-2Ch]
  unsigned int v17; // [esp+18h] [ebp-28h]
  unsigned int v18; // [esp+18h] [ebp-28h]
  float v19; // [esp+18h] [ebp-28h]
  unsigned int v20; // [esp+1Ch] [ebp-24h]
  __m128 v21; // [esp+20h] [ebp-20h] BYREF
  __m128 v22; // [esp+30h] [ebp-10h] BYREF

  v3 = (__m128 *)(this + 0x10);
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(float *)(this + 0x5C) = *a2;
  v4 = *(__m128 *)(this + 0xD0);
  v5 = _mm_mul_ps(v4, v4);
  v15 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  if ( v15 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v17 = *(float *)(this + 0xB4) / sqrt(v15);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v4);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3];
  v6 = (__m128 *)(this + 0x80);
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
  v3[9] = _mm_add_ps(v22, v22);
  v3[9].m128_f32[3] = sqrt(v16) * flt_A9AEA0;
  *v6 = v13;
  result = sub_8B1DD0(v3->m128_f32, v3[7].m128_f32);
  v3[3] = _mm_sub_ps(
            v3[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v3, _mm_shuffle_ps(v3[8], v3[8], 0)),
                _mm_mul_ps(v3[1], _mm_shuffle_ps(v3[8], v3[8], 0x55))),
              _mm_mul_ps(v3[2], _mm_shuffle_ps(v3[8], v3[8], 0xAA))));
  return result;
}
