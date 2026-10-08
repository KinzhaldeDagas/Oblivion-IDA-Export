int __thiscall sub_8EA220(int this, float *a2, int a3, int a4)
{
  __m128 *v4; // esi
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  __m128 *v7; // edi
  __int32 v8; // ebx
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  double v12; // st7
  double v13; // st7
  __m128 v14; // xmm0
  float v16; // [esp+14h] [ebp-2Ch]
  float v17; // [esp+14h] [ebp-2Ch]
  unsigned int v18; // [esp+18h] [ebp-28h]
  unsigned int v19; // [esp+18h] [ebp-28h]
  float v20; // [esp+18h] [ebp-28h]
  unsigned int v21; // [esp+1Ch] [ebp-24h]
  __m128 v22; // [esp+20h] [ebp-20h] BYREF
  __m128 v23; // [esp+30h] [ebp-10h] BYREF

  v4 = (__m128 *)(this + 0x10); /*0x8ea233*/
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60); /*0x8ea236*/
  *(float *)(this + 0x5C) = *a2; /*0x8ea23c*/
  v5 = *(__m128 *)(this + 0xD0); /*0x8ea245*/
  v6 = _mm_mul_ps(v5, v5); /*0x8ea253*/
  v16 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]); /*0x8ea270*/
  if ( v16 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) ) /*0x8ea281*/
  {
    *(float *)&v18 = *(float *)(this + 0xB4) / sqrt(v16); /*0x8ea28f*/
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v5); /*0x8ea2a3*/
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps( /*0x8ea2cf*/
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3]; /*0x8ea2d6*/
  v7 = (__m128 *)(this + 0x80); /*0x8ea2d9*/
  v22.m128_u64[0] = *(_QWORD *)(this + 0x80); /*0x8ea2e0*/
  v8 = *(_DWORD *)(this + 0x88); /*0x8ea2eb*/
  v22.m128_i32[3] = *(_DWORD *)(this + 0x8C); /*0x8ea2f1*/
  v22.m128_i32[2] = v8; /*0x8ea2f5*/
  *(__m128 *)(this + 0x70) = v22; /*0x8ea2fe*/
  v9 = *(__m128 *)(this + 0xE0); /*0x8ea30b*/
  *(float *)&v19 = a2[2] * kHeadBodyNormalMatchRadius; /*0x8ea316*/
  v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v19, (__m128)v19, 0), v9); /*0x8ea327*/
  v11 = _mm_mul_ps(v10, v10); /*0x8ea32d*/
  v12 = (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x8ea34e*/
              + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0]))
      * flt_A96F74;
  v23 = v10; /*0x8ea354*/
  v17 = v12; /*0x8ea359*/
  v13 = *(float *)(this + 0xB8) * a2[2]; /*0x8ea363*/
  if ( flt_A37450 < v13 ) /*0x8ea373*/
    v13 = flt_A37450; /*0x8ea377*/
  v20 = v13 * v13; /*0x8ea381*/
  if ( v17 > (double)v20 ) /*0x8ea392*/
  {
    *(float *)&v21 = v13 / sqrt(v17); /*0x8ea3a0*/
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v9); /*0x8ea3b4*/
    v23 = _mm_mul_ps(_mm_shuffle_ps((__m128)v21, (__m128)v21, 0), v10); /*0x8ea3c9*/
    v17 = v13 * v13; /*0x8ea3ce*/
  }
  v23.m128_f32[3] = fConstant_1 - v17 * flt_A96F70 - v17 * v17 * flt_A96F6C - v17 * v17 * v17 * flt_A96F68; /*0x8ea410*/
  sub_889470(&v22, &v23, &v22); /*0x8ea414*/
  hkQuaternion_Normalize(&v22); /*0x8ea41d*/
  v14 = v22; /*0x8ea433*/
  v4[9] = _mm_add_ps(v23, v23); /*0x8ea43b*/
  v4[9].m128_f32[3] = sqrt(v17) * flt_A9AEA0; /*0x8ea44b*/
  *v7 = v14; /*0x8ea451*/
  hkMatrix3_SetFromQuaternion(v4->m128_f32, v4[7].m128_f32); /*0x8ea454*/
  v4[3] = _mm_sub_ps( /*0x8ea49a*/
            v4[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v4, _mm_shuffle_ps(v4[8], v4[8], 0)),
                _mm_mul_ps(v4[1], _mm_shuffle_ps(v4[8], v4[8], 0x55))),
              _mm_mul_ps(v4[2], _mm_shuffle_ps(v4[8], v4[8], 0xAA))));
  return a4 + 0x80; /*0x8ea49e*/
}
