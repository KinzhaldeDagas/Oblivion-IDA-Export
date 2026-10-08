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

  v7 = fConstant_1; /*0x94596c*/
  a1[6].m128_i32[1] = a3; /*0x945972*/
  a1[6].m128_i32[0] = a6; /*0x945978*/
  a1[5].m128_i32[3] = a7; /*0x94597e*/
  *(unsigned __int64 *)((char *)a1[5].m128_u64 + 4) = *(unsigned int *)(a7 + 4); /*0x945989*/
  a1[1].m128_i32[0] = a4; /*0x94598f*/
  v8 = *(unsigned __int8 **)(a4 + 0x20); /*0x945993*/
  v14 = 0; /*0x945999*/
  a1[1].m128_f32[1] = v7 / *(float *)(a4 + 0x1C); /*0x9459a2*/
  v9 = *(__m128 *)(a4 + 0x10); /*0x9459a8*/
  v10 = *a5; /*0x9459b5*/
  v11 = _mm_sub_ps(a5[1], v9); /*0x9459bc*/
  *(float *)&v16 = *(float *)(a4 + 0x1C) * flt_AA1EC0; /*0x9459bf*/
  v12 = _mm_sub_ps(v10, v9); /*0x9459c6*/
  v13 = (__m128)v16; /*0x9459cd*/
  a1[2] = v10; /*0x9459dd*/
  a1[3] = a5[1]; /*0x9459ec*/
  a1[4].m128_u64[0] = a5[2].m128_u64[0]; /*0x9459f3*/
  a1[5].m128_i8[0] = 0; /*0x9459fc*/
  v17 = 0; /*0x9459ff*/
  v15 = 0; /*0x945a03*/
  v18 = 0; /*0x945a07*/
  v19[0] = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v12); /*0x945a19*/
  v19[1] = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v11); /*0x945a1e*/
  sub_944AC0(a1, a2, &v14, v8, v19); /*0x945a23*/
}
