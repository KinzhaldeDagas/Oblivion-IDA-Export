int __thiscall sub_8FB790(unsigned __int16 *this, int *a2, __m128 **a3, int a4, __m128 **a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // ebx
  __m128 *v11; // eax
  __m128 *v12; // edi
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // ecx
  __m128 *v18; // esi
  char *v19; // eax
  int v20; // edx
  double v21; // st7
  __m128 v22; // xmm1
  double v23; // st6
  __int16 v24; // si
  int v25; // eax
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  int v28; // esi
  _DWORD *v29; // ecx
  int v32; // [esp+18h] [ebp-58h]
  unsigned int v33; // [esp+18h] [ebp-58h]
  __m128 v34; // [esp+20h] [ebp-50h] BYREF
  float v35; // [esp+30h] [ebp-40h]
  char v36[48]; // [esp+40h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fb7a4*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fb7ab*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8fb7bc*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8fb7be*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8fb7c0*/
    *v8 = "TtSphereTri"; /*0x8fb7c6*/
    v9 = __rdtsc(); /*0x8fb7cc*/
    v8[1] = v9; /*0x8fb7d6*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8fb7dc*/
  }
  v10 = *a5; /*0x8fb7ea*/
  v11 = a3[2]; /*0x8fb7f2*/
  v12 = *a3; /*0x8fb7f5*/
  v13 = *v11; /*0x8fb7f7*/
  v14 = v11[1]; /*0x8fb7fa*/
  v15 = v11[2]; /*0x8fb7fe*/
  v16 = v11[3]; /*0x8fb802*/
  v17 = *a3 + 1; /*0x8fb806*/
  v32 = *a2; /*0x8fb80d*/
  v18 = (__m128 *)(a2[2] + 0x30); /*0x8fb811*/
  v19 = (char *)(v36 - (char *)v17); /*0x8fb814*/
  v20 = 3; /*0x8fb816*/
  do /*0x8fb85b*/
  {
    *(__m128 *)((char *)v17 + (_DWORD)v19) = _mm_add_ps( /*0x8fb853*/
                                               _mm_add_ps(
                                                 _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                 _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)), v16));
    ++v17; /*0x8fb857*/
    --v20; /*0x8fb85a*/
  }
  while ( v20 ); /*0x8fb85b*/
  sub_8D20C0(v18, (__m128 *)v36, (int)(this + 8), &v34); /*0x8fb870*/
  v21 = *(float *)(v32 + 0xC) + v12->m128_f32[3]; /*0x8fb886*/
  if ( v21 + *(float *)(a4 + 8) <= v35 ) /*0x8fb897*/
  {
    v25 = *(this + 6); /*0x8fb912*/
    if ( (_WORD)v25 != 0xFFFF ) /*0x8fb91a*/
    {
      (*(void (__thiscall **)(_DWORD, int))(**((_DWORD **)this + 2) + 0x10))(*((_DWORD *)this + 2), v25); /*0x8fb922*/
      *(this + 6) = 0xFFFF; /*0x8fb925*/
    }
  }
  else
  {
    v22 = v34; /*0x8fb89c*/
    *(float *)&v33 = v12->m128_f32[3] - v35; /*0x8fb8a5*/
    v23 = v35 - v21; /*0x8fb8ba*/
    *v10 = _mm_add_ps(*v18, _mm_mul_ps(_mm_shuffle_ps((__m128)v33, (__m128)v33, 0), v34)); /*0x8fb8c9*/
    v10[1] = v22; /*0x8fb8cc*/
    v10[1].m128_f32[3] = v23; /*0x8fb8d0*/
    if ( *(this + 6) == 0xFFFF ) /*0x8fb8db*/
      *(this + 6) = (*(int (__thiscall **)(_DWORD, int *, __m128 **, int, __m128 *))(**((_DWORD **)this + 2) + 8))( /*0x8fb8ef*/
                      *((_DWORD *)this + 2),
                      a2,
                      a3,
                      a4,
                      v10);
    v24 = *(this + 6); /*0x8fb8f3*/
    if ( v24 != (__int16)0xFFFF ) /*0x8fb8fc*/
    {
      v10[2].m128_i16[0] = v24; /*0x8fb901*/
      *a5 += 3; /*0x8fb905*/
    }
  }
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8fb92b*/
  LODWORD(v27) = v26[MEMORY[0xBA9DE4]]; /*0x8fb938*/
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) ) /*0x8fb947*/
  {
    v28 = v26[MEMORY[0xBA9DE4]]; /*0x8fb949*/
    v29 = *(_DWORD **)(v27 + 0x1A4); /*0x8fb94b*/
    *v29 = "Et"; /*0x8fb951*/
    v27 = __rdtsc(); /*0x8fb957*/
    v29[1] = v27; /*0x8fb961*/
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3; /*0x8fb967*/
  }
  return v27; /*0x8fb96d*/
}
