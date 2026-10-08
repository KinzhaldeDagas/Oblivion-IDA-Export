void __thiscall sub_892570(__m128 *this, int a2, __m128 *a3, __m128 *a4)
{
  int v5; // ecx
  double v6; // st7
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  double v9; // st5
  __m128 v10; // xmm0
  int v11; // ecx
  bool v12; // c0
  double v13; // st7
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  float v16; // xmm1_4
  float v17; // xmm3_4
  __m128 v18; // xmm0
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  __m128 v21; // xmm0
  float v22; // [esp+18h] [ebp-28h]
  float v23; // [esp+18h] [ebp-28h]
  float v24; // [esp+1Ch] [ebp-24h]
  float v25; // [esp+1Ch] [ebp-24h]
  __m128 v26; // [esp+20h] [ebp-20h] BYREF

  v22 = sub_89DA90((float *)*(_DWORD *)(a3[3].m128_i32[0] + 0x50)); /*0x89259a*/
  v5 = *(_DWORD *)(a3[3].m128_i32[0] + 0x30); /*0x8925a7*/
  v6 = v22; /*0x8925ae*/
  if ( v22 <= 0.0 || fFromMoveMassLimit <= v6 ) /*0x8925c6*/
  {
    *a4 = 0; /*0x8927c2*/
  }
  else
  {
    v7 = *a4; /*0x8925cc*/
    v23 = fConstant_2; /*0x8925d8*/
    v8 = _mm_mul_ps(v7, v7); /*0x8925dc*/
    v26.m128_i32[0] = fsqrt( /*0x8925f9*/
                        _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]));
    v24 = v26.m128_f32[0] / v6; /*0x892605*/
    v9 = dbl_A2FC70; /*0x89260d*/
    if ( v9 < v24 ) /*0x89261a*/
    {
      v10 = 0; /*0x89261e*/
      v25 = v9 / v24; /*0x892621*/
      v10.m128_f32[0] = v25; /*0x89262b*/
      *a4 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), v7); /*0x892639*/
    }
    v11 = v5 & 0x3F; /*0x892648*/
    if ( v11 == 0xA ) /*0x89264e*/
    {
      v12 = fFromMoveMassLimit * dbl_A2FAA0 < v6; /*0x89265c*/
      v13 = kFaceEarNormalMatchRadius; /*0x892660*/
      if ( v12 ) /*0x892665*/
        v23 = kFaceEarNormalMatchRadius; /*0x892667*/
      else
        v23 = *(float *)&dword_A46C30; /*0x892673*/
    }
    else
    {
      v13 = kFaceEarNormalMatchRadius; /*0x892679*/
    }
    if ( v11 == 0xE ) /*0x89267e*/
      v23 = v13; /*0x892680*/
    if ( (this->m128_i8[4] & 1) == 0 && (this->m128_i32[1] & 8) != 0 ) /*0x89269b*/
    {
      sub_8914C0(this + 0xFFFFFFE1, &v26); /*0x8926ac*/
      v26 = _mm_sub_ps(*a3, v26); /*0x8926bc*/
      if ( *((float *)this + 0x6D) * dbl_A6E700 < v26.m128_f32[2] ) /*0x8926d8*/
      {
        v14 = *(this + 0xF); /*0x8926de*/
        v15 = _mm_mul_ps(v14, v14); /*0x8926f0*/
        v15.m128_f32[0] = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x892702*/
                        + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
        v16 = 1.0 / fsqrt(v15.m128_f32[0]); /*0x892718*/
        v17 = *(float *)&dword_A46C30 - (float)((float)(v15.m128_f32[0] * v16) * v16); /*0x892724*/
        v18 = 0; /*0x892728*/
        v18.m128_f32[0] = (float)(kHeadBodyNormalMatchRadius * v16) * v17; /*0x892736*/
        v19 = _mm_mul_ps(*a4, *a4); /*0x89273a*/
        v26.m128_i32[0] = fsqrt( /*0x892757*/
                            _mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]));
        v20 = 0; /*0x892765*/
        v20.m128_f32[0] = v26.m128_f32[0]; /*0x89276e*/
        *a4 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v18, v18, 0), v14), _mm_shuffle_ps(v20, v20, 0)); /*0x892783*/
      }
    }
    v21 = 0; /*0x89278c*/
    v21.m128_f32[0] = v23; /*0x89278f*/
    *a4 = _mm_mul_ps(_mm_shuffle_ps(v21, v21, 0), *a4); /*0x8927a0*/
  }
}
