int __cdecl sub_8F98C0(__m128 **a1, __m128 **a2, int a3, int *a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edi
  __m128 *v10; // ebx
  __m128 *v11; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm2
  __m128 v14; // xmm3
  __m128 v15; // xmm4
  __m128 *v16; // ecx
  int v17; // edx
  __m128 *v18; // ecx
  __m128 v19; // xmm1
  __m128 v20; // xmm2
  __m128 v21; // xmm3
  __m128 v22; // xmm4
  __m128 *v23; // eax
  int v24; // edx
  __int128 v25; // xmm0
  int v26; // edx
  _DWORD *v27; // ecx
  unsigned __int64 v28; // rax
  int v29; // esi
  _DWORD *v30; // ecx
  int v32[5]; // [esp+1Ch] [ebp-F4h] BYREF
  _OWORD v33[2]; // [esp+30h] [ebp-E0h] BYREF
  __m128 **v34; // [esp+50h] [ebp-C0h]
  int v35; // [esp+54h] [ebp-BCh]
  __m128 v36; // [esp+60h] [ebp-B0h] BYREF
  __int128 v37; // [esp+70h] [ebp-A0h]
  __int128 v38; // [esp+80h] [ebp-90h]
  __int128 v39; // [esp+90h] [ebp-80h]
  __m128 v40[2]; // [esp+C0h] [ebp-50h] BYREF
  __m128 v41[3]; // [esp+E0h] [ebp-30h] BYREF

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
  sub_8D1EF0(*a2 + 1, (float *)v32);
  v9 = *a1;
  v10 = *a2;
  v34 = a1;
  v11 = a1[2];
  v35 = (int)a2;
  v12 = *v11;
  v13 = v11[1];
  v14 = v11[2];
  v15 = v11[3];
  v16 = v9 + 1;
  v17 = 2;
  do
  {
    *(__m128 *)((char *)v16 + (char *)v40 - (char *)&v9[1]) = _mm_add_ps(
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v12, _mm_shuffle_ps(*v16, *v16, 0)),
                                                                  _mm_mul_ps(v13, _mm_shuffle_ps(*v16, *v16, 0x55))),
                                                                _mm_add_ps(
                                                                  _mm_mul_ps(v14, _mm_shuffle_ps(*v16, *v16, 0xAA)),
                                                                  v15));
    ++v16;
    --v17;
  }
  while ( v17 );
  v18 = a2[2];
  v19 = *v18;
  v20 = v18[1];
  v21 = v18[2];
  v22 = v18[3];
  v23 = v10 + 1;
  v24 = 3;
  do
  {
    *(__m128 *)((char *)v23 + (char *)v41 - (char *)&v10[1]) = _mm_add_ps(
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0)),
                                                                   _mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0x55))),
                                                                 _mm_add_ps(
                                                                   _mm_mul_ps(v21, _mm_shuffle_ps(*v23, *v23, 0xAA)),
                                                                   v22));
    ++v23;
    --v24;
  }
  while ( v24 );
  sub_8D0CA0(v40, v9->m128_f32[3], v41, v10->m128_f32[3], (float *)v32, *(float *)(a3 + 8), 0, &v36);
  if ( *((float *)&v37 + 3) >= (double)*((float *)&v39 + 3) )
  {
    if ( *((float *)&v39 + 3) >= (double)*(float *)(a3 + 8) )
      goto LABEL_13;
    v33[0] = v38;
    v25 = v39;
  }
  else
  {
    if ( *((float *)&v37 + 3) >= (double)*(float *)(a3 + 8) )
      goto LABEL_13;
    v33[0] = v36;
    v25 = v37;
  }
  v26 = *a4;
  v33[1] = v25;
  (*(void (__thiscall **)(int *, _OWORD *))(v26 + 4))(a4, v33);
LABEL_13:
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
