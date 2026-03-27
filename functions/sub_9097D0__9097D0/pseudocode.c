int __thiscall sub_9097D0(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+10h] [ebp-D4h]
  _DWORD v21[4]; // [esp+14h] [ebp-D0h] BYREF
  _WORD v22[6]; // [esp+24h] [ebp-C0h] BYREF
  int v23; // [esp+30h] [ebp-B4h]
  __m128 v24[11]; // [esp+34h] [ebp-B0h] BYREF

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
  v20 = *a2;
  sub_903FA0((char *)v24, (_OWORD *)a2[2]);
  sub_8ED410(v22, 0);
  v11 = *(this + 3);
  v12 = *(this + 4) - 1;
  v21[3] = a2;
  for ( v21[2] = v24; v12 >= 0; --v12 )
  {
    v13 = 0x10 * (*(_DWORD *)v11 + 1);
    v24[3] = _mm_add_ps(
               *(__m128 *)(a2[2] + 0x30),
               _mm_add_ps(
                 _mm_add_ps(
                   _mm_mul_ps(v24[0], _mm_shuffle_ps(*(__m128 *)(v13 + v20), *(__m128 *)(v13 + v20), 0)),
                   _mm_mul_ps(v24[1], _mm_shuffle_ps(*(__m128 *)(v13 + v20), *(__m128 *)(v13 + v20), 0x55))),
                 _mm_mul_ps(v24[2], _mm_shuffle_ps(*(__m128 *)(v13 + v20), *(__m128 *)(v13 + v20), 0xAA))));
    v14 = *(_DWORD *)(v20 + v13 + 0xC);
    v21[0] = v22;
    v23 = v14;
    v21[1] = v12;
    (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v11 + 4) + 0xC))(
      *(_DWORD *)(v11 + 4),
      v21,
      a3,
      a4,
      a5);
    v11 += 8;
  }
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
