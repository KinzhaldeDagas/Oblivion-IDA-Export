bool *__cdecl sub_9511B0(bool *a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, float a5)
{
  int v5; // edi
  bool v6; // cl
  int v7; // esi
  int v8; // edx
  __m128 v9; // xmm0
  int v10; // esi
  int v11; // edx
  __m128 v12; // xmm0
  int v14; // [esp+10h] [ebp-10h]
  float v15; // [esp+18h] [ebp-8h]

  v5 = 0;
  v6 = 1;
  v14 = 0;
  do
  {
    if ( v14 >= a4[1] )
      break;
    v7 = 0;
    v8 = 0;
    do
    {
      if ( v7 >= a2[1] )
        break;
      v9 = _mm_mul_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a2 + v8));
      v15 = (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])
          + (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                  + _mm_shuffle_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a4 + v5), 0xFF).m128_f32[0]);
      v6 = v15 < (double)a5;
      ++v7;
      v8 += 0x10;
    }
    while ( v15 < (double)a5 );
    v10 = 0;
    if ( v6 )
    {
      v11 = 0;
      do
      {
        if ( v10 >= a3[1] )
          break;
        v12 = _mm_mul_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a3 + v11));
        v6 = (float)((float)(_mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0])
                   + (float)(_mm_shuffle_ps(v12, v12, 0xAA).m128_f32[0]
                           + _mm_shuffle_ps(*(__m128 *)(*a4 + v5), *(__m128 *)(*a4 + v5), 0xFF).m128_f32[0])) < (double)a5;
        ++v10;
        v11 += 0x10;
      }
      while ( v6 );
    }
    v5 += 0x10;
    ++v14;
  }
  while ( v6 );
  *a1 = v6;
  return a1;
}
