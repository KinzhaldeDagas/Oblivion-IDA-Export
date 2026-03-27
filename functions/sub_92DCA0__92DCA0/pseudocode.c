int __cdecl sub_92DCA0(float a1, int a2, int *a3)
{
  int v3; // edi
  float *v4; // edx
  int v5; // ebx
  float *v6; // esi
  float *v7; // ecx
  __m128 v8; // xmm0
  int v9; // edi
  float *v10; // esi
  __m128 v11; // xmm0
  int v12; // esi
  int result; // eax
  int v14; // eax
  float *i; // [esp+Ch] [ebp-34h]
  float *v16; // [esp+10h] [ebp-30h]
  float v17; // [esp+14h] [ebp-2Ch]
  __m128 v18; // [esp+20h] [ebp-20h]
  __m128 v19; // [esp+30h] [ebp-10h]

  v3 = a2;
  v4 = *(float **)a2;
  v5 = *(_DWORD *)(a2 + 4) - 1;
  v6 = *(float **)a2;
  v16 = *(float **)a2;
  if ( v5 >= 0 )
  {
    v7 = v6 + 0xFFFFFFFC;
    for ( i = v6 + 0xFFFFFFFC; ; v7 = i )
    {
      for ( ; (unsigned int)v7 >= *(_DWORD *)v3; v7 += 0xFFFFFFFC )
      {
        v17 = *v4 - flt_A34BA0;
        if ( *v7 < (double)v17 )
          break;
        v18.m128_f32[0] = *v7 - *v4;
        v18.m128_f32[1] = v7[1] - v4[1];
        v18.m128_f32[2] = v7[2] - v4[2];
        v18.m128_f32[3] = v7[3] - v4[3];
        v8 = _mm_mul_ps(v18, v18);
        if ( (float)(_mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
                   + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0])) < (double)a1 )
        {
          v9 = v5 - 1;
          if ( v5 - 1 >= 0 )
          {
            v10 = v4 + 6;
            do
            {
              v19.m128_f32[0] = *v7 - v10[0xFFFFFFFE];
              v19.m128_f32[1] = v7[1] - v10[0xFFFFFFFF];
              v19.m128_f32[2] = v7[2] - *v10;
              v19.m128_f32[3] = v7[3] - v10[1];
              v11 = _mm_mul_ps(v19, v19);
              if ( (float)(_mm_shuffle_ps(v11, v11, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v11, v11, 0x55).m128_f32[0] + v11.m128_f32[0])) >= (double)a1 )
                break;
              v4 += 4;
              v10 += 4;
              --v5;
              --v9;
            }
            while ( v9 >= 0 );
          }
          v3 = a2;
          goto LABEL_14;
        }
      }
      v16 = v6 + 4;
      i += 4;
      *(_OWORD *)v6 = *(_OWORD *)v4;
LABEL_14:
      v6 = v16;
      v4 += 4;
      if ( --v5 < 0 )
        break;
    }
  }
  v12 = ((int)v6 - *(_DWORD *)v3) >> 4;
  *a3 = v12;
  result = *(_DWORD *)(v3 + 8) & 0x3FFFFFFF;
  if ( result < v12 )
  {
    v14 = 2 * result;
    if ( v12 >= v14 )
      v14 = v12;
    result = sub_8A6E40((const void **)v3, v14, 0x10);
  }
  *(_DWORD *)(v3 + 4) = v12;
  return result;
}
