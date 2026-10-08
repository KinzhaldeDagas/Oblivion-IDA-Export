// TES4 authoritative shared character-state velocity solver. Input block is eight hkVector4-sized slots: +0x00 response scalar x, +0x10 basis vector A, +0x20 basis vector B, +0x30 solver up/third basis, +0x40 current velocity, +0x50 desired local velocity, +0x60 max local delta x, +0x70 reference/bias velocity. Output writes the solved world/Havok velocity to the second argument.
void __cdecl bhkCharacterState_SolveVelocityToTarget(__m128 *a1, __m128 *a2)
{
  __m128 v2; // xmm2
  __m128 v3; // xmm0
  float v4; // xmm1_4
  __m128 v5; // xmm3
  __m128 v6; // xmm0
  __m128 v7; // xmm4
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm3
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  double v18; // st7
  float v19; // xmm2_4
  __m128 v20; // xmm4
  __m128 v21; // xmm0
  __m128 v22; // xmm0
  unsigned int v23; // [esp+Ch] [ebp-74h]
  __m128 v24; // [esp+10h] [ebp-70h] BYREF
  __m128 v25; // [esp+20h] [ebp-60h]
  __int128 v26; // [esp+30h] [ebp-50h]
  __m128 v27; // [esp+40h] [ebp-40h]
  __m128 v28[3]; // [esp+50h] [ebp-30h] BYREF

  v2 = _mm_sub_ps( /*0x91f46b*/
         _mm_mul_ps(_mm_shuffle_ps(a1[1], a1[1], 0xC9), _mm_shuffle_ps(a1[2], a1[2], 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(a1[1], a1[1], 0xD2), _mm_shuffle_ps(a1[2], a1[2], 0xC9)));// Builds local solver axis0 from cross(input+0x10, input+0x20); exits if this cross product is below the small threshold at 0xA9DD54.
  v3 = _mm_mul_ps(v2, v2); /*0x91f471*/
  if ( (float)(_mm_shuffle_ps(v3, v3, 0xAA).m128_f32[0] /*0x91f4a1*/
             + (float)(_mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0])) >= (double)flt_A9DD54 )
  {
    v4 = _mm_shuffle_ps(v3, v3, 0x55).m128_f32[0] + v3.m128_f32[0]; /*0x91f4ae*/
    v5 = _mm_shuffle_ps(v3, v3, 0xAA); /*0x91f4b5*/
    v6 = v5; /*0x91f4b9*/
    v6.m128_f32[0] = v5.m128_f32[0] + v4; /*0x91f4bc*/
    v24 = v6; /*0x91f4c0*/
    v24.m128_f32[0] = 1.0 / fsqrt(v5.m128_f32[0] + v4); /*0x91f4c9*/
    v26 = 0x40400000u; /*0x91f4ea*/
    v7 = (__m128)0x3F000000u; /*0x91f4fb*/
    v27 = (__m128)0x3F000000u; /*0x91f501*/
    v7.m128_f32[0] = 0.5 * v24.m128_f32[0]; /*0x91f506*/
    v8 = v7; /*0x91f50a*/
    v8.m128_f32[0] = (float)(0.5 * v24.m128_f32[0]) /*0x91f50d*/
                   * (float)(3.0 - (float)((float)((float)(v5.m128_f32[0] + v4) * v24.m128_f32[0]) * v24.m128_f32[0]));
    v9 = a1[3]; /*0x91f51b*/
    v10 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v2); /*0x91f51f*/
    v11 = _mm_sub_ps( /*0x91f54b*/
            _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9)));// Builds the remaining solver basis from normalized axis0 and input+0x30, producing the matrix used by hkBasis_ProjectVector/TransformVector.
    v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v9, v9, 0xC9)); /*0x91f55c*/
    v13 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v9, v9, 0xD2)); /*0x91f56d*/
    v28[0] = v11; /*0x91f570*/
    v14 = a1[3]; /*0x91f575*/
    v28[1] = _mm_sub_ps(v13, v12); /*0x91f580*/
    v15 = a1[4]; /*0x91f585*/
    v28[2] = v14; /*0x91f58a*/
    v24 = _mm_sub_ps(v15, a1[7]);               // Slot +0x40 current velocity is solved relative to slot +0x70 reference/bias velocity before local projection. /*0x91f59f*/
    hkBasis_ProjectVector(&v24, v28, &v24);     // Projects current-minus-reference velocity into local basis via 0x88FD90. /*0x91f5a4*/
    v16 = _mm_sub_ps(a1[5], v24);               // Slot +0x50 is desired local velocity; solver computes desired-local minus current-local. /*0x91f5b5*/
    v17 = _mm_mul_ps(v16, v16); /*0x91f5bb*/
    if ( a1[6].m128_f32[0] * a1[6].m128_f32[0] < (float)(_mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x91f5ef*/
                                                       + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0]
                                                               + v17.m128_f32[0]))
                                               * a1->m128_f32[0] )// Slot +0x60.x is max local delta. If the desired delta exceeds the allowed response-scaled delta, the local delta is clamped before applying slot +0x00 response.
    {
      v18 = a1[6].m128_f32[0] / a1->m128_f32[0]; /*0x91f5f7*/
      v19 = _mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]; /*0x91f5fd*/
      v20 = _mm_shuffle_ps(v17, v17, 0xAA); /*0x91f604*/
      v21 = v20; /*0x91f608*/
      v21.m128_f32[0] = v20.m128_f32[0] + v19; /*0x91f60b*/
      v25 = v21; /*0x91f60f*/
      v25.m128_f32[0] = 1.0 / fsqrt(v20.m128_f32[0] + v19); /*0x91f618*/
      v22 = v27; /*0x91f63a*/
      v22.m128_f32[0] = (float)(v27.m128_f32[0] * v25.m128_f32[0]) /*0x91f643*/
                      * (float)(*(float *)&v26
                              - (float)((float)((float)(v20.m128_f32[0] + v19) * v25.m128_f32[0]) * v25.m128_f32[0]));
      *(float *)&v23 = v18; /*0x91f651*/
      v16 = _mm_mul_ps(_mm_shuffle_ps((__m128)v23, (__m128)v23, 0), _mm_mul_ps(_mm_shuffle_ps(v22, v22, 0), v16)); /*0x91f665*/
    }
    v24 = _mm_add_ps(v24, _mm_mul_ps(_mm_shuffle_ps((__m128)a1->m128_u32[0], (__m128)a1->m128_u32[0], 0), v16));// Applies slot +0x00 response scalar to the local delta and adds it to current local velocity. /*0x91f690*/
    hkBasis_TransformVector(a2, v28, &v24);     // Transforms solved local velocity back to world/Havok vector via 0x88FE00. /*0x91f695*/
    *a2 = _mm_add_ps(*a2, a1[7]);               // Adds slot +0x70 reference/bias velocity back after transforming solved local velocity to world/Havok space. /*0x91f6a4*/
  }
}
