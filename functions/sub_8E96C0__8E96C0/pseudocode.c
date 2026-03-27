int __thiscall sub_8E96C0(int this, int a2, __m128 *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  __m128 *v6; // esi
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 *v9; // edi
  __int32 v10; // ebx
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  double v14; // st7
  double v15; // st7
  __m128 v16; // xmm0
  int result; // eax
  float v18; // [esp+8h] [ebp-2Ch]
  float v19; // [esp+8h] [ebp-2Ch]
  unsigned int v20; // [esp+Ch] [ebp-28h]
  unsigned int v21; // [esp+Ch] [ebp-28h]
  unsigned int v22; // [esp+Ch] [ebp-28h]
  unsigned int v23; // [esp+Ch] [ebp-28h]
  float v24; // [esp+Ch] [ebp-28h]
  unsigned int v25; // [esp+10h] [ebp-24h]
  __m128 v26; // [esp+14h] [ebp-20h] BYREF
  __m128 v27; // [esp+24h] [ebp-10h] BYREF

  *(__m128 *)(this + 0xD0) = _mm_add_ps(*(__m128 *)(this + 0xD0), *a3);
  v3 = *(float *)(a2 + 8);
  v4 = fConstant_1 - v3 * *(float *)(this + 0xC8);
  if ( *(float *)&SrcStr > v4 )
    v4 = *(float *)&SrcStr;
  *(float *)&v20 = v4;
  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), *(__m128 *)(this + 0xD0));
  v5 = fConstant_1 - v3 * *(float *)(this + 0xCC);
  if ( *(float *)&SrcStr > v5 )
    v5 = *(float *)&SrcStr;
  *(float *)&v21 = v5;
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), *(__m128 *)(this + 0xE0));
  v6 = (__m128 *)(this + 0x10);
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60);
  *(_DWORD *)(this + 0x5C) = *(_DWORD *)a2;
  v7 = *(__m128 *)(this + 0xD0);
  v8 = _mm_mul_ps(v7, v7);
  v18 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
  if ( v18 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) )
  {
    *(float *)&v22 = *(float *)(this + 0xB4) / sqrt(v18);
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v22, (__m128)v22, 0), v7);
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps(
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*(unsigned int *)(a2 + 8), (__m128)*(unsigned int *)(a2 + 8), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(_DWORD *)(this + 0x6C) = *(_DWORD *)(a2 + 0xC);
  v9 = (__m128 *)(this + 0x80);
  v26.m128_u64[0] = *(_QWORD *)(this + 0x80);
  v10 = *(_DWORD *)(this + 0x88);
  v26.m128_i32[3] = *(_DWORD *)(this + 0x8C);
  v26.m128_i32[2] = v10;
  *(__m128 *)(this + 0x70) = v26;
  v11 = *(__m128 *)(this + 0xE0);
  *(float *)&v23 = *(float *)(a2 + 8) * flt_A3D65C;
  v12 = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), v11);
  v13 = _mm_mul_ps(v12, v12);
  v14 = (float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]))
      * flt_A96F74;
  v27 = v12;
  v19 = v14;
  v15 = *(float *)(this + 0xB8) * *(float *)(a2 + 8);
  if ( flt_A37450 < v15 )
    v15 = flt_A37450;
  v24 = v15 * v15;
  if ( v19 > (double)v24 )
  {
    *(float *)&v25 = v15 / sqrt(v19);
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v11);
    v27 = _mm_mul_ps(_mm_shuffle_ps((__m128)v25, (__m128)v25, 0), v12);
    v19 = v15 * v15;
  }
  v27.m128_f32[3] = fConstant_1 - v19 * flt_A96F70 - v19 * v19 * flt_A96F6C - v19 * v19 * v19 * flt_A96F68;
  sub_889470(&v26, &v27, &v26);
  sub_4D6830(&v26);
  v16 = v26;
  v6[9] = _mm_add_ps(v27, v27);
  v6[9].m128_f32[3] = sqrt(v19) * flt_A9AD28;
  *v9 = v16;
  result = sub_8B1DD0(v6->m128_f32, v6[7].m128_f32);
  v6[3] = _mm_sub_ps(
            v6[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v6, _mm_shuffle_ps(v6[8], v6[8], 0)),
                _mm_mul_ps(v6[1], _mm_shuffle_ps(v6[8], v6[8], 0x55))),
              _mm_mul_ps(v6[2], _mm_shuffle_ps(v6[8], v6[8], 0xAA))));
  return result;
}
