int __cdecl sub_8EB7E0(int a1)
{
  int v1; // edx
  int v2; // ecx
  int result; // eax
  __m128 **v4; // ebx
  __m128 **v5; // ecx
  __int32 v6; // eax
  __int32 v7; // edx
  __m128 v8; // xmm0
  float v9; // xmm1_4
  float v10; // xmm2_4
  __m128 v11; // xmm0
  _DWORD *v12; // esi
  __m128 *v13; // edx
  int v14; // [esp+10h] [ebp-20h]
  int v15; // [esp+14h] [ebp-1Ch]
  __m128 **v16; // [esp+18h] [ebp-18h]
  __m128 *v17; // [esp+28h] [ebp-8h]
  __m128 *v18; // [esp+2Ch] [ebp-4h]

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 0x30);
  result = v2 - 1;
  if ( v2 - 1 > 0 )
  {
    result = 1;
    v4 = (__m128 **)(a1 + 4);
    v15 = 1;
    v16 = (__m128 **)(a1 + 4);
    do
    {
      v14 = result;
      if ( result < v2 )
      {
        v5 = v4 + 3;
        do
        {
          v6 = (*v4)[3].m128_i32[0];
          v7 = (*v5)[3].m128_i32[0];
          if ( v6 >= v7 )
          {
            if ( v6 != v7
              || (v8 = _mm_mul_ps((*v4)[1], (*v4)[1]),
                  v9 = _mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0],
                  v10 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0],
                  v11 = _mm_mul_ps((*v5)[1], (*v5)[1]),
                  (float)(v10 + v9) >= (double)(float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                                                     + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0]
                                                             + v11.m128_f32[0]))) )
            {
              v12 = v4 + 0xFFFFFFFF;
              v13 = v4[0xFFFFFFFF];
              v17 = *v4;
              v18 = v4[1];
              *v12 = v5[0xFFFFFFFF];
              *v4 = *v5;
              v4 = v16;
              v12[2] = v5[1];
              v5[0xFFFFFFFF] = v13;
              *v5 = v17;
              v5[1] = v18;
            }
          }
          v1 = a1;
          v5 += 3;
          ++v14;
        }
        while ( v14 < *(_DWORD *)(a1 + 0x30) );
        result = v15;
      }
      v2 = *(_DWORD *)(v1 + 0x30);
      ++result;
      v4 += 3;
      v15 = result;
      v16 = v4;
    }
    while ( result - 1 < v2 - 1 );
  }
  return result;
}
