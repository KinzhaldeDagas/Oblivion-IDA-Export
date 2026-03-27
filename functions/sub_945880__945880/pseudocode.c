_BYTE *__userpurge sub_945880@<eax>(
        __m128 *a1@<ecx>,
        int a2@<ebx>,
        _BYTE *a3,
        __int32 a4,
        __int32 a5,
        __m128 *a6,
        __int32 a7)
{
  double v7; // st7
  unsigned __int8 *v9; // ecx
  __m128 v10; // xmm0
  __m128 v11; // xmm3
  __m128 v12; // xmm2
  __m128 v13; // xmm1
  __m128 v14; // xmm0
  __m128 v16; // [esp+10h] [ebp-40h] BYREF
  int v17; // [esp+20h] [ebp-30h]
  unsigned int v18; // [esp+24h] [ebp-2Ch]
  int v19; // [esp+28h] [ebp-28h]
  int v20; // [esp+2Ch] [ebp-24h]
  __m128 v21[2]; // [esp+30h] [ebp-20h] BYREF

  v7 = fConstant_1;
  a1[6].m128_i32[1] = a4;
  a1[1].m128_i32[0] = a5;
  a1[5].m128_i32[2] = a7;
  a1[5].m128_i32[1] = 0x3F800000;
  v9 = *(unsigned __int8 **)(a5 + 0x20);
  v16 = 0;
  a1[1].m128_f32[1] = v7 / *(float *)(a5 + 0x1C);
  v10 = *(__m128 *)(a5 + 0x10);
  v11 = *a6;
  v12 = _mm_sub_ps(a6[1], v10);
  *(float *)&v18 = *(float *)(a5 + 0x1C) * flt_AA1EC0;
  v13 = _mm_sub_ps(v11, v10);
  v14 = (__m128)v18;
  a1[2] = v11;
  a1[3] = a6[1];
  a1[4].m128_i32[0] = a6[2].m128_i32[0];
  a1[4].m128_i32[1] = a6[2].m128_i32[1];
  a1[5].m128_i8[0] = 0;
  v19 = 0;
  v17 = 0;
  v20 = 0;
  v21[0] = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v13);
  v21[1] = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v12);
  sub_944AC0(a1, a2, &v16, v9, v21);
  *a3 = a1[5].m128_i8[0];
  return a3;
}
