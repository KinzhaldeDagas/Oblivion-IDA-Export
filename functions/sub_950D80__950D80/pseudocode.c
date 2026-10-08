__m128 *__thiscall sub_950D80(int this, __m128 *a2, float a3, __m128 *a4)
{
  __m128 *result; // eax
  int v5; // ebx
  int v6; // edi
  __m128 v7; // xmm0
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  unsigned int v10; // [esp+0h] [ebp-4h]

  result = a4; /*0x950d87*/
  *a4 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x950d9a*/
  a4[1] = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0); /*0x950dae*/
  v5 = 0; /*0x950db6*/
  if ( *(int *)(this + 0x14) > 0 ) /*0x950dbb*/
  {
    v6 = 0; /*0x950dc0*/
    do /*0x950e1e*/
    {
      v7 = *(__m128 *)(*(_DWORD *)(this + 0x10) + v6); /*0x950dc5*/
      v8 = _mm_add_ps( /*0x950e01*/
             _mm_add_ps(_mm_mul_ps(*a2, _mm_shuffle_ps(v7, v7, 0)), _mm_mul_ps(a2[1], _mm_shuffle_ps(v7, v7, 0x55))),
             _mm_add_ps(_mm_mul_ps(a2[2], _mm_shuffle_ps(v7, v7, 0xAA)), a2[3]));
      *a4 = _mm_min_ps(*a4, v8); /*0x950e07*/
      a4[1] = _mm_max_ps(a4[1], v8); /*0x950e11*/
      ++v5; /*0x950e18*/
      v6 += 0x10; /*0x950e19*/
    }
    while ( v5 < *(_DWORD *)(this + 0x14) ); /*0x950e1e*/
  }
  *(float *)&v10 = a3 + *(float *)(this + 0xC); /*0x950e2c*/
  v9 = _mm_shuffle_ps((__m128)v10, (__m128)v10, 0); /*0x950e34*/
  *a4 = _mm_sub_ps(*a4, v9); /*0x950e3b*/
  a4[1] = _mm_add_ps(a4[1], v9); /*0x950e45*/
  return result; /*0x950e49*/
}
