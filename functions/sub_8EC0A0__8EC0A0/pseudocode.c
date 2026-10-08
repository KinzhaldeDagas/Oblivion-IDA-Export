// Projects against three active planes; falls back through two-plane projections and marks incompatible surfaces in the per-surface state array.
void __usercall hkSurfaceConstraintUtil_ProjectAgainstThreePlanes(
        __m128 *surfaceA@<eax>,
        _DWORD *solverState@<edx>,
        __m128 *surfaceB@<ecx>,
        __m128 *surfaceC,
        int allowFallback,
        __m128 *inputPoint,
        __m128 *outPoint)
{
  __m128 *v7; // ebx
  __m128 v10; // xmm3
  __m128 *v11; // ecx
  __m128 v12; // xmm2
  __m128 v13; // xmm4
  __m128 v14; // xmm1
  __m128 v15; // xmm7
  __m128 v16; // xmm0
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  __m128 v19; // xmm4
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm0
  __m128 v24; // xmm0
  float v25; // [esp+10h] [ebp-70h]
  int v26; // [esp+10h] [ebp-70h]
  unsigned int v27; // [esp+1Ch] [ebp-64h]
  __m128 v28; // [esp+20h] [ebp-60h]
  __m128 v29; // [esp+30h] [ebp-50h]
  __m128 v30; // [esp+40h] [ebp-40h]
  __m128 v31; // [esp+70h] [ebp-10h]

  v7 = surfaceA; /*0x8ec0ac*/
  v10 = *surfaceA; /*0x8ec0b2*/
  v11 = surfaceC; /*0x8ec0b5*/
  v12 = *surfaceC; /*0x8ec0b8*/
  v29 = _mm_shuffle_ps(v10, v10, 0xC9); /*0x8ec0c2*/
  v30 = _mm_shuffle_ps(v10, v10, 0xD2); /*0x8ec0ce*/
  v13 = _mm_shuffle_ps(v12, v12, 0xD2); /*0x8ec0d6*/
  v14 = _mm_shuffle_ps(v12, v12, 0xC9); /*0x8ec0e3*/
  v15 = _mm_sub_ps(_mm_mul_ps(v29, v13), _mm_mul_ps(v30, v14)); /*0x8ec0ea*/
  v16 = *surfaceB; /*0x8ec0ed*/
  v17 = _mm_shuffle_ps(v16, v16, 0xC9); /*0x8ec0f3*/
  v18 = _mm_shuffle_ps(*surfaceB, *surfaceB, 0xD2); /*0x8ec102*/
  v19 = _mm_sub_ps(_mm_mul_ps(v14, v18), _mm_mul_ps(v13, v17)); /*0x8ec11e*/
  v31 = _mm_sub_ps(_mm_mul_ps(v17, v30), _mm_mul_ps(v18, v29)); /*0x8ec121*/
  v20 = _mm_mul_ps(v15, *surfaceB); /*0x8ec129*/
  v25 = _mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x8ec146*/
      + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]);
  if ( fabs(v25) < flt_A9AFD8 ) /*0x8ec15b*/
    goto LABEL_3; /*0x8ec15b*/
  v21 = _mm_mul_ps(v12, surfaceC[1]); /*0x8ec16f*/
  v22 = _mm_mul_ps(v10, surfaceA[1]); /*0x8ec18c*/
  v23 = _mm_mul_ps(v16, surfaceB[1]); /*0x8ec1a9*/
  v28.m128_f32[0] = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0] /*0x8ec1e2*/
                  + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
  *(unsigned __int64 *)((char *)v28.m128_u64 + 4) = __PAIR64__( /*0x8ec1ee*/
                                                      _mm_shuffle_ps(v21, v21, 0xAA).m128_f32[0]
                                                    + (float)(_mm_shuffle_ps(v21, v21, 0x55).m128_f32[0]
                                                            + v21.m128_f32[0]),
                                                      _mm_shuffle_ps(v22, v22, 0xAA).m128_f32[0]
                                                    + (float)(_mm_shuffle_ps(v22, v22, 0x55).m128_f32[0]
                                                            + v22.m128_f32[0]));
  v28.m128_i32[3] = 0; /*0x8ec1f5*/
  *(float *)&v27 = fConstant_1 / v25; /*0x8ec202*/
  v24 = _mm_mul_ps( /*0x8ec24a*/
          _mm_shuffle_ps((__m128)v27, (__m128)v27, 0),
          _mm_add_ps(
            _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(v28, v28, 0)), _mm_mul_ps(v19, _mm_shuffle_ps(v28, v28, 0x55))),
            _mm_mul_ps(v31, _mm_shuffle_ps(v28, v28, 0xAA))));
  if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v24, (__m128)xmmword_A372D0), *(__m128 *)(solverState[0xE] + 0x20))) & 7) == 7 ) /*0x8ec25f*/
  {
    *outPoint = v24; /*0x8ec32e*/
  }
  else
  {
LABEL_3:
    if ( allowFallback ) /*0x8ec26a*/
    {
      hkSurfaceConstraintUtil_SortActiveConstraints((int)solverState); /*0x8ec26d*/
      v11 = (__m128 *)solverState[7]; /*0x8ec272*/
      surfaceB = (__m128 *)solverState[1]; /*0x8ec275*/
      v7 = (__m128 *)solverState[4]; /*0x8ec278*/
      surfaceC = v11; /*0x8ec27e*/
    }
    *(_DWORD *)(0x10 * (((int)surfaceB - *(_DWORD *)(solverState[0xE] + 0x48)) >> 6) /*0x8ec295*/
              + *(_DWORD *)(solverState[0xF] + 0x24)
              + 0xC) = 1;
    *(_DWORD *)(0x10 * (((int)v7 - *(_DWORD *)(solverState[0xE] + 0x48)) >> 6) /*0x8ec2b1*/
              + *(_DWORD *)(solverState[0xF] + 0x24)
              + 0xC) = 1;
    *(_DWORD *)(0x10 * (((int)v11 - *(_DWORD *)(solverState[0xE] + 0x48)) >> 6) /*0x8ec2cb*/
              + *(_DWORD *)(solverState[0xF] + 0x24)
              + 0xC) = 1;
    v26 = solverState[0xC]; /*0x8ec2e0*/
    hkSurfaceConstraintUtil_ProjectAgainstTwoPlanes((int)solverState, surfaceB, v7, inputPoint, outPoint); /*0x8ec2e4*/
    if ( v26 == solverState[0xC] ) /*0x8ec2f5*/
      hkSurfaceConstraintUtil_ProjectAgainstTwoPlanes((int)solverState, surfaceB, surfaceC, outPoint, outPoint); /*0x8ec301*/
    if ( v26 == solverState[0xC] ) /*0x8ec310*/
      hkSurfaceConstraintUtil_ProjectAgainstTwoPlanes((int)solverState, v7, surfaceC, outPoint, outPoint); /*0x8ec31c*/
  }
}
