__m128 *__thiscall sub_8F3EE0(__m128 *this, __m128 *a2, float a3, __m128 *a4)
{
  __m128 *v4; // eax
  __m128 v5; // xmm0
  __m128 v6; // xmm2
  __m128 v7; // xmm3
  __m128 v8; // xmm4
  __m128 v9; // xmm1
  int v10; // ecx
  int v11; // edx
  __m128 v13; // xmm3
  int v14; // [esp+0h] [ebp-70h] BYREF
  unsigned int v15; // [esp+Ch] [ebp-64h]
  __m128 v16; // [esp+10h] [ebp-60h]
  __m128 v17; // [esp+20h] [ebp-50h]
  __m128 v18; // [esp+60h] [ebp-10h]

  v4 = this + 1;
  v5 = a2[3];
  v6 = *a2;
  v7 = a2[1];
  *(float *)&v15 = a3 + this->m128_f32[3];
  v8 = a2[2];
  v9 = _mm_shuffle_ps((__m128)v15, (__m128)v15, 0);
  v18 = v5;
  v10 = (char *)&v14 - (char *)this;
  v11 = 2;
  do
  {
    *(__m128 *)((char *)v4 + v10) = _mm_add_ps(
                                      _mm_add_ps(
                                        _mm_mul_ps(v6, _mm_shuffle_ps(*v4, *v4, 0)),
                                        _mm_mul_ps(v7, _mm_shuffle_ps(*v4, *v4, 0x55))),
                                      _mm_add_ps(_mm_mul_ps(v8, _mm_shuffle_ps(*v4, *v4, 0xAA)), v18));
    ++v4;
    --v11;
  }
  while ( v11 );
  v13 = _mm_min_ps(v16, v17);
  a4[1] = _mm_max_ps(v16, v17);
  *a4 = _mm_sub_ps(v13, v9);
  a4[1] = _mm_add_ps(a4[1], v9);
  return a4;
}
