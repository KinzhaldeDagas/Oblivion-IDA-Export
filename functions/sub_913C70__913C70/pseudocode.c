__m128 *__thiscall sub_913C70(__m128 *this, _DWORD *a2, int *a3)
{
  __m128 v3; // xmm0
  __m128 *v4; // eax
  __m128 v5; // xmm3
  __m128 v6; // xmm2
  __m128 v7; // xmm1
  __m128 v8; // xmm0
  __m128 *v9; // eax
  int v11; // [esp-8h] [ebp-38h]
  __m128 v12; // [esp+10h] [ebp-20h] BYREF
  __m128 v13; // [esp+20h] [ebp-10h] BYREF

  v3 = *(this + 1); /*0x913c7b*/
  v4 = (__m128 *)a2[7]; /*0x913c89*/
  v5 = _mm_add_ps(_mm_mul_ps(v4[2], _mm_shuffle_ps(v3, v3, 0xAA)), v4[3]); /*0x913c9b*/
  v6 = _mm_mul_ps(v4[1], _mm_shuffle_ps(v3, v3, 0x55)); /*0x913ca5*/
  v7 = _mm_shuffle_ps(v3, v3, 0); /*0x913cab*/
  v8 = *v4; /*0x913caf*/
  v9 = (__m128 *)a2[8]; /*0x913cb2*/
  v13 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v8, v7), v6), v5); /*0x913cbe*/
  v11 = a2[0xA]; /*0x913cfc*/
  v12 = _mm_add_ps( /*0x913d08*/
          _mm_add_ps(
            _mm_mul_ps(*v9, _mm_shuffle_ps(*(this + 2), *(this + 2), 0)),
            _mm_mul_ps(v9[1], _mm_shuffle_ps(*(this + 2), *(this + 2), 0x55))),
          _mm_add_ps(_mm_mul_ps(v9[2], _mm_shuffle_ps(*(this + 2), *(this + 2), 0xAA)), v9[3]));
  sub_8F0F70((int)a2, a3, v11, 8); /*0x913d0d*/
  return sub_8F1CC0(&v13, &v12, (int)a2, (__m128 **)a3); /*0x913d26*/
}
