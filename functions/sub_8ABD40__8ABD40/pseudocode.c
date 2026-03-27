void __stdcall sub_8ABD40(int a1, int a2, __m128 *a3)
{
  float *v3; // eax
  int v4; // ecx
  double v5; // st7
  __m128 v6; // xmm1
  __m128 v7; // xmm0

  if ( a2 - 1 >= 0 )
  {
    v3 = (float *)(a1 + 0x1C);
    v4 = a2;
    do
    {
      v5 = *v3;
      v6 = *(__m128 *)(v3 + 0xFFFFFFFD);
      v3[0xFFFFFFFC] = *v3;
      v7 = _mm_mul_ps(*a3, v6);
      v3 += 0xC;
      --v4;
      v3[0xFFFFFFF4] = -((float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0]
                               + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]))
                       * v5);
    }
    while ( v4 );
  }
}
