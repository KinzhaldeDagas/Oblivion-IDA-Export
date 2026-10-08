// Projects a point/motion against two active surface planes; falls back to single-plane projections when the pair is degenerate or incompatible.
void __usercall hkSurfaceConstraintUtil_ProjectAgainstTwoPlanes(
        int solverState@<edi>,
        __m128 *surfaceA,
        __m128 *surfaceB,
        __m128 *inputPoint,
        __m128 *outPoint)
{
  __m128 v5; // xmm6
  __m128 v6; // xmm0
  __m128 v7; // xmm7
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 v10; // xmm0
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm7
  __m128 v17; // xmm2
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm1
  __m128 v21; // xmm1
  __m128 *v22; // eax
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm3
  float v26; // xmm5_4
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  long double v29; // st7
  double v30; // st5
  double v31; // st6
  double v32; // st5
  float v33; // [esp+Ch] [ebp-40h]
  float v34; // [esp+10h] [ebp-3Ch]
  float v35; // [esp+10h] [ebp-3Ch]
  float v36; // [esp+10h] [ebp-3Ch]
  float v37; // [esp+14h] [ebp-38h]
  unsigned int v38; // [esp+14h] [ebp-38h]
  float v39; // [esp+18h] [ebp-34h]
  unsigned int v40; // [esp+18h] [ebp-34h]
  __m128 v41; // [esp+1Ch] [ebp-30h]
  __m128 v42; // [esp+1Ch] [ebp-30h]
  __m128 v43; // [esp+2Ch] [ebp-20h]

  v5 = *surfaceB; /*0x8ebcdd*/
  v6 = *surfaceA; /*0x8ebce4*/
  v43 = _mm_shuffle_ps(v6, v6, 0xD2); /*0x8ebcf7*/
  v41 = _mm_shuffle_ps(v6, v6, 0xC9); /*0x8ebcfc*/
  v7 = _mm_shuffle_ps(v5, v5, 0xD2); /*0x8ebd07*/
  v8 = _mm_shuffle_ps(v5, v5, 0xC9); /*0x8ebd11*/
  v9 = _mm_sub_ps(_mm_mul_ps(v41, v7), _mm_mul_ps(v43, v8)); /*0x8ebd18*/
  v10 = _mm_mul_ps(v9, v9); /*0x8ebd1e*/
  v37 = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0] /*0x8ebd3b*/
      + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
  if ( v37 <= (double)flt_A9AFD8 ) /*0x8ebd4e*/
    goto LABEL_3; /*0x8ebd4e*/
  *(float *)&v38 = fConstant_1 / sqrt(v37); /*0x8ebd6c*/
  v11 = (__m128)v38; /*0x8ebd70*/
  v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v9); /*0x8ebd7d*/
  v13 = _mm_shuffle_ps(v12, v12, 0xC9); /*0x8ebd83*/
  v14 = _mm_shuffle_ps(v12, v12, 0xD2); /*0x8ebd92*/
  v15 = _mm_sub_ps(_mm_mul_ps(v8, v14), _mm_mul_ps(v7, v13)); /*0x8ebd9e*/
  v16 = _mm_mul_ps(v14, v41); /*0x8ebda1*/
  v17 = _mm_mul_ps(v13, v43); /*0x8ebda4*/
  v18 = _mm_mul_ps(v5, surfaceB[1]); /*0x8ebdae*/
  v19 = _mm_sub_ps(v17, v16); /*0x8ebdb9*/
  v16.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] /*0x8ebdc8*/
                  + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
  v20 = _mm_mul_ps(*surfaceA, surfaceA[1]); /*0x8ebdd0*/
  v34 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x8ebe01*/
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  v21 = _mm_mul_ps(v12, _mm_add_ps(surfaceA[1], surfaceB[1])); /*0x8ebe10*/
  v22 = *(__m128 **)(solverState + 0x38); /*0x8ebe37*/
  v42.m128_f32[1] = v34; /*0x8ebe3a*/
  v42.m128_u64[1] = v16.m128_u32[0]; /*0x8ebe3e*/
  v42.m128_f32[0] = (float)(_mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0] /*0x8ebe42*/
                          + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0] + v21.m128_f32[0]))
                  * kHeadBodyNormalMatchRadius;
  v23 = _mm_mul_ps( /*0x8ebe7e*/
          _mm_shuffle_ps(v11, v11, 0),
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v9, _mm_shuffle_ps(v42, v42, 0)), _mm_mul_ps(v15, _mm_shuffle_ps(v42, v42, 0x55))),
            _mm_mul_ps(v19, _mm_shuffle_ps(v42, v42, 0xAA))));
  if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v23, (__m128)xmmword_A372D0), v22[2])) & 7) == 7 ) /*0x8ebe9f*/
  {
    v24 = _mm_sub_ps(*inputPoint, v23); /*0x8ebf39*/
    v25 = _mm_mul_ps(v24, v24); /*0x8ebf3f*/
    v26 = _mm_shuffle_ps(v25, v25, 0xAA).m128_f32[0] /*0x8ebf58*/
        + (float)(_mm_shuffle_ps(v25, v25, 0x55).m128_f32[0] + v25.m128_f32[0]);
    v27 = _mm_mul_ps(v22[3], v12); /*0x8ebf5c*/
    v28 = _mm_mul_ps(v24, v12); /*0x8ebf75*/
    v33 = _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] /*0x8ebf9a*/
        + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]);
    v29 = v33; /*0x8ebf9e*/
    v35 = _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] /*0x8ebfac*/
        + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]);
    if ( v33 * v35 <= *(float *)&SrcStr ) /*0x8ebfc3*/
      v30 = surfaceA[2].m128_f32[2] + surfaceB[2].m128_f32[2]; /*0x8ebfd0*/
    else
      v30 = surfaceA[2].m128_f32[1] + surfaceB[2].m128_f32[1]; /*0x8ebfc8*/
    v31 = (surfaceA[2].m128_f32[0] + surfaceB[2].m128_f32[0] + v30 * v35) * kHeadBodyNormalMatchRadius; /*0x8ebfd9*/
    v36 = (surfaceA[2].m128_f32[3] + surfaceB[2].m128_f32[3]) * kHeadBodyNormalMatchRadius; /*0x8ebfeb*/
    v32 = v33 * v33; /*0x8ebff3*/
    if ( (v26 - v32) * (v31 * v31) < v32 ) /*0x8ec012*/
    {
      if ( v36 < (double)fConstant_1 ) /*0x8ec031*/
      {
        v39 = v32; /*0x8ebff7*/
        if ( v26 * flt_A37080 < v39 ) /*0x8ec046*/
          v29 = (fabs(fConstant_1 / v33) * sqrt(v26) * (fConstant_1 - v36) + v36) * v33; /*0x8ec072*/
      }
      *(float *)&v40 = v29; /*0x8ec079*/
      *outPoint = _mm_add_ps(v23, _mm_mul_ps(_mm_shuffle_ps((__m128)v40, (__m128)v40, 0), v12)); /*0x8ec091*/
    }
    else
    {
      *outPoint = v23; /*0x8ec019*/
    }
  }
  else
  {
LABEL_3:
    hkSurfaceConstraintUtil_SortActiveConstraints(solverState); /*0x8ebea6*/
    *(_DWORD *)(0x10 * (((int)surfaceA - *(_DWORD *)(*(_DWORD *)(solverState + 0x38) + 0x48)) >> 6) /*0x8ebec6*/
              + *(_DWORD *)(*(_DWORD *)(solverState + 0x3C) + 0x24)
              + 0xC) = 2;
    *(_DWORD *)(0x10 * (((int)surfaceB - *(_DWORD *)(*(_DWORD *)(solverState + 0x38) + 0x48)) >> 6) /*0x8ebede*/
              + *(_DWORD *)(*(_DWORD *)(solverState + 0x3C) + 0x24)
              + 0xC) = 2;
    if ( surfaceA[3].m128_i32[0] <= surfaceB[3].m128_i32[0] ) /*0x8ebef0*/
    {
      hkSurfaceConstraintUtil_ProjectAgainstSinglePlane(surfaceA, outPoint, solverState, inputPoint); /*0x8ebf19*/
      hkSurfaceConstraintUtil_ProjectAgainstSinglePlane(surfaceB, outPoint, solverState, outPoint); /*0x8ebf25*/
    }
    else
    {
      hkSurfaceConstraintUtil_ProjectAgainstSinglePlane(surfaceB, outPoint, solverState, outPoint); /*0x8ebef6*/
      hkSurfaceConstraintUtil_ProjectAgainstSinglePlane(surfaceA, outPoint, solverState, inputPoint); /*0x8ebf03*/
    }
  }
}
