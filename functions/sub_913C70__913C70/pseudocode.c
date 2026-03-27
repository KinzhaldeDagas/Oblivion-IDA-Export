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

  v3 = *(this + 1);
  v4 = (__m128 *)a2[7];
  v5 = _mm_add_ps(_mm_mul_ps(v4[2], _mm_shuffle_ps(v3, v3, 0xAA)), v4[3]);
  v6 = _mm_mul_ps(v4[1], _mm_shuffle_ps(v3, v3, 0x55));
  v7 = _mm_shuffle_ps(v3, v3, 0);
  v8 = *v4;
  v9 = (__m128 *)a2[8];
  v13 = _mm_add_ps(_mm_add_ps(_mm_mul_ps(v8, v7), v6), v5);
  v11 = a2[0xA];
  v12 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(*v9, _mm_shuffle_ps(*(this + 2), *(this + 2), 0)),
            _mm_mul_ps(v9[1], _mm_shuffle_ps(*(this + 2), *(this + 2), 0x55))),
          _mm_add_ps(_mm_mul_ps(v9[2], _mm_shuffle_ps(*(this + 2), *(this + 2), 0xAA)), v9[3]));
  sub_8F0F70((int)a2, a3, v11, 8);
  return sub_8F1CC0(&v13, &v12, (int)a2, (__m128 **)a3);
}
