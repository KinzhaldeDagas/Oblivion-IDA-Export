void __stdcall sub_9127A0(int **a1, int **a2, int a3, int a4, int a5, int a6)
{
  int *v6; // ecx
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  int *v9; // eax
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __m128 v13; // xmm0
  __m128 v14; // [esp+10h] [ebp-40h]
  __m128 v15; // [esp+20h] [ebp-30h]
  __m128 v16; // [esp+30h] [ebp-20h] BYREF
  int v17; // [esp+40h] [ebp-10h]
  int v18; // [esp+44h] [ebp-Ch]
  float v19; // [esp+48h] [ebp-8h]

  v6 = *a1 + 1;
  *a1 = v6;
  v14 = *(__m128 *)(a4 + 0x10 * (*v6 + 5));
  v15 = *(__m128 *)(a4 + 0x10 * (*v6 + 8));
  v7 = _mm_sub_ps(
         _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xC9), _mm_shuffle_ps(v15, v15, 0xD2)),
         _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0xD2), _mm_shuffle_ps(v15, v15, 0xC9)));
  v8 = _mm_mul_ps(v7, v7);
  if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) >= (double)flt_A9CD60 )
  {
    v9 = *a2;
    v10 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
    v11 = 1.0 / fsqrt(v10);
    v12 = 3.0 - (float)((float)(v10 * v11) * v11);
    v13 = (__m128)0x3F000000u;
    v13.m128_f32[0] = (float)(0.5 * v11) * v12;
    *a2 += 4;
    v19 = v14.m128_f32[2] * v15.m128_f32[2] + v14.m128_f32[1] * v15.m128_f32[1] + v14.m128_f32[0] * v15.m128_f32[0];
    v16 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v7);
    v17 = *v9;
    v18 = v9[1];
    sub_8F1B60(&v16, a5, a6);
    ++*(_DWORD *)(a4 + 0xB8);
  }
}
