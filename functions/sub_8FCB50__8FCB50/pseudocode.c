int __cdecl sub_8FCB50(int *a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // edi
  __m128 *v10; // eax
  __m128 v11; // xmm1
  __m128 v12; // xmm2
  __m128 v13; // xmm3
  __m128 v14; // xmm4
  __m128 *v15; // ecx
  __m128 *v16; // esi
  int v17; // edx
  double v18; // st7
  __m128 v19; // xmm0
  __m128 v20; // xmm0
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // esi
  _DWORD *v24; // ecx
  int v26; // [esp+Ch] [ebp-34h]
  __m128 v27; // [esp+10h] [ebp-30h] BYREF
  char v28[16]; // [esp+20h] [ebp-20h] BYREF
  __m128 v29; // [esp+30h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtSphereCapsule";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a2;
  v10 = a2[2];
  v11 = *v10;
  v12 = v10[1];
  v13 = v10[2];
  v14 = v10[3];
  v26 = *a1;
  v15 = *a2 + 1;
  v16 = (__m128 *)(a1[2] + 0x30);
  v17 = 2;
  do
  {
    *(__m128 *)((char *)v15 + v28 - (char *)&v9[1]) = _mm_add_ps(
                                                        _mm_add_ps(
                                                          _mm_mul_ps(v11, _mm_shuffle_ps(*v15, *v15, 0)),
                                                          _mm_mul_ps(v12, _mm_shuffle_ps(*v15, *v15, 0x55))),
                                                        _mm_add_ps(
                                                          _mm_mul_ps(v13, _mm_shuffle_ps(*v15, *v15, 0xAA)),
                                                          v14));
    ++v15;
    --v17;
  }
  while ( v17 );
  sub_8D1CD0(v16, (__m128 *)v28, &v29, &v27);
  v18 = v9->m128_f32[3] + *(float *)(v26 + 0xC);
  v19 = _mm_sub_ps(v27, *v16);
  v20 = _mm_mul_ps(v19, v19);
  if ( (float)(_mm_shuffle_ps(v20, v20, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v20, v20, 0x55).m128_f32[0] + v20.m128_f32[0])) < v18 * v18 )
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  v21 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v22) = v21[TlsIndex];
  if ( *(_DWORD *)(v22 + 0x1A4) < *(_DWORD *)(v22 + 0x1A8) )
  {
    v23 = v21[TlsIndex];
    v24 = *(_DWORD **)(v22 + 0x1A4);
    *v24 = "Et";
    v22 = __rdtsc();
    v24[1] = v22;
    *(_DWORD *)(v23 + 0x1A4) = v24 + 3;
  }
  return v22;
}
