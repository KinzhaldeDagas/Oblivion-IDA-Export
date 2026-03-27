char __userpurge sub_944790@<al>(int a1@<ecx>, int a2@<ebx>, int a3, __m128 *a4, __m128 *a5, unsigned int a6, int a7)
{
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm2
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // eax
  float v18; // [esp+8h] [ebp-68h]
  float v19; // [esp+Ch] [ebp-64h]
  float v20; // [esp+Ch] [ebp-64h]
  float v21; // [esp+Ch] [ebp-64h]
  float v22; // [esp+Ch] [ebp-64h]
  float v23; // [esp+Ch] [ebp-64h]
  __m128 v24; // [esp+10h] [ebp-60h]
  __m128 v25; // [esp+20h] [ebp-50h]
  int v26[16]; // [esp+30h] [ebp-40h] BYREF

  *(_DWORD *)a1 = a7;
  *(_DWORD *)(a1 + 0x30) = a3;
  v7 = *a5;
  v8 = _mm_add_ps(
         _mm_add_ps(
           _mm_add_ps(
             _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *a4), (__m128)xmmword_A372D0),
             _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0x55), a4[1]), (__m128)xmmword_A372D0)),
           _mm_and_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xAA), a4[2]), (__m128)xmmword_A372D0)),
         _mm_shuffle_ps((__m128)a6, (__m128)a6, 0));
  v9 = a4[3];
  v24 = _mm_add_ps(_mm_xor_ps(v8, (__m128)xmmword_A965C0), v9);
  v25 = _mm_add_ps(v8, v9);
  v18 = (v24.m128_f32[0] - *(float *)(a3 + 0x10)) * *(float *)(a3 + 0x1C);
  v10 = *(_DWORD *)(a1 + 0x30);
  *(_DWORD *)(a1 + 0x20) = (int)v18 - 1;
  v19 = (v25.m128_f32[0] - *(float *)(v10 + 0x10)) * *(float *)(v10 + 0x1C);
  *(_DWORD *)(a1 + 0x10) = (int)v19 + 1;
  v20 = (v24.m128_f32[1] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x14)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  v11 = *(_DWORD *)(a1 + 0x30);
  *(_DWORD *)(a1 + 0x24) = (int)v20 - 1;
  v21 = (v25.m128_f32[1] - *(float *)(v11 + 0x14)) * *(float *)(v11 + 0x1C);
  *(_DWORD *)(a1 + 0x14) = (int)v21 + 1;
  v22 = (v24.m128_f32[2] - *(float *)(*(_DWORD *)(a1 + 0x30) + 0x18)) * *(float *)(*(_DWORD *)(a1 + 0x30) + 0x1C);
  v12 = *(_DWORD *)(a1 + 0x30);
  *(_DWORD *)(a1 + 0x28) = (int)v22 - 1;
  v23 = (v25.m128_f32[2] - *(float *)(v12 + 0x18)) * *(float *)(v12 + 0x1C);
  v26[4] = *(__int16 *)(a1 + 0x22);
  v13 = (int)v23 + 1;
  v26[0] = *(__int16 *)(a1 + 0x12) + 1;
  v26[5] = *(__int16 *)(a1 + 0x26);
  v14 = *(__int16 *)(a1 + 0x16);
  *(_DWORD *)(a1 + 0x18) = v13;
  v26[2] = (v13 >> 0x10) + 1;
  v26[1] = v14 + 1;
  v15 = *(__int16 *)(a1 + 0x2A);
  memset(&v26[8], 0, 0x18);
  v16 = *(_DWORD *)(a1 + 0x30);
  v26[6] = v15;
  return sub_944060((int *)a1, a2, v26, *(unsigned __int8 **)(v16 + 0x20));
}
