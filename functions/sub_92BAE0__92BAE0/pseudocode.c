char *__cdecl sub_92BAE0(char *a1, __m128 *a2, _DWORD *a3, unsigned __int64 a4, __m128 *a5, const void **a6)
{
  char v6; // cl
  __int32 v7; // ebx
  __m128 v8; // xmm0
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  double v11; // st7
  __m128 v12; // xmm0
  int v13; // eax
  int v14; // edx
  int v15; // ecx
  bool v16; // zf
  __m128 v17; // xmm0
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  char v23; // [esp+1Bh] [ebp-35h]
  int v24; // [esp+1Ch] [ebp-34h]
  float v25; // [esp+20h] [ebp-30h]
  float v26; // [esp+24h] [ebp-2Ch]
  float v27; // [esp+28h] [ebp-28h]
  __m128 v28; // [esp+30h] [ebp-20h] BYREF
  int v29; // [esp+40h] [ebp-10h]
  int v30; // [esp+44h] [ebp-Ch]
  int v31; // [esp+48h] [ebp-8h]

  v6 = 0;
  v7 = 0;
  v23 = 0;
  v25 = 3.4028235e38;
  if ( (int)a3[1] > 0 )
  {
    v24 = 0;
    do
    {
      if ( v7 != (_DWORD)a4 && v7 != HIDWORD(a4) )
      {
        v8 = _mm_mul_ps(*(__m128 *)(v24 + *a3), *a2);
        v26 = _mm_shuffle_ps(v8, v8, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]);
        if ( v26 > (double)flt_A7E738 )
        {
          a5->m128_i32[3] = 0x3F800000;
          v9 = _mm_mul_ps(*(__m128 *)(*a3 + v24), *a5);
          v10 = _mm_add_ps(_mm_shuffle_ps(v9, v9, 0x4E), v9);
          v11 = -(float)(v10.m128_f32[0] + _mm_shuffle_ps(v10, v10, 0xB1).m128_f32[0]) / fabs(v26);
          if ( v11 < v25 + flt_A79DB4 && !sub_92B760(a3, a4, v7, &v28) )
          {
            v23 = 1;
            v27 = v11;
            if ( fabs(v27 - v25) >= flt_A79DB4 )
            {
              v16 = ((unsigned int)a6[2] & 0x3FFFFFFF) == 0;
              a6[1] = 0;
              if ( v16 )
                sub_8A6EE0(a6, 0x20);
              v17 = v28;
              v18 = (int)*a6 + 0x20 * (_DWORD)a6[1];
              v19 = v29;
              a6[1] = (char *)a6[1] + 1;
              v20 = v30;
              *(_DWORD *)(v18 + 0x10) = v19;
              v21 = v31;
              *(__m128 *)v18 = v17;
              *(_DWORD *)(v18 + 0x14) = v20;
              *(_DWORD *)(v18 + 0x18) = v21;
              v25 = v11;
            }
            else
            {
              if ( a6[1] == (const void *)((unsigned int)a6[2] & 0x3FFFFFFF) )
                sub_8A6EE0(a6, 0x20);
              v12 = v28;
              v13 = (int)*a6 + 0x20 * (_DWORD)a6[1];
              v14 = v30;
              a6[1] = (char *)a6[1] + 1;
              *(_DWORD *)(v13 + 0x10) = v29;
              v15 = v31;
              *(__m128 *)v13 = v12;
              *(_DWORD *)(v13 + 0x14) = v14;
              *(_DWORD *)(v13 + 0x18) = v15;
            }
          }
        }
      }
      ++v7;
      v24 += 0x10;
    }
    while ( v7 < a3[1] );
    v6 = v23;
  }
  *a1 = v6;
  return a1;
}
