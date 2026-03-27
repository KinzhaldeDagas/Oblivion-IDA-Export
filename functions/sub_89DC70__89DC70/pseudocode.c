int __thiscall sub_89DC70(int this, float *a2)
{
  __m128 *v2; // esi
  __m128 v3; // xmm1
  __m128 v4; // xmm0
  __m128 *v5; // edi
  __int32 v6; // ebx
  __m128 v7; // xmm2
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  double v10; // st7
  double v11; // st7
  __m128 v12; // xmm0
  int result; // eax
  float v14; // [esp+14h] [ebp-2Ch]
  float v15; // [esp+14h] [ebp-2Ch]
  unsigned int v16; // [esp+18h] [ebp-28h]
  unsigned int v17; // [esp+18h] [ebp-28h]
  float v18; // [esp+18h] [ebp-28h]
  unsigned int v19; // [esp+1Ch] [ebp-24h]
  __m128 v20; // [esp+20h] [ebp-20h] BYREF
  __m128 v21; // [esp+30h] [ebp-10h] BYREF

  v2 = (__m128 *)(this + 0x10);
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(float *)(this + 0x5C) = *a2;
  v3 = *(__m128 *)(this + 0xD0);
  v4 = _mm_mul_ps(v3, v3);
  v14 = _mm_shuffle_ps(v4, v4, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v4, v4, 0x55).m128_f32[0] + v4.m128_f32[0]);
  if ( v14 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v16 = *(float *)(this + 0xB4) / sqrt(v14);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v16, (__m128)v16, 0), v3);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3];
  v5 = (__m128 *)(this + 0x80);
  v20.m128_u64[0] = *(_QWORD *)(this + 0x80);
  v6 = *(_DWORD *)(this + 0x88);
  v20.m128_i32[3] = *(_DWORD *)(this + 0x8C);
  v20.m128_i32[2] = v6;
  *(__m128 *)(this + 0x70) = v20;
  v7 = *(__m128 *)(this + 0xE0);
  *(float *)&v17 = a2[2] * flt_A3D65C;
  v8 = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v7);
  v9 = _mm_mul_ps(v8, v8);
  v10 = (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]))
      * flt_A96F74;
  v21 = v8;
  v15 = v10;
  v11 = *(float *)(this + 0xB8) * a2[2];
  if ( flt_A37450 < v11 )
    v11 = flt_A37450;
  v18 = v11 * v11;
  if ( v15 > (double)v18 )
  {
    *(float *)&v19 = v11 / sqrt(v15);
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v7);
    v21 = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v8);
    v15 = v11 * v11;
  }
  v21.m128_f32[3] = fConstant_1 - v15 * flt_A96F70 - v15 * v15 * flt_A96F6C - v15 * v15 * v15 * flt_A96F68;
  sub_889470(&v20, &v21, &v20);
  sub_4D6830(&v20);
  v12 = v20;
  v2[9] = _mm_add_ps(v21, v21);
  v2[9].m128_f32[3] = sqrt(v15) * flt_A96F64;
  *v5 = v12;
  result = sub_8B1DD0(v2->m128_f32, v2[7].m128_f32);
  v2[3] = _mm_sub_ps(
            v2[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v2, _mm_shuffle_ps(v2[8], v2[8], 0)),
                _mm_mul_ps(v2[1], _mm_shuffle_ps(v2[8], v2[8], 0x55))),
              _mm_mul_ps(v2[2], _mm_shuffle_ps(v2[8], v2[8], 0xAA))));
  return result;
}
