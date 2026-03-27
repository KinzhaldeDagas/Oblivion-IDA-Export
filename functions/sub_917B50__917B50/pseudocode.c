int __thiscall sub_917B50(__m128 *this, _BYTE *a2, __m128 *a3, __m128 *a4)
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
  __m128 v14; // xmm7
  __m128 v15; // xmm2
  __m128 v16; // xmm5
  int v17; // ecx
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm5
  __m128 v21; // xmm6
  __m128 v22; // xmm0
  __m128 v23; // xmm1
  __m128 v24; // xmm2
  __m128 v25; // xmm0
  __m128 v26; // xmm4
  __m128 v27; // xmm1
  unsigned __int64 v28; // rax
  _DWORD *v29; // ecx
  int v30; // eax
  int v31; // esi
  _DWORD *v32; // ecx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  int v36; // [esp+18h] [ebp-48h] BYREF
  int v37; // [esp+1Ch] [ebp-44h]
  __m128 v38; // [esp+20h] [ebp-40h] BYREF
  _OWORD v39[3]; // [esp+30h] [ebp-30h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcConvTransl";
    v9 = __rdtsc();
    v37 = v9;
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *(this + 4);
  v11 = *(this + 3);
  v12 = _mm_sub_ps(*a3, *(this + 5));
  v13 = _mm_shuffle_ps(v10, v10, 0x44);
  v14 = _mm_shuffle_ps(v10, v10, 0xEE);
  v15 = _mm_shuffle_ps(*(this + 2), v11, 0xEE);
  v16 = _mm_shuffle_ps(*(this + 2), v11, 0x44);
  qmemcpy(v39, a3, sizeof(v39));
  v17 = *((_DWORD *)this + 4);
  v18 = *(this + 4);
  v19 = _mm_add_ps(
          _mm_mul_ps(_mm_shuffle_ps(v16, v13, 0x88), _mm_shuffle_ps(v12, v12, 0)),
          _mm_mul_ps(_mm_shuffle_ps(v16, v13, 0xDD), _mm_shuffle_ps(v12, v12, 0x55)));
  v20 = *(this + 3);
  v21 = _mm_shuffle_ps(v12, v12, 0xAA);
  v22 = a3[1];
  v23 = _mm_add_ps(v19, _mm_mul_ps(_mm_shuffle_ps(v15, v14, 0x88), v21));
  v24 = *(this + 2);
  v39[0] = v23;
  v25 = _mm_sub_ps(v22, *(this + 5));
  v26 = _mm_shuffle_ps(v18, v18, 0x44);
  v27 = _mm_shuffle_ps(v24, v20, 0x44);
  v39[1] = _mm_add_ps(
             _mm_add_ps(
               _mm_mul_ps(_mm_shuffle_ps(v27, v26, 0x88), _mm_shuffle_ps(v25, v25, 0)),
               _mm_mul_ps(_mm_shuffle_ps(v27, v26, 0xDD), _mm_shuffle_ps(v25, v25, 0x55))),
             _mm_mul_ps(
               _mm_shuffle_ps(_mm_shuffle_ps(v24, v20, 0xEE), _mm_shuffle_ps(v18, v18, 0xEE), 0x88),
               _mm_shuffle_ps(v25, v25, 0xAA)));
  (*(void (__thiscall **)(int, int *, _OWORD *, __m128 *))(*(_DWORD *)v17 + 0x14))(v17, &v36, v39, a4);
  if ( (_BYTE)v36 )
  {
    LODWORD(v28) = a4->m128_i32[1];
    v38.m128_i32[0] = a4->m128_i32[0];
    HIDWORD(v28) = a4->m128_i32[2];
    *(unsigned __int64 *)((char *)v38.m128_u64 + 4) = v28;
    v38.m128_i32[3] = a4->m128_i32[3];
    sub_88FE00(a4, this + 2, &v38);
  }
  v29 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v30 = v29[TlsIndex];
  if ( *(_DWORD *)(v30 + 0x1A4) >= *(_DWORD *)(v30 + 0x1A8) )
  {
    LODWORD(v34) = a2;
  }
  else
  {
    v31 = v29[TlsIndex];
    v32 = *(_DWORD **)(v30 + 0x1A4);
    *v32 = "Et";
    v33 = __rdtsc();
    v37 = v33;
    v34 = __PAIR64__(v33, (unsigned int)a2);
    v32[1] = HIDWORD(v34);
    *(_DWORD *)(v31 + 0x1A4) = v32 + 3;
  }
  *a2 = v36;
  return v34;
}
