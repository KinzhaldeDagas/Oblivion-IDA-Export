int __cdecl sub_8FBE30(int *a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // esi
  __m128 *v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128 v14; // xmm4
  __m128 v15; // xmm1
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  int v18; // esi
  _DWORD *v19; // ecx
  int v21; // [esp+Ch] [ebp-44h]
  float v22[4]; // [esp+10h] [ebp-40h] BYREF
  __m128 v23; // [esp+20h] [ebp-30h] BYREF
  __m128 v24; // [esp+30h] [ebp-20h] BYREF
  float v25; // [esp+40h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtSphereTri";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a2;
  v21 = *a1;
  sub_8D1DB0(*a2 + 1, v22);
  v10 = a2[2];
  v11 = v10[2];
  v12 = v10[1];
  v13 = _mm_sub_ps(*(__m128 *)(a1[2] + 0x30), v10[3]);
  v14 = _mm_shuffle_ps(v11, v11, 0x44);
  v15 = _mm_shuffle_ps(*v10, v12, 0x44);
  v23 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v15, v14, 0x88), _mm_shuffle_ps(v13, v13, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v15, v14, 0xDD), _mm_shuffle_ps(v13, v13, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*v10, v12, 0xEE), _mm_shuffle_ps(v11, v11, 0xEE), 0x88),
            _mm_shuffle_ps(v13, v13, 0xAA)));
  sub_8D20C0(&v23, v9 + 1, (int)v22, &v24);
  if ( v9->m128_f32[3] + *(float *)(v21 + 0xC) > v25 )
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  v16 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v17) = v16[TlsIndex];
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
  {
    v18 = v16[TlsIndex];
    v19 = *(_DWORD **)(v17 + 0x1A4);
    *v19 = "Et";
    v17 = __rdtsc();
    v19[1] = v17;
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
  }
  return v17;
}
