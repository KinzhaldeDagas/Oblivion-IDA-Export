void __cdecl sub_8F8980(__m128 **a1, __m128 **a2, int a3, int a4)
{
  __m128 *v4; // edx
  __m128 *v5; // eax
  __m128 v6; // xmm1
  __m128 v7; // xmm2
  __m128 v8; // xmm3
  __m128 v9; // xmm4
  __m128 *v10; // edi
  __m128 *v11; // ecx
  int v12; // esi
  __m128 *v13; // eax
  __m128 v14; // xmm1
  __m128 v15; // xmm2
  __m128 v16; // xmm3
  __m128 v17; // xmm4
  int v18; // esi
  __m128 *v19; // ebx
  int v20; // edx
  __m128 *v21; // ecx
  int v22; // edi
  float *i; // ebx
  __m128 *v24; // [esp+8h] [ebp-ECh]
  __m128 *v25; // [esp+Ch] [ebp-E8h]
  float v26; // [esp+10h] [ebp-E4h]
  float v27[4]; // [esp+14h] [ebp-E0h] BYREF
  __m128 v28; // [esp+24h] [ebp-D0h] BYREF
  float v29; // [esp+34h] [ebp-C0h]
  char v30[48]; // [esp+44h] [ebp-B0h] BYREF
  char v31[128]; // [esp+74h] [ebp-80h] BYREF

  v4 = *a1;
  v5 = a2[2];
  v6 = *v5;
  v7 = v5[1];
  v8 = v5[2];
  v9 = v5[3];
  v10 = *a2 + 1;
  v25 = *a2;
  v11 = v10;
  v12 = 3;
  do
  {
    *(__m128 *)((char *)v11 + v30 - (char *)v10) = _mm_add_ps(
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v6, _mm_shuffle_ps(*v11, *v11, 0)),
                                                       _mm_mul_ps(v7, _mm_shuffle_ps(*v11, *v11, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v8, _mm_shuffle_ps(*v11, *v11, 0xAA)), v9));
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = a1[2];
  v14 = *v13;
  v15 = v13[1];
  v16 = v13[2];
  v17 = v13[3];
  v18 = v4->m128_i32[3];
  v19 = v4 + 1;
  v20 = v18;
  v21 = v19;
  do
  {
    *(__m128 *)((char *)v21 + v31 - (char *)v19) = _mm_add_ps(
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v14, _mm_shuffle_ps(*v21, *v21, 0)),
                                                       _mm_mul_ps(v15, _mm_shuffle_ps(*v21, *v21, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v16, _mm_shuffle_ps(*v21, *v21, 0xAA)), v17));
    ++v21;
    --v20;
  }
  while ( v20 > 0 );
  sub_8D1DB0(v10, v27);
  v22 = 0;
  if ( v18 > 0 )
  {
    v24 = (__m128 *)v31;
    for ( i = &v19->m128_f32[3]; ; i += 4 )
    {
      v26 = *i + v25->m128_f32[3];
      sub_8D20C0(v24, (__m128 *)v30, (int)v27, &v28);
      if ( v29 < (double)v26 )
        break;
      ++v22;
      ++v24;
      if ( v22 >= v18 )
        return;
    }
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  }
}
