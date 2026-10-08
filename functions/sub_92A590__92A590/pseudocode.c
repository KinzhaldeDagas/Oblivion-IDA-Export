__m128 *__thiscall sub_92A590(__m128 *this, int a2, __m128 *a3)
{
  int *v3; // edx
  int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  unsigned __int16 *v8; // eax
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  __m128 *result; // eax
  __m128 *v13; // edx
  __m128 *v14; // esi
  __m128 *v15; // edi
  double v16; // st7

  v3 = *((int **)this + 9); /*0x92a597*/
  v4 = a2 * v3[5]; /*0x92a59d*/
  v5 = *v3; /*0x92a5a2*/
  v6 = v3[3]; /*0x92a5a6*/
  v7 = *(unsigned __int16 *)(v4 + v6 + 2); /*0x92a5a9*/
  v8 = (unsigned __int16 *)(v6 + v4); /*0x92a5ae*/
  v9 = v3[1]; /*0x92a5b8*/
  v10 = *v8; /*0x92a5bb*/
  v11 = v9 * v8[2]; /*0x92a5c1*/
  result = a3; /*0x92a5c4*/
  v13 = (__m128 *)(v5 + v9 * v10); /*0x92a5ce*/
  v14 = (__m128 *)(v5 + v9 * v7); /*0x92a5d0*/
  v15 = (__m128 *)(v5 + v11); /*0x92a5d2*/
  if ( a3 ) /*0x92a5d6*/
  {
    v16 = *((float *)this + 0xC); /*0x92a5d8*/
    a3->m128_i16[3] = 1; /*0x92a5db*/
    a3->m128_f32[3] = v16; /*0x92a5e1*/
    a3->m128_i32[2] = 0; /*0x92a5e4*/
    a3->m128_i32[0] = (__int32)&hkTriangleShape::`vftable'; /*0x92a5eb*/
  }
  else
  {
    result = 0; /*0x92a5f3*/
  }
  result[1] = _mm_mul_ps(*v13, *(this + 1)); /*0x92a5ff*/
  result[2] = _mm_mul_ps(*v14, *(this + 1)); /*0x92a60d*/
  result[3] = _mm_mul_ps(*v15, *(this + 1)); /*0x92a61d*/
  return result; /*0x92a621*/
}
