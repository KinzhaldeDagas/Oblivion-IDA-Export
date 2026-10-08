// Projects a point/motion against a single active surface plane with tolerance/radius fields from the surface entry.
void __usercall hkSurfaceConstraintUtil_ProjectAgainstSinglePlane(
        __m128 *surface@<ecx>,
        __m128 *outPoint@<esi>,
        int solverState,
        __m128 *inputPoint)
{
  __m128 v4; // xmm4
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  __m128 v7; // xmm1
  __m128 *v8; // edx
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  double v12; // st7
  double v13; // st7
  __m128 v14; // xmm1
  __m128 v15; // xmm3
  __m128 v16; // xmm3
  __m128 v17; // xmm1
  __m128 v18; // xmm1
  __m128 v19; // xmm0
  float v20; // [esp+8h] [ebp-18h]
  float v21; // [esp+Ch] [ebp-14h]
  unsigned int v22; // [esp+Ch] [ebp-14h]
  float v23; // [esp+Ch] [ebp-14h]
  unsigned int v24; // [esp+Ch] [ebp-14h]
  float v25; // [esp+10h] [ebp-10h]
  float v26; // [esp+10h] [ebp-10h]
  float v27; // [esp+10h] [ebp-10h]
  float v28; // [esp+14h] [ebp-Ch]
  float v29; // [esp+18h] [ebp-8h]
  unsigned int v30; // [esp+1Ch] [ebp-4h]
  float v31; // [esp+1Ch] [ebp-4h]
  unsigned int v32; // [esp+1Ch] [ebp-4h]
  unsigned int v33; // [esp+1Ch] [ebp-4h]
  unsigned int v34; // [esp+1Ch] [ebp-4h]

  v4 = surface[1]; /*0x8eb97c*/
  v5 = *surface; /*0x8eb980*/
  v20 = surface[2].m128_f32[0]; /*0x8eb986*/
  v6 = _mm_sub_ps(*inputPoint, v4); /*0x8eb990*/
  v7 = _mm_mul_ps(v6, *surface); /*0x8eb996*/
  v29 = surface[2].m128_f32[3]; /*0x8eb9af*/
  v25 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]); /*0x8eb9b7*/
  v8 = *(__m128 **)(solverState + 0x38); /*0x8eb9c4*/
  *(float *)&v30 = -v25; /*0x8eb9c7*/
  v9 = _mm_mul_ps(v6, v6); /*0x8eb9d6*/
  v26 = v25 * v25; /*0x8eb9e4*/
  v10 = _mm_add_ps(v6, _mm_mul_ps(_mm_shuffle_ps((__m128)v30, (__m128)v30, 0), *surface)); /*0x8eba03*/
  v28 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]); /*0x8eba0e*/
  v11 = _mm_mul_ps(v10, v8[3]); /*0x8eba15*/
  if ( (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0] /*0x8eba45*/
             + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) <= (double)*(float *)&SrcStr )
    v12 = surface[2].m128_f32[2]; /*0x8eba4c*/
  else
    v12 = surface[2].m128_f32[1]; /*0x8eba47*/
  v31 = v12; /*0x8eba4f*/
  if ( v12 <= *(float *)&SrcStr ) /*0x8eba5e*/
  {
    if ( (v20 * v20 + fConstant_1) * v26 >= v28 ) /*0x8ebbd6*/
    {
      *outPoint = v4; /*0x8ebbd8*/
      return; /*0x8ebbde*/
    }
  }
  else
  {
    v13 = *(float *)&SrcStr; /*0x8eba68*/
    v14 = _mm_sub_ps( /*0x8eba93*/
            _mm_mul_ps(_mm_shuffle_ps(v8[3], v8[3], 0xC9), _mm_shuffle_ps(v5, v5, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v8[3], v8[3], 0xD2), _mm_shuffle_ps(v5, v5, 0xC9)));
    v15 = _mm_mul_ps(v14, v14); /*0x8eba99*/
    v21 = _mm_shuffle_ps(v15, v15, 0xAA).m128_f32[0] /*0x8ebab6*/
        + (float)(_mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]);
    if ( v21 > (double)flt_A9AFD8 ) /*0x8ebac9*/
    {
      *(float *)&v22 = fConstant_1 / sqrt(v21); /*0x8ebae1*/
      v14 = _mm_mul_ps(_mm_shuffle_ps((__m128)v22, (__m128)v22, 0), v14); /*0x8ebaf8*/
      v16 = _mm_mul_ps(v10, v14); /*0x8ebafe*/
      v23 = _mm_shuffle_ps(v16, v16, 0xAA).m128_f32[0] /*0x8ebb17*/
          + (float)(_mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]);
      v13 = v23; /*0x8ebb1b*/
      if ( v23 * v23 <= v20 * v20 * v26 ) /*0x8ebb3a*/
      {
        *(float *)&v24 = -v23; /*0x8ebb44*/
        v13 = *(float *)&SrcStr; /*0x8ebb4e*/
        v10 = _mm_add_ps(v10, _mm_mul_ps(_mm_shuffle_ps((__m128)v24, (__m128)v24, 0), v14)); /*0x8ebb5e*/
      }
    }
    if ( v28 - v13 * v13 - v26 <= (v31 + v20) * (v31 + v20) * v26 ) /*0x8ebb86*/
    {
      if ( v13 == *(float *)&SrcStr ) /*0x8ebb97*/
      {
        *outPoint = v4; /*0x8ebb9b*/
        return; /*0x8ebba1*/
      }
      *(float *)&v32 = v13; /*0x8ebba2*/
      v10 = _mm_mul_ps(_mm_shuffle_ps((__m128)v32, (__m128)v32, 0), v14); /*0x8ebbb6*/
    }
  }
  if ( v29 < (double)fConstant_1 ) /*0x8ebbf0*/
  {
    v17 = _mm_mul_ps(v10, v10); /*0x8ebbf9*/
    v27 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x8ebc16*/
        + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    if ( v27 >= (double)flt_A9AFD8 && v28 * flt_A37080 < v27 ) /*0x8ebc42*/
    {
      *(float *)&v33 = sqrt(v28 / v27) * (fConstant_1 - v29) + v29; /*0x8ebc62*/
      v18 = _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), v10); /*0x8ebc76*/
      v19 = _mm_mul_ps(v5, v18); /*0x8ebc7c*/
      *(float *)&v34 = -(float)(_mm_shuffle_ps(v19, v19, 0xAA).m128_f32[0] /*0x8ebc9f*/
                              + (float)(_mm_shuffle_ps(v19, v19, 0x55).m128_f32[0] + v19.m128_f32[0]));
      v10 = _mm_add_ps(v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v34, (__m128)v34, 0), v5)); /*0x8ebcb6*/
    }
  }
  *outPoint = _mm_add_ps(v10, v4); /*0x8ebcbc*/
}
