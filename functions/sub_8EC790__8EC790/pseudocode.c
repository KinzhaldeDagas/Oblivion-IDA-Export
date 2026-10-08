// TES4 authoritative: active-surface constraint solver. Advances along input motion, activates earliest blocking planes, and recomputes sliding motion. It does not create a step-up/mantle displacement by itself.
void __cdecl hkSurfaceConstraintUtil_CalcSupportMotion(__m128 *a1, __m128 *a2)
{
  __int32 v2; // eax
  int v3; // ebx
  int v4; // eax
  __int32 v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  __int32 v9; // ecx
  int v10; // edx
  __int32 v11; // eax
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  double v15; // st7
  __m128 v16; // xmm0
  double v17; // st7
  double v18; // st7
  double v19; // st7
  __m128 v20; // xmm1
  char *v21; // ecx
  int v22; // edx
  int v23; // eax
  double v24; // st6
  __m128 *v25; // eax
  int v26; // eax
  __int32 v27; // ebx
  int *v28; // eax
  __int32 v29; // ecx
  double v30; // st7
  float v31; // [esp+Ch] [ebp-64h]
  float v32; // [esp+10h] [ebp-60h]
  float v33; // [esp+14h] [ebp-5Ch]
  int v34; // [esp+18h] [ebp-58h]
  unsigned int v35; // [esp+1Ch] [ebp-54h]
  unsigned int v36; // [esp+28h] [ebp-48h]
  int solverState[2]; // [esp+30h] [ebp-40h] BYREF
  char v38; // [esp+38h] [ebp-38h] BYREF
  int v39; // [esp+3Ch] [ebp-34h]
  int v40; // [esp+48h] [ebp-28h]
  int v41; // [esp+60h] [ebp-10h]
  float v42; // [esp+64h] [ebp-Ch]
  __m128 *v43; // [esp+68h] [ebp-8h]
  __m128 *v44; // [esp+6Ch] [ebp-4h]

  v2 = a1[4].m128_i32[0];                       // Input +0x40 is remaining solve distance/time scalar; output starts as a copy of input point and motion vector. /*0x8ec7a2*/
  a2[1] = a1[1]; /*0x8ec7a9*/
  v3 = 0; /*0x8ec7b0*/
  v32 = *(float *)&v2; /*0x8ec7b2*/
  *a2 = *a1; /*0x8ec7b6*/
  v4 = a1[4].m128_i32[3];                       // Input +0x4C is surface-constraint count; each active surface has a 0x10-byte state entry in output+0x24. /*0x8ec7b9*/
  v5 = 0; /*0x8ec7bc*/
  v41 = 0; /*0x8ec7c0*/
  v42 = 0.0; /*0x8ec7c4*/
  v43 = a1; /*0x8ec7c8*/
  v44 = a2; /*0x8ec7cc*/
  if ( v4 > 0 ) /*0x8ec7d0*/
  {
    v6 = 0; /*0x8ec7d2*/
    do /*0x8ec7fe*/
    {
      v7 = v6 + a2[2].m128_i32[1];              // Initializes per-surface state entries: selected/used bytes and accumulated distance/bias fields reset to zero. /*0x8ec7d7*/
      *(_BYTE *)(v7 + 1) = 0; /*0x8ec7d9*/
      *(_BYTE *)v7 = 0; /*0x8ec7dd*/
      *(_DWORD *)(v7 + 4) = 0; /*0x8ec7e0*/
      *(_DWORD *)(v7 + 8) = 0; /*0x8ec7e7*/
      *(_DWORD *)(v7 + 0xC) = 0; /*0x8ec7ee*/
      ++v5; /*0x8ec7f8*/
      v6 += 0x10; /*0x8ec7f9*/
    }
    while ( v5 < a1[4].m128_i32[3] ); /*0x8ec7fe*/
  }
  if ( v32 >= (double)*(float *)&SrcStr ) /*0x8ec80f*/
  {
    while ( 1 ) /*0x8ec827*/
    {
      v8 = 0xFFFFFFFF; /*0x8ec827*/
      v31 = v32; /*0x8ec82a*/
      v9 = 0; /*0x8ec82e*/
      v35 = 0xFFFFFFFF; /*0x8ec832*/
      if ( a1[4].m128_i32[3] > 0 ) /*0x8ec836*/
      {
        v10 = 0; /*0x8ec83c*/
        v34 = 0; /*0x8ec83e*/
        do /*0x8ec986*/
        {
          if ( (v3 < 1 || solverState[0] != v9) /*0x8ec872*/
            && (v3 < 2 || v39 != v9)
            && (v3 < 3 || v40 != v9)
            && !*(_DWORD *)(a2[2].m128_i32[1] + v10 + 0xC) )
          {
            v11 = a1[4].m128_i32[2]; /*0x8ec87d*/
            v12 = *(__m128 *)(v11 + v34 + 0x10);// Loads candidate surface data: vector at surface+0x00 and point/vector at surface+0x10 from the 0x40-byte constraint array. /*0x8ec884*/
            v13 = *(__m128 *)(v11 + v34); /*0x8ec889*/
            v14 = _mm_mul_ps(_mm_sub_ps(a2[1], v12), v13); /*0x8ec896*/
            v15 = -(float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0] /*0x8ec8bb*/
                         + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0]));// Computes positive blocking distance along current motion to this surface; non-positive values do not block the current solve step.
            v33 = v15; /*0x8ec8bd*/
            if ( v15 <= *(float *)&SrcStr ) /*0x8ec8cc*/
            {
              v3 = v41; /*0x8ec974*/
            }
            else
            {
              *(float *)&v36 = -v42; /*0x8ec8dc*/
              v16 = _mm_mul_ps(v13, _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps((__m128)v36, (__m128)v36, 0), v12))); /*0x8ec8fc*/
              v17 = (float)((float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]) /*0x8ec923*/
                          + (float)(_mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0]
                                  + _mm_shuffle_ps(v13, v13, 0xFF).m128_f32[0]));
              if ( v17 <= flt_A9AFD8 ) /*0x8ec936*/
                v17 = *(float *)&SrcStr; /*0x8ec93a*/
              v18 = v17 + *(float *)(v44[2].m128_i32[1] + v10 + 8); /*0x8ec947*/
              v3 = v41; /*0x8ec94b*/
              if ( v18 < v33 * v31 ) /*0x8ec960*/
              {
                v35 = v9;                       // Chooses the earliest blocking surface by shrinking the current step fraction/distance. /*0x8ec966*/
                v31 = v18 / v33; /*0x8ec96a*/
              }
            }
          }
          v34 += 0x40; /*0x8ec978*/
          ++v9; /*0x8ec980*/
          v10 += 0x10; /*0x8ec981*/
        }
        while ( v9 < a1[4].m128_i32[3] ); /*0x8ec986*/
        v8 = v35; /*0x8ec98c*/
      }
      if ( v31 > (double)flt_A79DB4 ) /*0x8ec99f*/
      {
        v19 = v31 + v42; /*0x8ec9a7*/
        v20 = a2[1]; /*0x8ec9af*/
        v42 = v19; /*0x8ec9bd*/
        v32 = v32 - v31; /*0x8ec9d9*/
        *a2 = _mm_add_ps(*a2, _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v31), (__m128)LODWORD(v31), 0), v20));// Advances output point by selectedStep * currentMotion; this is constraint sliding progress, not a hard upward snap. /*0x8ec9dd*/
        if ( v3 > 0 ) /*0x8ec9e0*/
        {
          v21 = &v38; /*0x8ec9e2*/
          v22 = v3; /*0x8ec9e6*/
          do /*0x8eca03*/
          {
            v23 = *(_DWORD *)v21; /*0x8ec9f0*/
            v24 = v31 + *(float *)(*(_DWORD *)v21 + 4); /*0x8ec9f6*/
            v21 += 0xC; /*0x8ec9f9*/
            --v22; /*0x8ec9fc*/
            *(float *)(v23 + 4) = v24; /*0x8ec9fd*/
            *(_BYTE *)v23 = 1; /*0x8eca00*/
          }
          while ( v22 ); /*0x8eca03*/
          v8 = v35; /*0x8eca05*/
        }
        v25 = v43; /*0x8eca09*/
        a2[2].m128_f32[0] = v19; /*0x8eca0d*/
        if ( v19 > v25[4].m128_f32[1] ) /*0x8eca18*/
          break; /*0x8eca18*/
      }
      if ( v8 < 0 ) /*0x8eca1c*/
      {
        a2[2].m128_i32[0] = a1[4].m128_i32[0];  // No more blocking surface: writes full requested solve distance into output progress field and returns. /*0x8eca7d*/
        return; /*0x8eca7d*/
      }
      v26 = 3 * v3; /*0x8eca1e*/
      v41 = v3 + 1; /*0x8eca22*/
      v27 = a2[2].m128_i32[1]; /*0x8eca30*/
      v28 = &solverState[v26]; /*0x8eca33*/
      v28[1] = a1[4].m128_i32[2] + (v8 << 6);   // Records the selected blocking surface in the active-plane set for recomputing the allowed motion direction. /*0x8eca37*/
      v29 = v27 + 0x10 * v8; /*0x8eca43*/
      v30 = *(float *)(v29 + 8) + flt_A9AFD8; /*0x8eca45*/
      v28[2] = v29; /*0x8eca4b*/
      *v28 = v8; /*0x8eca4e*/
      *(float *)(v29 + 8) = v30 + v30;          // Inflates this surface state bias by approximately 2*(oldBias + 1.1920929e-7) before recomputing active motion. /*0x8eca56*/
      hkSurfaceConstraintUtil_RecomputeActiveSurfaceMotion((int)solverState);// Recomputes current motion from the active surface set; active set is capped by the small stack records used here. /*0x8eca59*/
      if ( v32 < (double)*(float *)&SrcStr ) /*0x8eca6d*/
        return; /*0x8eca6d*/
      v3 = v41; /*0x8ec817*/
    }
  }
}
