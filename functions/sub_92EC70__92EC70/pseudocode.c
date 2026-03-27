int __cdecl sub_92EC70(int a1, int a2, float a3, int a4, unsigned __int16 *a5, float *a6, float *a7, int *a8)
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

  v29 = *(float *)(a2 + 0xC);
  v8 = (__m128 *)(a1 + 0x10 * *a5);
  v30.m128_u64[0] = *(_QWORD *)a4;
  v9 = *(_DWORD *)(a4 + 0xC);
  v30.m128_i32[2] = *(_DWORD *)(a4 + 8);
  v30.m128_i32[3] = v9;
  v31.m128_f32[0] = *a6 - *a7;
  v31.m128_f32[1] = a6[1] - a7[1];
  v31.m128_f32[2] = a6[2] - a7[2];
  v31.m128_f32[3] = a6[3] - a7[3];
  v10 = v31;
  if ( a3 < (double)v29 || flt_A58E1C - v29 < a3 )
  {
    v12 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xC9), _mm_shuffle_ps(v31, v31, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xD2), _mm_shuffle_ps(v31, v31, 0xC9)));
    v20 = _mm_mul_ps(v12, v12);
    v21 = _mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0];
    v22 = _mm_shuffle_ps(v20, v20, 0xAA);
    v23 = v22;
    v23.m128_f32[0] = v22.m128_f32[0] + v21;
    v31 = v23;
    v31.m128_f32[0] = 1.0 / fsqrt(v22.m128_f32[0] + v21);
    v17 = v31.m128_f32[0];
    v18 = 3.0 - (float)((float)(v23.m128_f32[0] * v31.m128_f32[0]) * v31.m128_f32[0]);
    v19 = (__m128)0x3F000000u;
  }
  else
  {
    v11 = v30;
    if ( fabs(a3 - flt_A46B10) >= v29 )
      goto LABEL_7;
    v12 = _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xC9), _mm_shuffle_ps(v30, v30, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v31, v31, 0xD2), _mm_shuffle_ps(v30, v30, 0xC9)));
    v13 = _mm_mul_ps(v12, v12);
    v14 = _mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0];
    v15 = _mm_shuffle_ps(v13, v13, 0xAA);
    v16 = v15;
    v16.m128_f32[0] = v15.m128_f32[0] + v14;
    v31 = v16;
    v31.m128_f32[0] = 1.0 / fsqrt(v15.m128_f32[0] + v14);
    v17 = v31.m128_f32[0];
    v18 = 3.0 - (float)((float)(v16.m128_f32[0] * v31.m128_f32[0]) * v31.m128_f32[0]);
    v19 = (__m128)0x3F000000u;
  }
  v19.m128_f32[0] = (float)(v19.m128_f32[0] * v17) * v18;
  v11 = _mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v12);
  v30 = v11;
LABEL_7:
  v24 = *v8;
  v25 = _mm_add_ps(
          _mm_sub_ps(
            _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xC9), _mm_shuffle_ps(v10, v10, 0xD2)),
            _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0xD2), _mm_shuffle_ps(v10, v10, 0xC9))),
          *v8);
  v32 = v25;
  if ( v8 == (__m128 *)a6 )
  {
    v31 = v24;
  }
  else
  {
    v32 = v24;
    v31 = v25;
  }
  for ( i = 0; i < a8[1]; ++i )
  {
    v27 = (float *)(*a8 + 8 * i);
    v27[1] = sub_92D8F0(a2, (float *)(a1 + 0x10 * **(unsigned __int16 **)v27), &v30, v32.m128_f32, v31.m128_f32);
  }
  result = a8[1];
  if ( result > 1 )
    return sub_92CC50(*a8, 0, result - 1, (int (__cdecl *)(char *, int, int *))sub_92CA50);
  return result;
}
