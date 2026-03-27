__m128 *__thiscall sub_8F55E0(__m128 *this, __m128 *a2, unsigned int a3, __m128 *a4)
{
  __m128 *v4; // esi
  int v5; // edi
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  int v10; // edx
  __m128 *v11; // eax
  int v12; // ecx
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 *v15; // ecx
  __m128 *v16; // eax
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __m128 v19; // xmm4
  __m128 v21; // xmm0
  _DWORD v22[4]; // [esp+0h] [ebp-90h] BYREF
  char v23; // [esp+10h] [ebp-80h] BYREF

  v4 = this + 1;
  v5 = this->m128_i32[3];
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v9 = a2[3];
  v10 = v5;
  v11 = this + 1;
  v12 = (char *)v22 - (char *)this;
  do
  {
    *(__m128 *)((char *)v11 + v12) = _mm_add_ps(
                                       _mm_add_ps(
                                         _mm_mul_ps(v6, _mm_shuffle_ps(*v11, *v11, 0)),
                                         _mm_mul_ps(v7, _mm_shuffle_ps(*v11, *v11, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v8, _mm_shuffle_ps(*v11, *v11, 0xAA)), v9));
    ++v11;
    --v10;
  }
  while ( v10 > 0 );
  v22[3] = 0xFF7FFFFF;
  v13 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0);
  v14 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0);
  if ( v5 > 0 )
  {
    v15 = (__m128 *)&v23;
    v16 = v4;
    do
    {
      v17 = *v15;
      v18 = _mm_shuffle_ps(*v16, *v16, 0xFF);
      v19 = *v15;
      ++v16;
      ++v15;
      --v5;
      v13 = _mm_min_ps(v13, _mm_sub_ps(v19, v18));
      v14 = _mm_max_ps(v14, _mm_add_ps(v17, v18));
    }
    while ( v5 );
  }
  v21 = _mm_shuffle_ps((__m128)a3, (__m128)a3, 0);
  *a4 = _mm_sub_ps(v13, v21);
  a4[1] = _mm_add_ps(v14, v21);
  return a4;
}
