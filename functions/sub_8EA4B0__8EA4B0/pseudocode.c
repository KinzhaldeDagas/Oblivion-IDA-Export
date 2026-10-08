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

  v3 = (__m128 *)(this + 0x10); /*0x8ea4c3*/
  *(_OWORD *)(this + 0x50) = *(_OWORD *)(this + 0x60); /*0x8ea4c6*/
  *(float *)(this + 0x5C) = *a2; /*0x8ea4cc*/
  v4 = *(__m128 *)(this + 0xD0); /*0x8ea4d5*/
  v5 = _mm_mul_ps(v4, v4); /*0x8ea4e3*/
  v15 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]); /*0x8ea500*/
  if ( v15 > *(float *)(this + 0xB4) * *(float *)(this + 0xB4) ) /*0x8ea511*/
  {
    *(float *)&v17 = *(float *)(this + 0xB4) / sqrt(v15); /*0x8ea51f*/
    *(__m128 *)(this + 0xD0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v17, (__m128)v17, 0), v4); /*0x8ea533*/
  }
  *(__m128 *)(this + 0x60) = _mm_add_ps( /*0x8ea55f*/
                               *(__m128 *)(this + 0x60),
                               _mm_mul_ps(
                                 _mm_shuffle_ps((__m128)*((unsigned int *)a2 + 2), (__m128)*((unsigned int *)a2 + 2), 0),
                                 *(__m128 *)(this + 0xD0)));
  *(float *)(this + 0x6C) = a2[3]; /*0x8ea566*/
  v6 = (__m128 *)(this + 0x80); /*0x8ea569*/
  v21.m128_u64[0] = *(_QWORD *)(this + 0x80); /*0x8ea570*/
  v7 = *(_DWORD *)(this + 0x88); /*0x8ea57b*/
  v21.m128_i32[3] = *(_DWORD *)(this + 0x8C); /*0x8ea581*/
  v21.m128_i32[2] = v7; /*0x8ea585*/
  *(__m128 *)(this + 0x70) = v21; /*0x8ea58e*/
  v8 = *(__m128 *)(this + 0xE0); /*0x8ea59b*/
  *(float *)&v18 = a2[2] * kHeadBodyNormalMatchRadius; /*0x8ea5a6*/
  v9 = _mm_mul_ps(_mm_shuffle_ps((__m128)v18, (__m128)v18, 0), v8); /*0x8ea5b7*/
  v10 = _mm_mul_ps(v9, v9); /*0x8ea5bd*/
  v11 = (float)(_mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x8ea5de*/
              + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]))
      * flt_A96F74;
  v22 = v9; /*0x8ea5e4*/
  v16 = v11; /*0x8ea5e9*/
  v12 = *(float *)(this + 0xB8) * a2[2]; /*0x8ea5f3*/
  if ( flt_A37450 < v12 ) /*0x8ea603*/
    v12 = flt_A37450; /*0x8ea607*/
  v19 = v12 * v12; /*0x8ea611*/
  if ( v16 > (double)v19 ) /*0x8ea622*/
  {
    *(float *)&v20 = v12 / sqrt(v16); /*0x8ea630*/
    *(__m128 *)(this + 0xE0) = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v8); /*0x8ea644*/
    v22 = _mm_mul_ps(_mm_shuffle_ps((__m128)v20, (__m128)v20, 0), v9); /*0x8ea659*/
    v16 = v12 * v12; /*0x8ea65e*/
  }
  v22.m128_f32[3] = fConstant_1 - v16 * flt_A96F70 - v16 * v16 * flt_A96F6C - v16 * v16 * v16 * flt_A96F68; /*0x8ea6a0*/
  sub_889470(&v21, &v22, &v21); /*0x8ea6a4*/
  hkQuaternion_Normalize(&v21); /*0x8ea6ad*/
  v13 = v21; /*0x8ea6c3*/
  v3[9] = _mm_add_ps(v22, v22); /*0x8ea6cb*/
  v3[9].m128_f32[3] = sqrt(v16) * flt_A9AEA0; /*0x8ea6db*/
  *v6 = v13; /*0x8ea6e1*/
  result = hkMatrix3_SetFromQuaternion(v3->m128_f32, v3[7].m128_f32); /*0x8ea6e4*/
  v3[3] = _mm_sub_ps( /*0x8ea727*/
            v3[5],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*v3, _mm_shuffle_ps(v3[8], v3[8], 0)),
                _mm_mul_ps(v3[1], _mm_shuffle_ps(v3[8], v3[8], 0x55))),
              _mm_mul_ps(v3[2], _mm_shuffle_ps(v3[8], v3[8], 0xAA))));
  return result; /*0x8ea72b*/
}
