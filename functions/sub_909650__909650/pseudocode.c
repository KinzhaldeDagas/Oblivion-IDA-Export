int __thiscall sub_909650(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  __m128 *v13; // ecx
  int v14; // eax
  __m128 v15; // xmm0
  int v16; // ecx
  _DWORD *v17; // ecx
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx
  int v22; // [esp+10h] [ebp-D4h]
  _DWORD v23[4]; // [esp+14h] [ebp-D0h] BYREF
  _WORD v24[6]; // [esp+24h] [ebp-C0h] BYREF
  int v25; // [esp+30h] [ebp-B4h]
  __m128 v26[11]; // [esp+34h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtMultiSphere";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v22 = *a2;
  sub_903FA0((char *)v26, (_OWORD *)a2[2]);
  sub_8ED410(v24, 0);
  v11 = *(this + 3);
  v12 = *(this + 4) - 1;
  v23[3] = a2;
  for ( v23[2] = v26; v12 >= 0; --v12 )
  {
    v13 = (__m128 *)a2[2];
    v14 = 0x10 * (*(_DWORD *)v11 + 1);
    v15 = _mm_add_ps(
            _mm_add_ps(
              _mm_mul_ps(v26[0], _mm_shuffle_ps(*(__m128 *)(v14 + v22), *(__m128 *)(v14 + v22), 0)),
              _mm_mul_ps(v26[1], _mm_shuffle_ps(*(__m128 *)(v14 + v22), *(__m128 *)(v14 + v22), 0x55))),
            _mm_mul_ps(v26[2], _mm_shuffle_ps(*(__m128 *)(v14 + v22), *(__m128 *)(v14 + v22), 0xAA)));
    v26[3] = _mm_add_ps(v13[3], v15);
    v26[4] = _mm_add_ps(v13[4], v15);
    v26[5] = _mm_add_ps(v13[5], v15);
    v16 = *(_DWORD *)(v22 + v14 + 0xC);
    v23[0] = v24;
    v25 = v16;
    v23[1] = v12;
    (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v11 + 4) + 0x14))(
      *(_DWORD *)(v11 + 4),
      v23,
      a3,
      a4,
      a5);
    v11 += 8;
  }
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
