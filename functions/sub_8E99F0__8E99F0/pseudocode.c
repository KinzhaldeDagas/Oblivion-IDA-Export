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

  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(__m128 *)(a4 + 0x40)); /*0x8e9a1c*/
  *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(__m128 *)(a4 + 0x50)); /*0x8e9a31*/
  *(_WORD *)(this + 0xBE) = *(_WORD *)(a4 + 4); /*0x8e9a3c*/
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60); /*0x8e9a4d*/
  *(float *)(this + 0x5C) = *a2; /*0x8e9a53*/
  v5 = *(__m128 *)(this + 0xD0); /*0x8e9a5c*/
  v6 = _mm_mul_ps(v5, v5); /*0x8e9a6a*/
  v16 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x8e9a87*/
  if ( v16 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) ) /*0x8e9a98*/
  {
    *(float *)&v18 = *(float *)(this + 0xB4) / sqrt(v16); /*0x8e9aa6*/
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v5); /*0x8e9aba*/
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps( /*0x8e9ae6*/
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3]; /*0x8e9aed*/
  v22.m128_u64[0] = *(_QWORD *)(this + 0x80); /*0x8e9af5*/
  v7 = *(_DWORD *)(this + 0x8C); /*0x8e9b03*/
  v22.m128_i32[2] = *(_DWORD *)(this + 0x88); /*0x8e9b06*/
  v22.m128_i32[3] = v7; /*0x8e9b0a*/
  *(__m128 *)(this + 0x70) = v22; /*0x8e9b13*/
  v8 = *(__m128 *)(this + 0xE0); /*0x8e9b20*/
  *(float *)&v19 = a2[2] * kHeadBodyNormalMatchRadius; /*0x8e9b2b*/
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v8); /*0x8e9b3c*/
  v10 = _mm_mul_ps(v9, v9); /*0x8e9b42*/
  v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x8e9b63*/
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
      * flt_A96F74;
  v23 = v9; /*0x8e9b69*/
  v17 = v11; /*0x8e9b6e*/
  v12 = *(float *)(this + 0xB8) * a2[2]; /*0x8e9b78*/
  if ( flt_A37450 < v12 ) /*0x8e9b88*/
    v12 = flt_A37450; /*0x8e9b8c*/
  v20 = v12 * v12; /*0x8e9b96*/
  if ( v17 > (double)v20 ) /*0x8e9ba7*/
  {
    v13 = sqrt(v17); /*0x8e9bb5*/
    v17 = v12 * v12; /*0x8e9bb7*/
    *(float *)&v21 = v12 / v13; /*0x8e9bbd*/
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v8); /*0x8e9bdb*/
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v9); /*0x8e9be2*/
  }
  v23.m128_f32[3] = fConstant_1 - v17 * flt_A96F70 - v17 * v17 * flt_A96F6C - v17 * v17 * v17 * flt_A96F68; /*0x8e9c25*/
  sub_889470(&v22, &v23, &v22); /*0x8e9c29*/
  hkQuaternion_Normalize(&v22); /*0x8e9c32*/
  v14 = v22; /*0x8e9c48*/
  *(__m128 *)(this + 0xA0) = _mm_add_ps(v23, v23); /*0x8e9c50*/
  *(float *)(this + 0xAC) = sqrt(v17) * flt_A9AD28; /*0x8e9c60*/
  *(__m128 *)(this + 0x80) = v14; /*0x8e9c66*/
  hkMatrix3_SetFromQuaternion((float *)(this + 0x10), (float *)(this + 0x80)); /*0x8e9c6a*/
  *(__m128 *)(this + 0x40) = _mm_sub_ps( /*0x8e9cac*/
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
  *(_OWORD *)(this + 0xD0) = *(_OWORD *)(a4 + 0x10); /*0x8e9cb4*/
  *(_OWORD *)(this + 0xE0) = *(_OWORD *)(a4 + 0x20); /*0x8e9cbf*/
  return a4 + 0x80; /*0x8e9cce*/
}
