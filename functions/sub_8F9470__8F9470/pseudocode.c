int __thiscall sub_8F9470(float *this, __m128 **a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  char *v11; // edi
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // esi
  __m128 *v18; // ecx
  int v19; // eax
  int v20; // edx
  __m128 *v21; // ecx
  __m128 v22; // xmm1
  __m128 v23; // xmm2
  __m128 v24; // xmm3
  __m128 v25; // xmm4
  __m128 *v26; // eax
  int v27; // edx
  __m128 *v28; // edi
  float *v29; // esi
  __int16 v30; // ax
  __m128 *v31; // eax
  __m128 v32; // xmm0
  int v33; // eax
  _DWORD *v34; // ecx
  unsigned __int64 v35; // rax
  int v36; // esi
  _DWORD *v37; // ecx
  int v39; // [esp+0h] [ebp-C0h] BYREF
  int v40; // [esp+Ch] [ebp-B4h]
  __m128 v41[2]; // [esp+10h] [ebp-B0h] BYREF
  __m128 v42[6]; // [esp+30h] [ebp-90h] BYREF
  __m128 v43[3]; // [esp+90h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f9485*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f948c*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x8f949d*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f949f*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x8f94a1*/
    *v9 = "TtCapsuleTri"; /*0x8f94a7*/
    v10 = __rdtsc(); /*0x8f94ad*/
    v40 = v10; /*0x8f94af*/
    v9[1] = v10; /*0x8f94b7*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x8f94bd*/
  }
  v11 = (char *)*a2; /*0x8f94c6*/
  v12 = a2[2]; /*0x8f94c8*/
  v13 = *v12; /*0x8f94ce*/
  v14 = v12[1]; /*0x8f94d1*/
  v15 = v12[2]; /*0x8f94d5*/
  v16 = v12[3]; /*0x8f94d9*/
  v17 = *a3; /*0x8f94dd*/
  v18 = *a2 + 1; /*0x8f94df*/
  v19 = (char *)&v39 - (char *)*a2; /*0x8f94e6*/
  v20 = 2; /*0x8f94e8*/
  do /*0x8f952b*/
  {
    *(__m128 *)((char *)v18 + v19) = _mm_add_ps( /*0x8f9523*/
                                       _mm_add_ps(
                                         _mm_mul_ps(v13, _mm_shuffle_ps(*v18, *v18, 0)),
                                         _mm_mul_ps(v14, _mm_shuffle_ps(*v18, *v18, 0x55))),
                                       _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(*v18, *v18, 0xAA)), v16));
    ++v18; /*0x8f9527*/
    --v20; /*0x8f952a*/
  }
  while ( v20 ); /*0x8f952b*/
  v21 = a3[2]; /*0x8f9530*/
  v22 = *v21; /*0x8f9533*/
  v23 = v21[1]; /*0x8f9536*/
  v24 = v21[2]; /*0x8f953a*/
  v25 = v21[3]; /*0x8f953e*/
  v26 = v17 + 1; /*0x8f9542*/
  v27 = 3; /*0x8f954e*/
  do /*0x8f958e*/
  {
    *(__m128 *)((char *)v26 + (char *)v43 - (char *)&v17[1]) = _mm_add_ps( /*0x8f9586*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v26, *v26, 0)),
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v26, *v26, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v24, _mm_shuffle_ps(*v26, *v26, 0xAA)),
                                                                   v25));
    ++v26; /*0x8f958a*/
    --v27; /*0x8f958d*/
  }
  while ( v27 ); /*0x8f958e*/
  sub_8D0CA0(v41, *((float *)v11 + 3), v43, v17->m128_f32[3], this + 5, *(float *)(a4 + 8), 1, v42); /*0x8f95b7*/
  v28 = v42; /*0x8f95bf*/
  v29 = this + 3; /*0x8f95c3*/
  v40 = 3; /*0x8f95c6*/
  do /*0x8f964b*/
  {
    if ( v28[1].m128_f32[3] >= (double)*(float *)(a4 + 8) ) /*0x8f95de*/
    {
      HIWORD(v33) = 0; /*0x8f9623*/
      if ( *(_WORD *)v29 != 0xFFFF ) /*0x8f962c*/
      {
        LOWORD(v33) = *(_WORD *)v29; /*0x8f9625*/
        (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v33); /*0x8f9634*/
        *(_WORD *)v29 = 0xFFFF; /*0x8f9637*/
      }
    }
    else if ( *(_WORD *)v29 != 0xFFFF /*0x8f9600*/
           || (v30 = (*(int (__thiscall **)(_DWORD, __m128 **, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))(
                       *((_DWORD *)this + 2),
                       a2,
                       a3,
                       a4,
                       v28),
               *(_WORD *)v29 = v30,
               v30 != (__int16)0xFFFF) )
    {
      v31 = *a5; /*0x8f9605*/
      v32 = *v28; /*0x8f9607*/
      *a5 += 3; /*0x8f960d*/
      *v31 = v32; /*0x8f960f*/
      v31[1] = v28[1]; /*0x8f9616*/
      v31[2].m128_i16[0] = *(_WORD *)v29; /*0x8f961d*/
    }
    v29 = (float *)((char *)v29 + 2); /*0x8f9640*/
    v28 += 2; /*0x8f9643*/
    --v40; /*0x8f9647*/
  }
  while ( v40 ); /*0x8f964b*/
  v34 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f964d*/
  LODWORD(v35) = v34[MEMORY[0xBA9DE4]]; /*0x8f965a*/
  if ( *(_DWORD *)(v35 + 0x1A4) < *(_DWORD *)(v35 + 0x1A8) ) /*0x8f9669*/
  {
    v36 = v34[MEMORY[0xBA9DE4]]; /*0x8f966b*/
    v37 = *(_DWORD **)(v35 + 0x1A4); /*0x8f966d*/
    *v37 = "Et"; /*0x8f9673*/
    v35 = __rdtsc(); /*0x8f9679*/
    v37[1] = v35; /*0x8f9683*/
    *(_DWORD *)(v36 + 0x1A4) = v37 + 3; /*0x8f9689*/
  }
  return v35; /*0x8f968f*/
}
