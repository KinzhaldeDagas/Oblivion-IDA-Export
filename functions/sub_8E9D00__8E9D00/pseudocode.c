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

  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), a4[4]); /*0x8e9d2a*/
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), a4[5]); /*0x8e9d3f*/
  *(_WORD *)(this + 0xBE) = a4->m128_i16[2]; /*0x8e9d4a*/
  v4 = (__m128 *)(this + 0x10); /*0x8e9d58*/
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60); /*0x8e9d5b*/
  *(float *)(this + 0x5C) = *a2; /*0x8e9d61*/
  v5 = *(__m128 *)(this + 0xD0); /*0x8e9d6a*/
  v6 = _mm_mul_ps(v5, v5); /*0x8e9d78*/
  v15 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x8e9d95*/
  if ( v15 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) ) /*0x8e9da6*/
  {
    *(float *)&v17 = *(float *)(this + 0xB4) / sqrt(v15); /*0x8e9db4*/
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v5); /*0x8e9dc8*/
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps( /*0x8e9df4*/
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3]; /*0x8e9dfb*/
  v21.m128_u64[0] = *(_QWORD *)(this + 0x80); /*0x8e9e03*/
  v7 = *(_DWORD *)(this + 0x88); /*0x8e9e0e*/
  v21.m128_i32[3] = *(_DWORD *)(this + 0x8C); /*0x8e9e14*/
  v21.m128_i32[2] = v7; /*0x8e9e18*/
  *(__m128 *)(this + 0x70) = v21; /*0x8e9e21*/
  v8 = *(__m128 *)(this + 0xE0); /*0x8e9e2e*/
  *(float *)&v18 = a2[2] * kHeadBodyNormalMatchRadius; /*0x8e9e39*/
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v8); /*0x8e9e4a*/
  v10 = _mm_mul_ps(v9, v9); /*0x8e9e50*/
  v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x8e9e71*/
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
      * flt_A96F74;
  v22 = v9; /*0x8e9e77*/
  v16 = v11; /*0x8e9e7c*/
  v12 = *(float *)(this + 0xB8) * a2[2]; /*0x8e9e86*/
  if ( flt_A37450 < v12 ) /*0x8e9e96*/
    v12 = flt_A37450; /*0x8e9e9a*/
  v19 = v12 * v12; /*0x8e9ea4*/
  if ( v16 > (double)v19 ) /*0x8e9eb5*/
  {
    *(float *)&v20 = v12 / sqrt(v16); /*0x8e9ec3*/
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v8); /*0x8e9ed7*/
    v22 = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v9); /*0x8e9eec*/
    v16 = v12 * v12; /*0x8e9ef1*/
  }
  v22.m128_f32[3] = fConstant_1 - v16 * flt_A96F70 - v16 * v16 * flt_A96F6C - v16 * v16 * v16 * flt_A96F68; /*0x8e9f33*/
  sub_889470(&v21, &v22, &v21); /*0x8e9f37*/
  hkQuaternion_Normalize(&v21); /*0x8e9f40*/
  v13 = v21; /*0x8e9f56*/
  v4[9] = _mm_add_ps(v22, v22); /*0x8e9f5e*/
  v4[9].m128_f32[3] = sqrt(v16) * flt_A9AD3C; /*0x8e9f6e*/
  v4[7] = v13; /*0x8e9f74*/
  hkMatrix3_SetFromQuaternion(v4->m128_f32, v4[7].m128_f32); /*0x8e9f78*/
  v4[3] = _mm_sub_ps( /*0x8e9fc1*/
            v4[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v4, _mm_shuffle_ps(v4[8], v4[8], 0)),
                _mm_mul_ps(v4[1], _mm_shuffle_ps(v4[8], v4[8], 0x55))),
              _mm_mul_ps(v4[2], _mm_shuffle_ps(v4[8], v4[8], 0xAA))));
  return a4 + 8; /*0x8e9fc5*/
}
