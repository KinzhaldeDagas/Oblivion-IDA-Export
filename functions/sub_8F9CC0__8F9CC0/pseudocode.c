int __cdecl sub_8F9CC0(__m128 **a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // eax
  __m128 *v10; // ebx
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 *v15; // ecx
  char *v16; // eax
  int v17; // edx
  __m128 *v18; // ecx
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 *v23; // eax
  char *v24; // ecx
  int v25; // edx
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  int v28; // esi
  _DWORD *v29; // ecx
  int v31[5]; // [esp+1Ch] [ebp-C4h] BYREF
  __m128 v32; // [esp+30h] [ebp-B0h] BYREF
  float v33; // [esp+4Ch] [ebp-94h]
  float v34; // [esp+6Ch] [ebp-74h]
  __m128 v35[2]; // [esp+90h] [ebp-50h] BYREF
  __m128 v36[3]; // [esp+B0h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f9ccc*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f9cd9*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8f9ceb*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f9ced*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8f9cef*/
    *v7 = "TtCapsTriangle"; /*0x8f9cf5*/
    v8 = __rdtsc(); /*0x8f9cfb*/
    v7[1] = v8; /*0x8f9d05*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8f9d0b*/
  }
  sub_8D1EF0(*a2 + 1, (float *)v31); /*0x8f9d1f*/
  v9 = a1[2]; /*0x8f9d27*/
  v10 = *a1; /*0x8f9d2a*/
  v11 = *v9; /*0x8f9d2c*/
  v12 = v9[1]; /*0x8f9d2f*/
  v13 = v9[2]; /*0x8f9d33*/
  v14 = v9[3]; /*0x8f9d37*/
  v15 = *a1 + 1; /*0x8f9d3b*/
  v16 = (char *)((char *)v35 - (char *)v15); /*0x8f9d48*/
  v17 = 2; /*0x8f9d4a*/
  do /*0x8f9d8b*/
  {
    *(__m128 *)((char *)v15 + (_DWORD)v16) = _mm_add_ps( /*0x8f9d83*/
                                               _mm_add_ps(
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v15, *v15, 0)),
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0xAA)), v14));
    ++v15; /*0x8f9d87*/
    --v17; /*0x8f9d8a*/
  }
  while ( v17 ); /*0x8f9d8b*/
  v18 = a2[2]; /*0x8f9d8d*/
  v19 = *v18; /*0x8f9d92*/
  v20 = v18[1]; /*0x8f9d95*/
  v21 = v18[2]; /*0x8f9d99*/
  v22 = v18[3]; /*0x8f9d9d*/
  v23 = *a2 + 1; /*0x8f9da1*/
  v24 = (char *)((char *)v36 - (char *)v23); /*0x8f9dab*/
  v25 = 3; /*0x8f9dad*/
  do /*0x8f9ded*/
  {
    *(__m128 *)((char *)v23 + (_DWORD)v24) = _mm_add_ps( /*0x8f9de5*/
                                               _mm_add_ps(
                                                 _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0)),
                                                 _mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v21, _mm_shuffle_ps(*v23, *v23, 0xAA)), v22));
    ++v23; /*0x8f9de9*/
    --v25; /*0x8f9dec*/
  }
  while ( v25 ); /*0x8f9ded*/
  sub_8D0CA0(v35, v10->m128_f32[3], v36, (*a2)->m128_f32[3], (float *)v31, *(float *)(a3 + 8), 0, &v32); /*0x8f9e1c*/
  if ( v33 < (double)*(float *)&SrcStr || v34 < (double)*(float *)&SrcStr ) /*0x8f9e44*/
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2); /*0x8f9e4d*/
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f9e50*/
  LODWORD(v27) = v26[MEMORY[0xBA9DE4]]; /*0x8f9e5d*/
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8f9e6c*/
  {
    v28 = v26[MEMORY[0xBA9DE4]]; /*0x8f9e6e*/
    v29 = *(_DWORD **)(v27 + 0x1A4); /*0x8f9e70*/
    *v29 = "Et"; /*0x8f9e76*/
    v27 = __rdtsc(); /*0x8f9e7c*/
    v29[1] = v27; /*0x8f9e86*/
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x8f9e8c*/
  }
  return v27; /*0x8f9e92*/
}
