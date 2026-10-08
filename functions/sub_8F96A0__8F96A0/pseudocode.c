int __thiscall sub_8F96A0(float *this, __m128 **a2, __m128 **a3, int a4, int *a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  __m128 *v10; // ebx
  __m128 *v11; // ecx
  __m128 *v12; // eax
  __m128 v13; // xmm1
  __m128 v14; // xmm2
  __m128 v15; // xmm3
  __m128 v16; // xmm4
  __m128 *v17; // edx
  int v18; // edi
  __m128 *v19; // edx
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm3
  __m128 v23; // xmm4
  __m128 *v24; // eax
  int v25; // esi
  __int128 v26; // xmm0
  int v27; // edx
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  int v30; // esi
  _DWORD *v31; // ecx
  _OWORD v34[2]; // [esp+20h] [ebp-E0h] BYREF
  __m128 **v35; // [esp+40h] [ebp-C0h]
  __m128 **v36; // [esp+44h] [ebp-BCh]
  __m128 v37; // [esp+50h] [ebp-B0h] BYREF
  __int128 v38; // [esp+60h] [ebp-A0h]
  __int128 v39; // [esp+70h] [ebp-90h]
  __int128 v40; // [esp+80h] [ebp-80h]
  __m128 v41[2]; // [esp+B0h] [ebp-50h] BYREF
  __m128 v42[3]; // [esp+D0h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f96b7*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f96be*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x8f96cf*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8f96d1*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x8f96d3*/
    *v8 = "TtCapsTriangle"; /*0x8f96d9*/
    v9 = __rdtsc(); /*0x8f96df*/
    v8[1] = v9; /*0x8f96e9*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x8f96ef*/
  }
  v10 = *a2; /*0x8f96f8*/
  v11 = *a3; /*0x8f96fd*/
  v35 = a2; /*0x8f96ff*/
  v12 = a2[2]; /*0x8f9703*/
  v36 = a3; /*0x8f9706*/
  v13 = *v12; /*0x8f970a*/
  v14 = v12[1]; /*0x8f970d*/
  v15 = v12[2]; /*0x8f9711*/
  v16 = v12[3]; /*0x8f9715*/
  v17 = v10 + 1; /*0x8f9719*/
  v18 = 2; /*0x8f9725*/
  do /*0x8f976b*/
  {
    *(__m128 *)((char *)v17 + (char *)v41 - (char *)&v10[1]) = _mm_add_ps( /*0x8f9763*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                                   _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)),
                                                                   v16));
    ++v17; /*0x8f9767*/
    --v18; /*0x8f976a*/
  }
  while ( v18 ); /*0x8f976b*/
  v19 = a3[2]; /*0x8f976d*/
  v20 = *v19; /*0x8f9770*/
  v21 = v19[1]; /*0x8f9773*/
  v22 = v19[2]; /*0x8f9777*/
  v23 = v19[3]; /*0x8f977b*/
  v24 = v11 + 1; /*0x8f977f*/
  v25 = 3; /*0x8f978b*/
  do /*0x8f97cb*/
  {
    *(__m128 *)((char *)v24 + (char *)v42 - (char *)&v11[1]) = _mm_add_ps( /*0x8f97c3*/
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v20, _mm_shuffle_ps(*v24, *v24, 0)),
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v24, *v24, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v24, *v24, 0xAA)),
                                                                   v23));
    ++v24; /*0x8f97c7*/
    --v25; /*0x8f97ca*/
  }
  while ( v25 ); /*0x8f97cb*/
  sub_8D0CA0(v41, v10->m128_f32[3], v42, v11->m128_f32[3], this + 5, *(float *)(a4 + 8), 0, &v37); /*0x8f97fb*/
  if ( *((float *)&v38 + 3) >= (double)*((float *)&v40 + 3) ) /*0x8f9816*/
  {
    if ( *((float *)&v40 + 3) >= (double)*(float *)(a4 + 8) ) /*0x8f9846*/
      goto LABEL_13; /*0x8f9846*/
    v34[0] = v39; /*0x8f984d*/
    v26 = v40; /*0x8f9852*/
  }
  else
  {
    if ( *((float *)&v38 + 3) >= (double)*(float *)(a4 + 8) ) /*0x8f9824*/
      goto LABEL_13; /*0x8f9824*/
    v34[0] = v37; /*0x8f982b*/
    v26 = v38; /*0x8f9830*/
  }
  v27 = *a5; /*0x8f985d*/
  v34[1] = v26; /*0x8f9864*/
  (*(void (__thiscall **)(int *, _OWORD *))(v27 + 4))(a5, v34); /*0x8f9869*/
LABEL_13:
  v28 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8f986c*/
  LODWORD(v29) = v28[MEMORY[0xBA9DE4]]; /*0x8f9879*/
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) ) /*0x8f9888*/
  {
    v30 = v28[MEMORY[0xBA9DE4]]; /*0x8f988a*/
    v31 = *(_DWORD **)(v29 + 0x1A4); /*0x8f988c*/
    *v31 = "Et"; /*0x8f9892*/
    v29 = __rdtsc(); /*0x8f9898*/
    v31[1] = v29; /*0x8f98a2*/
    *(_DWORD *)(v30 + 0x1A4) = v31 + 3; /*0x8f98a8*/
  }
  return v29; /*0x8f98ae*/
}
