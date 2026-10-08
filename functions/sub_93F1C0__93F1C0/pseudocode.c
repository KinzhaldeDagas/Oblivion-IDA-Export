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

  v5 = *a2; /*0x93f1cd*/
  v6 = *a1; /*0x93f1da*/
  sub_8B1FF0(v14, (__m128 *)a1[2], (__m128 *)a2[2]); /*0x93f1e2*/
  sub_93C690(a4, (int *)v6, (int *)v5, v14, &v13); /*0x93f1f6*/
  v7 = v13.m128_f32[3]; /*0x93f1fb*/
  v8 = a1[2]; /*0x93f1ff*/
  v9 = _mm_mul_ps(*(__m128 *)(v8 + 0x20), _mm_shuffle_ps(v13, v13, 0xAA)); /*0x93f216*/
  v10 = _mm_mul_ps(*(__m128 *)(v8 + 0x10), _mm_shuffle_ps(v13, v13, 0x55)); /*0x93f220*/
  v11 = *(__m128 *)v8; /*0x93f22a*/
  *a5 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v11, _mm_shuffle_ps(v13, v13, 0)), v10), v9); /*0x93f239*/
  a5->m128_f32[3] = v7 - *(float *)(v6 + 0xC) - *(float *)(v5 + 0xC); /*0x93f245*/
  return a5; /*0x93f248*/
}
