int __cdecl sub_8FA580(__m128 **a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ebx
  __m128 *v10; // edi
  __m128 *v11; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm4
  __m128 *v16; // ecx
  int v17; // esi
  __m128 *v18; // ecx
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 *v23; // eax
  int v24; // edx
  float v25; // eax
  float v26; // ecx
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // esi
  _DWORD *v30; // ecx
  float v32; // [esp+14h] [ebp-7Ch]
  float v33; // [esp+18h] [ebp-78h]
  float v34; // [esp+1Ch] [ebp-74h]
  __m128 v35[2]; // [esp+20h] [ebp-70h] BYREF
  __m128 v36[2]; // [esp+40h] [ebp-50h] BYREF
  __m128 v37[2]; // [esp+60h] [ebp-30h] BYREF
  __m128 **v38; // [esp+80h] [ebp-10h]
  __m128 **v39; // [esp+84h] [ebp-Ch]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fa58c*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fa599*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x8fa5ab*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fa5ad*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x8fa5af*/
    *v7 = "TtCapsCaps"; /*0x8fa5b5*/
    v8 = __rdtsc(); /*0x8fa5bb*/
    LODWORD(v32) = v8; /*0x8fa5bd*/
    v7[1] = v8; /*0x8fa5c5*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x8fa5cb*/
  }
  v9 = *a1; /*0x8fa5d4*/
  v10 = *a2; /*0x8fa5d9*/
  v38 = a1; /*0x8fa5db*/
  v11 = a1[2]; /*0x8fa5e2*/
  v39 = a2; /*0x8fa5e5*/
  v12 = *v11; /*0x8fa5ec*/
  v13 = v11[1]; /*0x8fa5ef*/
  v14 = v11[2]; /*0x8fa5f3*/
  v15 = v11[3]; /*0x8fa5f7*/
  v16 = v9 + 1; /*0x8fa5fb*/
  v17 = 2; /*0x8fa604*/
  do /*0x8fa64b*/
  {
    *(__m128 *)((char *)v16 + (char *)v36 - (char *)&v9[1]) = _mm_add_ps( /*0x8fa643*/
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0)),
                                                                  _mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v14, _mm_shuffle_ps(*v16, *v16, 0xAA)),
                                                                  v15));
    ++v16; /*0x8fa647*/
    --v17; /*0x8fa64a*/
  }
  while ( v17 ); /*0x8fa64b*/
  v18 = a2[2]; /*0x8fa64d*/
  v19 = *v18; /*0x8fa650*/
  v20 = v18[1]; /*0x8fa653*/
  v21 = v18[2]; /*0x8fa657*/
  v22 = v18[3]; /*0x8fa65b*/
  v23 = v10 + 1; /*0x8fa65f*/
  v24 = 2; /*0x8fa668*/
  do /*0x8fa6ab*/
  {
    *(__m128 *)((char *)v23 + (char *)v35 - (char *)&v10[1]) = _mm_add_ps( /*0x8fa6a3*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0)),
                                                                   _mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v23, *v23, 0xAA)),
                                                                   v22));
    ++v23; /*0x8fa6a7*/
    --v24; /*0x8fa6aa*/
  }
  while ( v24 ); /*0x8fa6ab*/
  v25 = v10->m128_f32[3]; /*0x8fa6b3*/
  v26 = v9->m128_f32[3]; /*0x8fa6b6*/
  v32 = *(float *)(a3 + 8); /*0x8fa6b9*/
  v33 = v25; /*0x8fa6bd*/
  v34 = v26; /*0x8fa6cb*/
  if ( !sub_8D0A10(v36, v26, v35, v25, v32, v37) ) /*0x8fa6e3*/
    (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)a4 + 4))(a4, v37); /*0x8fa6f9*/
  v27 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fa6fc*/
  LODWORD(v28) = v27[MEMORY[0xBA9DE4]]; /*0x8fa709*/
  if ( *(_DWORD *)(v28 + 0x1A4) < *(_DWORD *)(v28 + 0x1A8) ) /*0x8fa718*/
  {
    v29 = v27[MEMORY[0xBA9DE4]]; /*0x8fa71a*/
    v30 = *(_DWORD **)(v28 + 0x1A4); /*0x8fa71c*/
    *v30 = "Et"; /*0x8fa722*/
    v28 = __rdtsc(); /*0x8fa728*/
    v30[1] = v28; /*0x8fa732*/
    *(_DWORD *)(v29 + 0x1A4) = v30 + 3; /*0x8fa738*/
  }
  return v28; /*0x8fa73e*/
}
