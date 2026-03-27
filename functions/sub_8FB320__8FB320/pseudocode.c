int __cdecl sub_8FB320(int *a1, __m128 **a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v5; // eax
  int v6; // esi
  _DWORD *v7; // ecx
  unsigned __int64 v8; // rax
  __m128 *v9; // ebx
  __m128 *v10; // esi
  double v11; // st7
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+18h] [ebp-18h]
  __m128 v21; // [esp+20h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v6 = ThreadLocalStoragePointer[TlsIndex];
    v7 = *(_DWORD **)(v5 + 0x1A4);
    *v7 = "TtSphereBox";
    v8 = __rdtsc();
    v7[1] = v8;
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3;
  }
  v9 = *a2;
  v10 = (__m128 *)(a1[2] + 0x30);
  v20 = *a1;
  sub_88FD10(&v21, a2[2], v10);
  v11 = v9->m128_f32[3] + *(float *)(v20 + 0xC);
  v12 = _mm_xor_ps(_mm_min_ps(_mm_and_ps(v21, (__m128)xmmword_A372D0), v9[1]), _mm_and_ps(v21, (__m128)xmmword_A965C0));
  v13 = _mm_sub_ps(
          _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(*a2[2], _mm_shuffle_ps(v12, v12, 0)),
              _mm_mul_ps(a2[2][1], _mm_shuffle_ps(v12, v12, 0x55))),
            _mm_add_ps(_mm_mul_ps(a2[2][2], _mm_shuffle_ps(v12, v12, 0xAA)), a2[2][3])),
          *v10);
  v14 = _mm_mul_ps(v13, v13);
  if ( (float)(_mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]
             + (float)(_mm_shuffle_ps(v14, v14, 0x55).m128_f32[0] + v14.m128_f32[0])) < v11 * v11 )
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a4 + 4))(a4, a1, a2);
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v16) = v15[TlsIndex];
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = v15[TlsIndex];
    v18 = *(_DWORD **)(v16 + 0x1A4);
    *v18 = "Et";
    v16 = __rdtsc();
    v18[1] = v16;
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
  }
  return v16;
}
