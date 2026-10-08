int __thiscall sub_8F9AF0(float *this, __m128 **a2, __m128 **a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  __m128 *v10; // ecx
  __m128 *v11; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm4
  __m128 *v16; // edi
  __m128 *v17; // edx
  char *v18; // eax
  int v19; // esi
  __m128 *v20; // edx
  __m128 v21; // xmm1
  __m128 v22; // xmm2
  __m128 v23; // xmm3
  __m128 v24; // xmm4
  __m128 *v25; // eax
  int v26; // esi
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // esi
  _DWORD *v30; // ecx
  __m128 v33; // [esp+20h] [ebp-B0h] BYREF
  float v34; // [esp+3Ch] [ebp-94h]
  float v35; // [esp+5Ch] [ebp-74h]
  __m128 v36[2]; // [esp+80h] [ebp-50h] BYREF
  __m128 v37[3]; // [esp+A0h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f9b07*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f9b0e*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f9b1f*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f9b21*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f9b23*/
    *v8 = "TtCapsTriangle"; /*0x8f9b29*/
    v9 = __rdtsc(); /*0x8f9b2f*/
    v8[1] = v9; /*0x8f9b39*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8f9b3f*/
  }
  v10 = *a2; /*0x8f9b48*/
  v11 = a2[2]; /*0x8f9b4a*/
  v12 = *v11; /*0x8f9b4d*/
  v13 = v11[1]; /*0x8f9b50*/
  v14 = v11[2]; /*0x8f9b54*/
  v15 = v11[3]; /*0x8f9b58*/
  v16 = *a3; /*0x8f9b5f*/
  v17 = *a2 + 1; /*0x8f9b61*/
  v18 = (char *)((char *)v36 - (char *)v17); /*0x8f9b6b*/
  v19 = 2; /*0x8f9b6d*/
  do /*0x8f9bad*/
  {
    *(__m128 *)((char *)v17 + (_DWORD)v18) = _mm_add_ps( /*0x8f9ba5*/
                                               _mm_add_ps(
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v17, *v17, 0)),
                                                 _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0xAA)), v15));
    ++v17; /*0x8f9ba9*/
    --v19; /*0x8f9bac*/
  }
  while ( v19 ); /*0x8f9bad*/
  v20 = a3[2]; /*0x8f9baf*/
  v21 = *v20; /*0x8f9bb2*/
  v22 = v20[1]; /*0x8f9bb5*/
  v23 = v20[2]; /*0x8f9bb9*/
  v24 = v20[3]; /*0x8f9bbd*/
  v25 = v16 + 1; /*0x8f9bc1*/
  v26 = 3; /*0x8f9bcd*/
  do /*0x8f9c0d*/
  {
    *(__m128 *)((char *)v25 + (char *)v37 - (char *)&v16[1]) = _mm_add_ps( /*0x8f9c05*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v25, *v25, 0)),
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v25, *v25, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v25, *v25, 0xAA)),
                                                                   v24));
    ++v25; /*0x8f9c09*/
    --v26; /*0x8f9c0c*/
  }
  while ( v26 ); /*0x8f9c0d*/
  sub_8D0CA0(v36, v10->m128_f32[3], v37, v16->m128_f32[3], this + 5, *(float *)(a4 + 8), 0, &v33); /*0x8f9c3d*/
  if ( v34 < (double)*(float *)&SrcStr || v35 < (double)*(float *)&SrcStr ) /*0x8f9c65*/
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a5 + 4))(a5, a2, a3); /*0x8f9c71*/
  v27 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f9c74*/
  LODWORD(v28) = v27[MEMORY[0xBA9DE4]]; /*0x8f9c81*/
  if ( *(_DWORD *)(v28 + 0x1A4) < *(_DWORD *)(v28 + 0x1A8) ) /*0x8f9c90*/
  {
    v29 = v27[MEMORY[0xBA9DE4]]; /*0x8f9c92*/
    v30 = *(_DWORD **)(v28 + 0x1A4); /*0x8f9c94*/
    *v30 = "Et"; /*0x8f9c9a*/
    v28 = __rdtsc(); /*0x8f9ca0*/
    v30[1] = v28; /*0x8f9caa*/
    *(_DWORD *)(v29 + 0x1A4) = v30 + 3; /*0x8f9cb0*/
  }
  return v28; /*0x8f9cb6*/
}
