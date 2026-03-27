__m128 *__thiscall sub_958F40(_DWORD *this, __m128 *a2)
{
  __m128 *v2; // esi
  __int32 v3; // ebx
  int v4; // edi
  char *v5; // ecx
  __m128 v6; // xmm2
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  int v10; // edx
  float v12; // [esp+14h] [ebp-Ch]
  bool v13; // [esp+18h] [ebp-8h]

  sub_9589E0(this);
  v2 = a2;
  v3 = 0;
  v13 = 0;
  do
  {
    if ( v13 )
      break;
    v2[4].m128_i32[1] = 3;
    v4 = 0;
    v5 = &v2[1].m128_i8[4];
    while ( 1 )
    {
      if ( v5 != (char *)v3 )
      {
        v6 = *(__m128 *)*(_DWORD *)v5;
        v7 = _mm_sub_ps(*(__m128 *)**((_DWORD **)v5 + 1), v6);
        v8 = _mm_mul_ps(v7, v7);
        v9 = _mm_mul_ps(
               _mm_sub_ps(
                 _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xC9), _mm_shuffle_ps(*v2, *v2, 0xD2)),
                 _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0xD2), _mm_shuffle_ps(*v2, *v2, 0xC9))),
               v6);
        v12 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]);
        if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]))
           * flt_AA3874 > fabs(v12) * v12 )
        {
          v10 = *(_DWORD *)(*((_DWORD *)v5 + 2) + 0xC);
          if ( a2[1].m128_f32[0] <= (double)*(float *)&SrcStr
            || a2[1].m128_f32[0] * flt_A37450 <= *(float *)(v10 + 0x10) )
          {
            break;
          }
        }
      }
      ++v4;
      v5 += 0x10;
      if ( v4 >= 3 )
        goto LABEL_11;
    }
    v3 = v2[v4 + 1].m128_i32[3];
    v2 = *(__m128 **)(*((_DWORD *)v5 + 2) + 0xC);
    v13 = *(_DWORD *)(v10 + 0x44) == 3;
LABEL_11:
    ;
  }
  while ( v4 != 3 );
  return v2;
}
