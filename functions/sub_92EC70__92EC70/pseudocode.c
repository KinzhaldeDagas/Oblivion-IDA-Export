int __cdecl sub_92EC70(int a1, int a2, float a3, int a4, unsigned __int16 *a5, __m128 *a6, float *a7, int *a8)
{
  __m128 *v8; // ecx
  __int32 v9; // eax
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  float v14; // xmm3_4
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  float v17; // xmm3_4
  float v18; // xmm4_4
  __m128 v19; // xmm1
  __m128 v20; // xmm1
  float v21; // xmm3_4
  __m128 v22; // xmm4
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  int i; // esi
  float *v27; // edi
  int result; // eax
  float v29; // [esp+Ch] [ebp-34h]
  __m128 v30; // [esp+10h] [ebp-30h] BYREF
  __m128 v31; // [esp+20h] [ebp-20h] BYREF
  __m128 v32; // [esp+30h] [ebp-10h] BYREF

  v29 = *(float *)(a2 + 0xC); /*0x92ec85*/
  v8 = (__m128 *)(a1 + 0x10 * *a5); /*0x92ec8e*/
  v30.m128_u64[0] = *(_QWORD *)a4; /*0x92ec95*/
  v9 = *(_DWORD *)(a4 + 0xC); /*0x92eca3*/
  v30.m128_i32[2] = *(_DWORD *)(a4 + 8); /*0x92eca6*/
  v30.m128_i32[3] = v9; /*0x92ecad*/
  v31.m128_f32[0] = a6->m128_f32[0] - *a7; /*0x92ecbb*/
  v31.m128_f32[1] = a6->m128_f32[1] - a7[1]; /*0x92ecc5*/
  v31.m128_f32[2] = a6->m128_f32[2] - a7[2]; /*0x92eccf*/
  v31.m128_f32[3] = a6->m128_f32[3] - a7[3]; /*0x92ecd9*/
  v10 = v31; /*0x92ecdd*/
  if ( a3 < (double)v29 || flt_A58E1C - v29 < a3 ) /*0x92ed06*/
  {
    v12 = _mm_sub_ps( /*0x92ede3*/
            _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
    v20 = _mm_mul_ps(v12, v12); /*0x92ede9*/
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0]; /*0x92edf3*/
    v22 = _mm_shuffle_ps(v20, v20, 0xAA); /*0x92edfa*/
    v23 = v22; /*0x92edfe*/
    v23.m128_f32[0] = v22.m128_f32[0] + v21; /*0x92ee01*/
    v31 = v23; /*0x92ee05*/
    v31.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21); /*0x92ee1c*/
    v17 = v31.m128_f32[0]; /*0x92ee22*/
    v18 = 3.0 - (float)((float)(v23.m128_f32[0] * v31.m128_f32[0]) * v31.m128_f32[0]); /*0x92ee37*/
    v19 = (__m128)0x3F000000u; /*0x92ee3b*/
  }
  else
  {
    v11 = v30; /*0x92ed0f*/
    if ( fabs(a3 - flt_A46B10) >= v29 ) /*0x92ed25*/
      goto LABEL_7; /*0x92ed25*/
    v12 = _mm_sub_ps( /*0x92ed50*/
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v30, v30, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v30, v30, 0xC9)));
    v13 = _mm_mul_ps(v12, v12); /*0x92ed56*/
    v14 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]; /*0x92ed60*/
    v15 = _mm_shuffle_ps(v13, v13, 0xAA); /*0x92ed67*/
    v16 = v15; /*0x92ed6b*/
    v16.m128_f32[0] = v15.m128_f32[0] + v14; /*0x92ed6e*/
    v31 = v16; /*0x92ed72*/
    v31.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + v14); /*0x92ed89*/
    v17 = v31.m128_f32[0]; /*0x92ed8f*/
    v18 = 3.0 - (float)((float)(v16.m128_f32[0] * v31.m128_f32[0]) * v31.m128_f32[0]); /*0x92eda4*/
    v19 = (__m128)0x3F000000u; /*0x92eda8*/
  }
  v19.m128_f32[0] = (float)(v19.m128_f32[0] * v17) * v18; /*0x92ee45*/
  v11 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v12); /*0x92ee53*/
  v30 = v11; /*0x92ee56*/
LABEL_7:
  v24 = *v8; /*0x92ee5b*/
  v25 = _mm_add_ps( /*0x92ee85*/
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9))),
          *v8);
  v32 = v25; /*0x92ee88*/
  if ( v8 == a6 ) /*0x92ee8d*/
  {
    v31 = v24; /*0x92ef01*/
  }
  else
  {
    v32 = v24; /*0x92ee8f*/
    v31 = v25; /*0x92ee94*/
  }
  for ( i = 0; i < a8[1]; ++i ) /*0x92eea3*/
  {
    v27 = (float *)(*a8 + 8 * i); /*0x92eea7*/
    v27[1] = sub_92D8F0(a2, (float *)(a1 + 0x10 * **(unsigned __int16 **)v27), &v30, v32.m128_f32, v31.m128_f32); /*0x92eed3*/
  }
  result = a8[1]; /*0x92eede*/
  if ( result > 1 ) /*0x92eee4*/
    return sub_92CC50(*a8, 0, result - 1, (int (__cdecl *)(char *, int, int *))sub_92CA50); /*0x92eef2*/
  return result; /*0x92eefa*/
}
