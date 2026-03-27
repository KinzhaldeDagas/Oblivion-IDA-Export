int __thiscall sub_904130(_DWORD *this, int a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // edi
  __m128 *v11; // esi
  __m128 v12; // xmm3
  __m128 v13; // xmm5
  __m128 v14; // xmm0
  __m128 v15; // xmm4
  __m128 v16; // xmm1
  __int32 v17; // eax
  int v18; // ecx
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  int v21; // esi
  _DWORD *v22; // ecx
  __m128 *v24; // [esp+18h] [ebp-C8h]
  _DWORD v26[4]; // [esp+20h] [ebp-C0h] BYREF
  __m128 v27[6]; // [esp+30h] [ebp-B0h] BYREF
  __m128 v28; // [esp+90h] [ebp-50h] BYREF
  __m128 v29[3]; // [esp+A0h] [ebp-40h] BYREF
  __int32 v30; // [esp+D0h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtTransform";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v24 = *(__m128 **)a2;
  v10 = *(_DWORD *)a2 + 0x20;
  sub_8B1F70(v27, *(__m128 **)(a2 + 8), (__m128 *)v10);
  v11 = *(__m128 **)(a2 + 8);
  v27[4] = v11[4];
  v27[5] = v11[5];
  sub_889470(&v28, v11 + 6, v24 + 1);
  sub_889470(v29, v11 + 7, v24 + 1);
  v12 = *(__m128 *)(v10 + 0x20);
  v13 = *(__m128 *)(v10 + 0x10);
  v14 = _mm_sub_ps(v11[8], *(__m128 *)(v10 + 0x30));
  v15 = _mm_shuffle_ps(v12, v12, 0x44);
  v16 = _mm_shuffle_ps(*(__m128 *)v10, v13, 0x44);
  v29[1] = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0x88), _mm_shuffle_ps(v14, v14, 0)),
               _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0xDD), _mm_shuffle_ps(v14, v14, 0x55))),
             _mm_mul_ps(
               _mm_shuffle_ps(_mm_shuffle_ps(*(__m128 *)v10, v13, 0xEE), _mm_shuffle_ps(v12, v12, 0xEE), 0x88),
               _mm_shuffle_ps(v14, v14, 0xAA)));
  v29[2] = v11[9];
  v30 = v11[0xA].m128_i32[0];
  v26[3] = a2;
  v26[2] = v27;
  v17 = v24->m128_i32[3];
  v26[1] = *(_DWORD *)(a2 + 4);
  v18 = *(this + 3);
  v26[0] = v17;
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v18 + 0x14))(v18, v26, a3, a4, a5);
  v19 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v20) = v19[TlsIndex];
  if ( *(_DWORD *)(v20 + 0x1A4) < *(_DWORD *)(v20 + 0x1A8) )
  {
    v21 = v19[TlsIndex];
    v22 = *(_DWORD **)(v20 + 0x1A4);
    *v22 = "Et";
    v20 = __rdtsc();
    v22[1] = v20;
    *(_DWORD *)(v21 + 0x1A4) = v22 + 3;
  }
  return v20;
}
