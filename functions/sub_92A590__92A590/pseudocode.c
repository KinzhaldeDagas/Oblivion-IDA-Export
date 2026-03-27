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

  v3 = *((int **)this + 9);
  v4 = a2 * v3[5];
  v5 = *v3;
  v6 = v3[3];
  v7 = *(unsigned __int16 *)(v4 + v6 + 2);
  v8 = (unsigned __int16 *)(v6 + v4);
  v9 = v3[1];
  v10 = *v8;
  v11 = v9 * v8[2];
  result = a3;
  v13 = (__m128 *)(v5 + v9 * v10);
  v14 = (__m128 *)(v5 + v9 * v7);
  v15 = (__m128 *)(v5 + v11);
  if ( a3 )
  {
    v16 = *((float *)this + 0xC);
    a3->m128_i16[3] = 1;
    a3->m128_f32[3] = v16;
    a3->m128_i32[2] = 0;
    a3->m128_i32[0] = (__int32)&hkTriangleShape::`vftable';
  }
  else
  {
    result = 0;
  }
  result[1] = _mm_mul_ps(*v13, *(this + 1));
  result[2] = _mm_mul_ps(*v14, *(this + 1));
  result[3] = _mm_mul_ps(*v15, *(this + 1));
  return result;
}
