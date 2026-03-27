int __thiscall sub_8E8ED0(__m128 *this, __m128 *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 v10; // xmm3
  __m128 v11; // xmm5
  __m128 v12; // xmm0
  __m128 v13; // xmm4
  __m128 v14; // xmm2
  __m128 v15; // xmm5
  __m128 v16; // xmm1
  __m128 v17; // xmm5
  __m128 v18; // xmm6
  __m128 v19; // xmm0
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 *v22; // ecx
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __int32 v25; // ecx
  _DWORD *v26; // ecx
  unsigned __int64 v27; // rax
  int v28; // esi
  _DWORD *v29; // ecx
  _DWORD v31[4]; // [esp+10h] [ebp-80h] BYREF
  _OWORD v32[3]; // [esp+20h] [ebp-70h] BYREF
  __m128 v33[4]; // [esp+50h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcTransform";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *(this + 4);
  v11 = *(this + 3);
  v12 = _mm_sub_ps(*a2, *(this + 5));
  v13 = _mm_shuffle_ps(v10, v10, 0x44);
  v14 = _mm_shuffle_ps(*(this + 2), v11, 0xEE);
  v15 = _mm_shuffle_ps(*(this + 2), v11, 0x44);
  v16 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v15, v13, 0x88), _mm_shuffle_ps(v12, v12, 0)),
          _mm_mul_ps(_mm_shuffle_ps(v15, v13, 0xDD), _mm_shuffle_ps(v12, v12, 0x55)));
  v17 = *(this + 3);
  v18 = _mm_shuffle_ps(v12, v12, 0xAA);
  v19 = a2[1];
  v20 = _mm_add_ps(v16, _mm_mul_ps(_mm_shuffle_ps(v14, _mm_shuffle_ps(v10, v10, 0xEE), 0x88), v18));
  v21 = *(this + 2);
  qmemcpy(v32, a2, sizeof(v32));
  v22 = *(__m128 **)(a3 + 8);
  v32[0] = v20;
  v23 = _mm_sub_ps(v19, *(this + 5));
  v24 = _mm_shuffle_ps(v21, v17, 0x44);
  v32[1] = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(v24, v13, 0x88), _mm_shuffle_ps(v23, v23, 0)),
               _mm_mul_ps(_mm_shuffle_ps(v24, v13, 0xDD), _mm_shuffle_ps(v23, v23, 0x55))),
             _mm_mul_ps(
               _mm_shuffle_ps(_mm_shuffle_ps(v21, v17, 0xEE), _mm_shuffle_ps(v10, v10, 0xEE), 0x88),
               _mm_shuffle_ps(v23, v23, 0xAA)));
  sub_8B1F70(v33, v22, this + 2);
  v25 = this->m128_i32[3];
  v31[3] = a3;
  v31[2] = v33;
  v31[1] = *(_DWORD *)(a3 + 4);
  v31[0] = v25;
  (*(void (__thiscall **)(__int32, _OWORD *, _DWORD *, int))(*(_DWORD *)v25 + 0x18))(v25, v32, v31, a4);
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
