int __thiscall sub_8FBCE0(void *this, int *a2, __m128 **a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // edx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // esi
  unsigned __int64 v9; // rax
  __m128 *v10; // eax
  __m128 v11; // xmm3
  __m128 v12; // xmm5
  __m128 *v13; // esi
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx
  __m128 *v22; // [esp-Ch] [ebp-4Ch]
  int v23; // [esp+Ch] [ebp-34h]
  __m128 v24; // [esp+10h] [ebp-30h] BYREF
  __m128 v25; // [esp+20h] [ebp-20h] BYREF
  float v26; // [esp+30h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtSphereTri";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = a3[2];
  v11 = v10[2];
  v12 = v10[1];
  v13 = *a3;
  v23 = *a2;
  v14 = _mm_sub_ps(*(__m128 *)(a2[2] + 0x30), v10[3]);
  v15 = _mm_shuffle_ps(v11, v11, 0x44);
  v16 = _mm_shuffle_ps(*v10, v12, 0x44);
  v22 = *a3 + 1;
  v24 = _mm_add_ps(
          _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0x88), _mm_shuffle_ps(v14, v14, 0)),
            _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0xDD), _mm_shuffle_ps(v14, v14, 0x55))),
          _mm_mul_ps(
            _mm_shuffle_ps(_mm_shuffle_ps(*v10, v12, 0xEE), _mm_shuffle_ps(v11, v11, 0xEE), 0x88),
            _mm_shuffle_ps(v14, v14, 0xAA)));
  sub_8D20C0(&v24, v22, (int)this + 0x10, &v25);
  if ( v13->m128_f32[3] + *(float *)(v23 + 0xC) > v26 )
    (*(void (__thiscall **)(int, int *, __m128 **))(*(_DWORD *)a5 + 4))(a5, a2, a3);
  v17 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v18) = v17[TlsIndex];
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) )
  {
    v19 = v17[TlsIndex];
    v20 = *(_DWORD **)(v18 + 0x1A4);
    *v20 = "Et";
    v18 = __rdtsc();
    v20[1] = v18;
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3;
  }
  return v18;
}
