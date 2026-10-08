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

  v4 = *a1; /*0x8f898f*/
  v5 = a2[2]; /*0x8f8996*/
  v6 = *v5; /*0x8f8999*/
  v7 = v5[1]; /*0x8f899c*/
  v8 = v5[2]; /*0x8f89a0*/
  v9 = v5[3]; /*0x8f89a4*/
  v10 = *a2 + 1; /*0x8f89ab*/
  v25 = *a2; /*0x8f89b2*/
  v11 = v10; /*0x8f89b6*/
  v12 = 3; /*0x8f89ba*/
  do /*0x8f89fb*/
  {
    *(__m128 *)((char *)v11 + v30 - (char *)v10) = _mm_add_ps( /*0x8f89f3*/
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v6, _mm_shuffle_ps(*v11, *v11, 0)),
                                                       _mm_mul_ps(v7, _mm_shuffle_ps(*v11, *v11, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v8, _mm_shuffle_ps(*v11, *v11, 0xAA)), v9));
    ++v11; /*0x8f89f7*/
    --v12; /*0x8f89fa*/
  }
  while ( v12 ); /*0x8f89fb*/
  v13 = a1[2]; /*0x8f8a00*/
  v14 = *v13; /*0x8f8a03*/
  v15 = v13[1]; /*0x8f8a06*/
  v16 = v13[2]; /*0x8f8a0a*/
  v17 = v13[3]; /*0x8f8a0e*/
  v18 = v4->m128_i32[3]; /*0x8f8a12*/
  v19 = v4 + 1; /*0x8f8a15*/
  v20 = v18; /*0x8f8a1f*/
  v21 = v19; /*0x8f8a21*/
  do /*0x8f8a62*/
  {
    *(__m128 *)((char *)v21 + v31 - (char *)v19) = _mm_add_ps( /*0x8f8a58*/
                                                     _mm_add_ps(
                                                       _mm_mul_ps(v14, _mm_shuffle_ps(*v21, *v21, 0)),
                                                       _mm_mul_ps(v15, _mm_shuffle_ps(*v21, *v21, 0x55))),
                                                     _mm_add_ps(_mm_mul_ps(v16, _mm_shuffle_ps(*v21, *v21, 0xAA)), v17));
    ++v21; /*0x8f8a5c*/
    --v20; /*0x8f8a5f*/
  }
  while ( v20 > 0 ); /*0x8f8a62*/
  sub_8D1DB0(v10, v27); /*0x8f8a6a*/
  v22 = 0; /*0x8f8a72*/
  if ( v18 > 0 ) /*0x8f8a76*/
  {
    v24 = (__m128 *)v31; /*0x8f8a7f*/
    for ( i = &v19->m128_f32[3]; ; i += 4 ) /*0x8f8a83*/
    {
      v26 = *i + v25->m128_f32[3]; /*0x8f8a9c*/
      sub_8D20C0(v24, (__m128 *)v30, (int)v27, &v28); /*0x8f8aa7*/
      if ( v29 < (double)v26 ) /*0x8f8abc*/
        break; /*0x8f8abc*/
      ++v22; /*0x8f8ac2*/
      ++v24; /*0x8f8acb*/
      if ( v22 >= v18 ) /*0x8f8acf*/
        return; /*0x8f8acf*/
    }
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x8f8ae5*/
  }
}
