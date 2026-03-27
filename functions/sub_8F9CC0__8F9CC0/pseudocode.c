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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtCapsTriangle";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  sub_8D1EF0(*a2 + 1, (float *)v31);
  v9 = a1[2];
  v10 = *a1;
  v11 = *v9;
  v12 = v9[1];
  v13 = v9[2];
  v14 = v9[3];
  v15 = *a1 + 1;
  v16 = (char *)((char *)v35 - (char *)v15);
  v17 = 2;
  do
  {
    *(__m128 *)((char *)v15 + (_DWORD)v16) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v11, _mm_shuffle_ps(*v15, *v15, 0)),
                                                 _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0xAA)), v14));
    ++v15;
    --v17;
  }
  while ( v17 );
  v18 = a2[2];
  v19 = *v18;
  v20 = v18[1];
  v21 = v18[2];
  v22 = v18[3];
  v23 = *a2 + 1;
  v24 = (char *)((char *)v36 - (char *)v23);
  v25 = 3;
  do
  {
    *(__m128 *)((char *)v23 + (_DWORD)v24) = _mm_add_ps(
                                               _mm_add_ps(
                                                 _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0)),
                                                 _mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0x55))),
                                               _mm_add_ps(_mm_mul_ps(v21, _mm_shuffle_ps(*v23, *v23, 0xAA)), v22));
    ++v23;
    --v25;
  }
  while ( v25 );
  sub_8D0CA0(v35, v10->m128_f32[3], v36, (*a2)->m128_f32[3], (float *)v31, *(float *)(a3 + 8), 0, &v32);
  if ( v33 < (double)*(float *)&SrcStr || v34 < (double)*(float *)&SrcStr )
    (*(void (__thiscall **)(int, __m128 **, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  v26 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v27) = v26[TlsIndex];
  if ( *(_DWORD *)(v27 + 0x1A4) < *(_DWORD *)(v27 + 0x1A8) )
  {
    v28 = v26[TlsIndex];
    v29 = *(_DWORD **)(v27 + 0x1A4);
    *v29 = "Et";
    v27 = __rdtsc();
    v29[1] = v27;
    *(_DWORD *)(v28 + 0x1A4) = v29 + 3;
  }
  return v27;
}
