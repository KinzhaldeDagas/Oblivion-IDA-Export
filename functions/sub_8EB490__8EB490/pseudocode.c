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

  *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)a3, (__m128)a3, 0), *(__m128 *)(a4 + 0x40)); /*0x8eb4bc*/
  v5 = *(__m128 *)(a4 + 0x50); /*0x8eb4c3*/
  v6 = (__m128 *)(this + 0x10); /*0x8eb4cf*/
  *(__m128 *)(this + 0xE0) = _mm_mul_ps( /*0x8eb503*/
                               _mm_shuffle_ps((__m128)a3, (__m128)a3, 0),
                               _mm_add_ps(
                                 _mm_add_ps(
                                   _mm_mul_ps(*(__m128 *)(this + 0x10), _mm_shuffle_ps(v5, v5, 0)),
                                   _mm_mul_ps(*(__m128 *)(this + 0x20), _mm_shuffle_ps(v5, v5, 0x55))),
                                 _mm_mul_ps(*(__m128 *)(this + 0x30), _mm_shuffle_ps(v5, v5, 0xAA))));
  *(_WORD *)(this + 0xBE) = *(_WORD *)(a4 + 4); /*0x8eb50e*/
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60); /*0x8eb51c*/
  *(float *)(this + 0x5C) = *a2; /*0x8eb522*/
  v7 = *(__m128 *)(this + 0xD0); /*0x8eb52b*/
  v8 = _mm_mul_ps(v7, v7); /*0x8eb539*/
  v18 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]); /*0x8eb556*/
  if ( v18 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) ) /*0x8eb567*/
  {
    *(float *)&v20 = *(float *)(this + 0xB4) / sqrt(v18); /*0x8eb575*/
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v7); /*0x8eb589*/
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps( /*0x8eb5b5*/
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3]; /*0x8eb5bc*/
  v24.m128_u64[0] = *(_QWORD *)(this + 0x80); /*0x8eb5c4*/
  v9 = *(_DWORD *)(this + 0x8C); /*0x8eb5d2*/
  v24.m128_i32[2] = *(_DWORD *)(this + 0x88); /*0x8eb5d5*/
  v24.m128_i32[3] = v9; /*0x8eb5d9*/
  *(__m128 *)(this + 0x70) = v24; /*0x8eb5e2*/
  v10 = *(__m128 *)(this + 0xE0); /*0x8eb5ef*/
  *(float *)&v21 = a2[2] * kHeadBodyNormalMatchRadius; /*0x8eb5fa*/
  v11 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v10); /*0x8eb60b*/
  v12 = _mm_mul_ps(v11, v11); /*0x8eb611*/
  v13 = (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0] /*0x8eb632*/
              + (float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]))
      * flt_A96F74;
  v25 = v11; /*0x8eb638*/
  v19 = v13; /*0x8eb63d*/
  v14 = *(float *)(this + 0xB8) * a2[2]; /*0x8eb647*/
  if ( flt_A37450 < v14 ) /*0x8eb657*/
    v14 = flt_A37450; /*0x8eb65b*/
  v22 = v14 * v14; /*0x8eb665*/
  if ( v19 > (double)v22 ) /*0x8eb676*/
  {
    v15 = sqrt(v19); /*0x8eb684*/
    v19 = v14 * v14; /*0x8eb686*/
    *(float *)&v23 = v14 / v15; /*0x8eb68c*/
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), v10); /*0x8eb6aa*/
    v25 = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), v11); /*0x8eb6b1*/
  }
  v25.m128_f32[3] = fConstant_1 - v19 * flt_A96F70 - v19 * v19 * flt_A96F6C - v19 * v19 * v19 * flt_A96F68; /*0x8eb6f4*/
  sub_889470(&v24, &v25, &v24); /*0x8eb6f8*/
  hkQuaternion_Normalize(&v24); /*0x8eb701*/
  v16 = v24; /*0x8eb717*/
  v6[9] = _mm_add_ps(v25, v25); /*0x8eb71f*/
  v6[9].m128_f32[3] = sqrt(v19) * flt_A9AFC8; /*0x8eb72f*/
  v6[7] = v16; /*0x8eb735*/
  hkMatrix3_SetFromQuaternion(v6->m128_f32, v6[7].m128_f32); /*0x8eb739*/
  v6[3] = _mm_sub_ps( /*0x8eb77b*/
            v6[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v6, _mm_shuffle_ps(v6[8], v6[8], 0)),
                _mm_mul_ps(v6[1], _mm_shuffle_ps(v6[8], v6[8], 0x55))),
              _mm_mul_ps(v6[2], _mm_shuffle_ps(v6[8], v6[8], 0xAA))));
  *(_OWORD *)(this + 0xD0) = *(_OWORD *)(a4 + 0x10); /*0x8eb783*/
  *(__m128 *)(this + 0xE0) = _mm_add_ps( /*0x8eb7bd*/
                               _mm_add_ps(
                                 _mm_mul_ps(*v6, _mm_shuffle_ps(*(__m128 *)(a4 + 0x20), *(__m128 *)(a4 + 0x20), 0)),
                                 _mm_mul_ps(v6[1], _mm_shuffle_ps(*(__m128 *)(a4 + 0x20), *(__m128 *)(a4 + 0x20), 0x55))),
                               _mm_mul_ps(v6[2], _mm_shuffle_ps(*(__m128 *)(a4 + 0x20), *(__m128 *)(a4 + 0x20), 0xAA)));
  return a4 + 0x80; /*0x8eb7cc*/
}
