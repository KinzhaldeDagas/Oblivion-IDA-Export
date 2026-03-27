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
  v11 = *a3;
  v35 = a2;
  v12 = a2[2];
  v36 = a3;
  v13 = *v12;
  v14 = v12[1];
  v15 = v12[2];
  v16 = v12[3];
  v17 = v10 + 1;
  v18 = 2;
  do
  {
    *(__m128 *)((char *)v17 + (char *)v41 - (char *)&v10[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v13, _mm_shuffle_ps(*v17, *v17, 0)),
                                                                   _mm_mul_ps(v14, _mm_shuffle_ps(*v17, *v17, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v15, _mm_shuffle_ps(*v17, *v17, 0xAA)),
                                                                   v16));
    ++v17;
    --v18;
  }
  while ( v18 );
  v19 = a3[2];
  v20 = *v19;
  v21 = v19[1];
  v22 = v19[2];
  v23 = v19[3];
  v24 = v11 + 1;
  v25 = 3;
  do
  {
    *(__m128 *)((char *)v24 + (char *)v42 - (char *)&v11[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v20, _mm_shuffle_ps(*v24, *v24, 0)),
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v24, *v24, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v22, _mm_shuffle_ps(*v24, *v24, 0xAA)),
                                                                   v23));
    ++v24;
    --v25;
  }
  while ( v25 );
  sub_8D0CA0(v41, v10->m128_f32[3], v42, v11->m128_f32[3], this + 5, *(float *)(a4 + 8), 0, &v37);
  if ( *((float *)&v38 + 3) >= (double)*((float *)&v40 + 3) )
  {
    if ( *((float *)&v40 + 3) >= (double)*(float *)(a4 + 8) )
      goto LABEL_13;
    v34[0] = v39;
    v26 = v40;
  }
  else
  {
    if ( *((float *)&v38 + 3) >= (double)*(float *)(a4 + 8) )
      goto LABEL_13;
    v34[0] = v37;
    v26 = v38;
  }
  v27 = *a5;
  v34[1] = v26;
  (*(void (__thiscall **)(int *, _OWORD *))(v27 + 4))(a5, v34);
LABEL_13:
  v28 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v29) = v28[TlsIndex];
  if ( *(_DWORD *)(v29 + 0x1A4) < *(_DWORD *)(v29 + 0x1A8) )
  {
    v30 = v28[TlsIndex];
    v31 = *(_DWORD **)(v29 + 0x1A4);
    *v31 = "Et";
    v29 = __rdtsc();
    v31[1] = v29;
    *(_DWORD *)(v30 + 0x1A4) = v31 + 3;
  }
  return v29;
}
