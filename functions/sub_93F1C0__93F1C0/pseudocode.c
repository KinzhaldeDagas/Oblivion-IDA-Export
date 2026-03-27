__m128 *__cdecl sub_93F1C0(int *a1, int *a2, int a3, __m128 *a4, __m128 *a5)
{
  int v5; // ebx
  int v6; // edi
  double v7; // st7
  int v8; // eax
  __m128 v9; // xmm2
  __m128 v10; // xmm3
  __m128 v11; // xmm0
  __m128 v13; // [esp+10h] [ebp-50h] BYREF
  __m128 v14[4]; // [esp+20h] [ebp-40h] BYREF

  v5 = *a2;
  v6 = *a1;
  sub_8B1FF0(v14, (__m128 *)a1[2], (__m128 *)a2[2]);
  sub_93C690(a4, (int *)v6, (int *)v5, v14, &v13);
  v7 = v13.m128_f32[3];
  v8 = a1[2];
  v9 = _mm_mul_ps(*(__m128 *)(v8 + 0x20), _mm_shuffle_ps(v13, v13, 0xAA));
  v10 = _mm_mul_ps(*(__m128 *)(v8 + 0x10), _mm_shuffle_ps(v13, v13, 0x55));
  v11 = *(__m128 *)v8;
  *a5 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v11, _mm_shuffle_ps(v13, v13, 0)), v10), v9);
  a5->m128_f32[3] = v7 - *(float *)(v6 + 0xC) - *(float *)(v5 + 0xC);
  return a5;
}
