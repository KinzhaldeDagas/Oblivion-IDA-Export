void __userpurge sub_945960(__m128 *a1@<ecx>, int a2@<ebx>, int a3, int a4, __m128 *a5, int a6, int a7)
{
  double v7; // st7
  unsigned __int8 *v8; // esi
  __m128 v9; // xmm0
  __m128 v10; // xmm3
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // [esp+Ch] [ebp-40h] BYREF
  int v15; // [esp+1Ch] [ebp-30h]
  unsigned int v16; // [esp+20h] [ebp-2Ch]
  int v17; // [esp+24h] [ebp-28h]
  int v18; // [esp+28h] [ebp-24h]
  __m128 v19[2]; // [esp+2Ch] [ebp-20h] BYREF

  v7 = fConstant_1;
  a1[6].m128_i32[1] = a3;
  a1[6].m128_i32[0] = a6;
  a1[5].m128_i32[3] = a7;
  a1[5].m128_i32[2] = 0;
  a1[5].m128_i32[1] = *(_DWORD *)(a7 + 4);
  a1[1].m128_i32[0] = a4;
  v8 = *(unsigned __int8 **)(a4 + 0x20);
  v14 = 0;
  a1[1].m128_f32[1] = v7 / *(float *)(a4 + 0x1C);
  v9 = *(__m128 *)(a4 + 0x10);
  v10 = *a5;
  v11 = _mm_sub_ps(a5[1], v9);
  *(float *)&v16 = *(float *)(a4 + 0x1C) * flt_AA1EC0;
  v12 = _mm_sub_ps(v10, v9);
  v13 = (__m128)v16;
  a1[2] = v10;
  a1[3] = a5[1];
  a1[4].m128_u64[0] = a5[2].m128_u64[0];
  a1[5].m128_i8[0] = 0;
  v17 = 0;
  v15 = 0;
  v18 = 0;
  v19[0] = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v12);
  v19[1] = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v11);
  sub_944AC0(a1, a2, &v14, v8, v19);
}
