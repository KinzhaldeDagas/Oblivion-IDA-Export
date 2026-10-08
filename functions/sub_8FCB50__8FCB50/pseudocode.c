int __cdecl sub_8FCB50(int *a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edi
  __m128 *v10; // eax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 *v15; // ecx
  __m128 *v16; // esi
  int v17; // edx
  double v18; // st7
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // ecx
  int v26; // [esp+Ch] [ebp-34h]
  __m128 v27; // [esp+10h] [ebp-30h] BYREF
  char v28[16]; // [esp+20h] [ebp-20h] BYREF
  __m128 v29; // [esp+30h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fcb59*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fcb66*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fcb78*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fcb7a*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fcb7c*/
    *v7 = "TtSphereCapsule"; /*0x8fcb82*/
    v8 = __rdtsc(); /*0x8fcb88*/
    v7[1] = v8; /*0x8fcb92*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fcb98*/
  }
  v9 = *a2; /*0x8fcba1*/
  v10 = a2[2]; /*0x8fcba3*/
  v11 = *v10; /*0x8fcbab*/
  v12 = v10[1]; /*0x8fcbae*/
  v13 = v10[2]; /*0x8fcbb2*/
  v14 = v10[3]; /*0x8fcbb6*/
  v26 = *a1; /*0x8fcbbd*/
  v15 = *a2 + 1; /*0x8fcbc1*/
  v16 = (__m128 *)(a1[2] + 0x30); /*0x8fcbc8*/
  v17 = 2; /*0x8fcbcd*/
  do /*0x8fcc0d*/
  {
    *(__m128 *)((char *)v15 + v28 - (char *)&v9[1]) = _mm_add_ps( /*0x8fcc05*/
                                                        _mm_add_ps(
                                                          _mm_mul_ps(v11, _mm_shuffle_ps(*v15, *v15, 0)),
                                                          _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                                        _mm_add_ps(
                                                          _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0xAA)),
                                                          v14));
    ++v15; /*0x8fcc09*/
    --v17; /*0x8fcc0c*/
  }
  while ( v17 ); /*0x8fcc0d*/
  sub_8D1CD0(v16, (__m128 *)v28, &v29, &v27); /*0x8fcc1f*/
  v18 = v9->m128_f32[3] + *(float *)(v26 + 0xC); /*0x8fcc2b*/
  v19 = _mm_sub_ps(v27, *v16); /*0x8fcc36*/
  v20 = _mm_mul_ps(v19, v19); /*0x8fcc39*/
  if ( (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0] /*0x8fcc6e*/
             + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0])) < v18 * v18 )
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x8fcc7a*/
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fcc7d*/
  LODWORD(v22) = v21[MEMORY[0xBA9DE4]]; /*0x8fcc8a*/
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) ) /*0x8fcc99*/
  {
    v23 = v21[MEMORY[0xBA9DE4]]; /*0x8fcc9b*/
    v24 = *(_DWORD **)(v22 + 0x1A4); /*0x8fcc9d*/
    *v24 = "Et"; /*0x8fcca3*/
    v22 = __rdtsc(); /*0x8fcca9*/
    v24[1] = v22; /*0x8fccb3*/
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3; /*0x8fccb9*/
  }
  return v22; /*0x8fccbf*/
}
