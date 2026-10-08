__int32 __thiscall sub_936C10(__m128 **this, __m128 *a2, unsigned __int8 *a3, __m128 *a4)
{
  int v4; // eax
  __m128 *v5; // edx
  __int32 result; // eax
  unsigned int v7; // [esp+8h] [ebp-4h]

  v4 = *a3; /*0x936c1c*/
  a2[2].m128_i16[0] = *((_WORD *)a3 + 1); /*0x936c27*/
  v5 = *(this + 6); /*0x936c2b*/
  *a2 = _mm_add_ps( /*0x936c6c*/
          _mm_add_ps(
            _mm_mul_ps(*v5, _mm_shuffle_ps(a4[1], a4[1], 0)),
            _mm_mul_ps(v5[1], _mm_shuffle_ps(a4[1], a4[1], 0x55))),
          _mm_add_ps(_mm_mul_ps(v5[2], _mm_shuffle_ps(a4[1], a4[1], 0xAA)), v5[3]));
  *(float *)&v7 = -a4[3].m128_f32[0]; /*0x936c7a*/
  a2[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)v7, (__m128)v7, 0), (*(this + 5))[v4]); /*0x936c94*/
  result = a4[3].m128_i32[1]; /*0x936c98*/
  a2[1].m128_i32[3] = result; /*0x936c9c*/
  return result; /*0x936c9f*/
}
