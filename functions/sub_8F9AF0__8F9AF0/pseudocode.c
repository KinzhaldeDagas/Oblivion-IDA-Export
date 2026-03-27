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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtCapsTriangle";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *a2;
  v11 = a2[2];
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = v11[3];
  v16 = *a3;
  v17 = *a2 + 1;
  v18 = (char *)((char *)v36 - (char *)v17);
  v19 = 2;
  do
  {
    *(__m128 *)((char *)v17 + (_DWORD)v18) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v17, *v17, 0)),
                                                 _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0xAA)), v15));
    ++v17;
    --v19;
  }
  while ( v19 );
  v20 = a3[2];
  v21 = *v20;
  v22 = v20[1];
  v23 = v20[2];
  v24 = v20[3];
  v25 = v16 + 1;
  v26 = 3;
  do
  {
    *(__m128 *)((char *)v25 + (char *)v37 - (char *)&v16[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v25, *v25, 0)),
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v25, *v25, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v23, _mm_shuffle_ps(*v25, *v25, 0xAA)),
                                                                   v24));
    ++v25;
    --v26;
  }
  while ( v26 );
  sub_8D0CA0(v36, v10->m128_f32[3], v37, v16->m128_f32[3], this + 5, *(float *)(a4 + 8), 0, &v33);
  if ( v34 < (double)*(float *)&SrcStr || v35 < (double)*(float *)&SrcStr )
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a5 + 4))(a5, a2, a3);
  v27 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v28) = v27[TlsIndex];
  if ( *(_DWORD *)(v28 + 0x1A4) < *(_DWORD *)(v28 + 0x1A8) )
  {
    v29 = v27[TlsIndex];
    v30 = *(_DWORD **)(v28 + 0x1A4);
    *v30 = "Et";
    v28 = __rdtsc();
    v30[1] = v28;
    *(_DWORD *)(v29 + 0x1A4) = v30 + 3;
  }
  return v28;
}
