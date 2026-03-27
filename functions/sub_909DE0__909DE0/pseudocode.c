int __thiscall sub_909DE0(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // esi
  int v12; // edi
  int v13; // eax
  unsigned __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // ecx
  int v18; // [esp+10h] [ebp-D4h]
  _DWORD v19[4]; // [esp+14h] [ebp-D0h] BYREF
  _WORD v20[6]; // [esp+24h] [ebp-C0h] BYREF
  int v21; // [esp+30h] [ebp-B4h]
  __m128 v22[11]; // [esp+34h] [ebp-B0h] BYREF

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
  v18 = *a2;
  sub_903FA0((char *)v22, (_OWORD *)a2[2]);
  sub_8ED410(v20, 0);
  v19[3] = a2;
  v11 = *(this + 3);
  v12 = *(this + 4) - 1;
  v19[2] = v22;
  if ( v12 >= 0 )
  {
    do
    {
      v13 = 0x10 * (*(_DWORD *)v11 + 1);
      v22[3] = _mm_add_ps(
                 *(__m128 *)(a2[2] + 0x30),
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v22[0], _mm_shuffle_ps(*(__m128 *)(v13 + v18), *(__m128 *)(v13 + v18), 0)),
                     _mm_mul_ps(v22[1], _mm_shuffle_ps(*(__m128 *)(v13 + v18), *(__m128 *)(v13 + v18), 0x55))),
                   _mm_mul_ps(v22[2], _mm_shuffle_ps(*(__m128 *)(v13 + v18), *(__m128 *)(v13 + v18), 0xAA))));
      v21 = *(_DWORD *)(v18 + v13 + 0xC);
      v19[0] = v20;
      v19[1] = v12;
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v11 + 4) + 8))(
        *(_DWORD *)(v11 + 4),
        v19,
        a3,
        a4,
        a5);
      if ( *(_BYTE *)(a5 + 4) )
        break;
      v11 += 8;
      --v12;
    }
    while ( v12 >= 0 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v14) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = ThreadLocalStoragePointer[TlsIndex];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "Et";
    v14 = __rdtsc();
    v16[1] = v14;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  return v14;
}
