__m128 *__thiscall sub_8E9540(__m128 *this, float *a2, __m128 *a3)
{
  double v3; // st7
  double v4; // st6
  double v5; // st7
  __m128 v7; // xmm0
  unsigned int v8; // [esp+Ch] [ebp-4h]
  unsigned int v9; // [esp+Ch] [ebp-4h]
  unsigned int v10; // [esp+Ch] [ebp-4h]

  v3 = a2[2]; /*0x8e954c*/
  v4 = fConstant_1 - v3 * *((float *)this + 0x32); /*0x8e9558*/
  if ( *(float *)&SrcStr > v4 ) /*0x8e956b*/
    v4 = *(float *)&SrcStr; /*0x8e956f*/
  *(float *)&v8 = v4; /*0x8e957c*/
  *(this + 0xD) = _mm_mul_ps(_mm_shuffle_ps((__m128)v8, (__m128)v8, 0), *(this + 0xD)); /*0x8e9590*/
  v5 = fConstant_1 - v3 * *((float *)this + 0x33); /*0x8e959d*/
  if ( *(float *)&SrcStr > v5 ) /*0x8e95b0*/
    v5 = *(float *)&SrcStr; /*0x8e95b4*/
  *(float *)&v9 = v5; /*0x8e95c1*/
  *(this + 0xE) = _mm_mul_ps(_mm_shuffle_ps((__m128)v9, (__m128)v9, 0), *(this + 0xE)); /*0x8e95d8*/
  a3->m128_i8[0] = 0; /*0x8e95df*/
  a3[3] = _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x31), (__m128)*((unsigned int *)this + 0x31), 0); /*0x8e95f6*/
  a3[3].m128_i32[3] = *((_DWORD *)this + 0x30); /*0x8e9600*/
  *(float *)&v10 = (*a2 - *((float *)this + 0x17)) * *((float *)this + 0x1B); /*0x8e9621*/
  v7 = _mm_shuffle_ps((__m128)v10, (__m128)v10, 0); /*0x8e962b*/
  a3[4] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v7), *(this + 5)), _mm_mul_ps(v7, *(this + 6))); /*0x8e9642*/
  a3[2] = *(this + 0xE); /*0x8e964d*/
  a3[1] = *(this + 0xD); /*0x8e9658*/
  a3[5] = 0; /*0x8e965f*/
  a3[6] = 0; /*0x8e9663*/
  a3[7] = 0; /*0x8e9667*/
  a3[5].m128_i32[0] = 0x3F800000; /*0x8e966b*/
  a3[6].m128_i32[1] = 0x3F800000; /*0x8e966e*/
  a3[7].m128_i32[2] = 0x3F800000; /*0x8e9671*/
  a3->m128_i8[0xC] = 1; /*0x8e9674*/
  a3->m128_i32[2] = *((unsigned __int16 *)this + 0x5E); /*0x8e967f*/
  a3->m128_i32[1] = *((unsigned __int16 *)this + 0x5F); /*0x8e9689*/
  return a3 + 8; /*0x8e968c*/
}
