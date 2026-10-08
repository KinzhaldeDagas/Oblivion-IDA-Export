int __thiscall sub_929A30(_DWORD *this, __m128 *a2, int a3, __m128 *a4)
{
  int v5; // edi
  int v6; // eax
  int v7; // eax
  __m128 *v8; // edx
  __m128 *v9; // esi
  __m128 v10; // xmm1
  __m128 v11; // xmm2
  __m128 v12; // xmm3
  __m128 v13; // xmm4
  int v14; // eax
  int v15; // ecx
  __int32 *v16; // edx
  __m128 v17; // xmm2
  __m128 v18; // xmm3
  __m128 *v19; // eax
  __m128 v20; // xmm0
  __m128 v21; // xmm1
  int result; // eax
  int v23; // ecx
  __m128 *v24; // [esp+10h] [ebp-210h] BYREF
  int v25; // [esp+14h] [ebp-20Ch]
  int v26; // [esp+18h] [ebp-208h]
  char v27; // [esp+20h] [ebp-200h] BYREF

  v5 = *(this + 4); /*0x929a40*/
  v24 = (__m128 *)&v27; /*0x929a4a*/
  v25 = 0; /*0x929a4e*/
  v26 = 0x80000010; /*0x929a56*/
  if ( v5 > 0x10 ) /*0x929a5e*/
  {
    v6 = 0x20; /*0x929a63*/
    if ( v5 >= 0x20 ) /*0x929a68*/
      v6 = v5; /*0x929a6a*/
    sub_8A6E40((const void **)&v24, v6, 0x20); /*0x929a74*/
  }
  v7 = *(this + 4); /*0x929a7f*/
  v8 = v24; /*0x929a82*/
  v9 = (__m128 *)*(this + 3); /*0x929a86*/
  v10 = *a2; /*0x929a89*/
  v11 = a2[1]; /*0x929a8c*/
  v12 = a2[2]; /*0x929a90*/
  v13 = a2[3]; /*0x929a94*/
  v25 = v5; /*0x929a98*/
  v14 = 2 * v7; /*0x929a9c*/
  do /*0x929adf*/
  {
    *v8++ = _mm_add_ps( /*0x929ad3*/
              _mm_add_ps(_mm_mul_ps(v10, _mm_shuffle_ps(*v9, *v9, 0)), _mm_mul_ps(v11, _mm_shuffle_ps(*v9, *v9, 0x55))),
              _mm_add_ps(_mm_mul_ps(v12, _mm_shuffle_ps(*v9, *v9, 0xAA)), v13));
    ++v9; /*0x929ad9*/
    --v14; /*0x929adc*/
  }
  while ( v14 > 0 ); /*0x929adf*/
  v15 = v25; /*0x929ae1*/
  v16 = (__int32 *)v24; /*0x929ae7*/
  v17 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x929b07*/
  v18 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0); /*0x929b0b*/
  v19 = v24; /*0x929b0f*/
  if ( v25 > 0 ) /*0x929b11*/
  {
    do /*0x929b2a*/
    {
      v20 = *v19; /*0x929b13*/
      v21 = v19[1]; /*0x929b16*/
      v19 += 2; /*0x929b1a*/
      --v15; /*0x929b1d*/
      v17 = _mm_min_ps(_mm_min_ps(v17, v21), v20); /*0x929b24*/
      v18 = _mm_max_ps(_mm_max_ps(v18, v21), v20); /*0x929b27*/
    }
    while ( v15 ); /*0x929b2a*/
  }
  *a4 = v17; /*0x929b2f*/
  a4[1] = v18; /*0x929b32*/
  result = v26; /*0x929b36*/
  if ( v26 >= 0 ) /*0x929b3c*/
  {
    v23 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x929b4e*/
    if ( !v23 ) /*0x929b56*/
      v23 = unk_BA7D9C; /*0x929b58*/
    return sub_8A75D0(v23, v16, 0x20 * v26, 0x14); /*0x929b6a*/
  }
  return result; /*0x929b6f*/
}
