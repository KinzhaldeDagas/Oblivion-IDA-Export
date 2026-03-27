int __thiscall sub_909AD0(_DWORD *this, int *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // ecx
  int v13; // esi
  __m128 *v14; // edi
  unsigned __int64 v15; // rax
  int v16; // edi
  _DWORD *v17; // ecx
  int v19; // [esp+18h] [ebp-D8h]
  int v20; // [esp+1Ch] [ebp-D4h]
  _DWORD v21[4]; // [esp+20h] [ebp-D0h] BYREF
  _WORD v22[6]; // [esp+30h] [ebp-C0h] BYREF
  __int32 v23; // [esp+3Ch] [ebp-B4h]
  __m128 v24[11]; // [esp+40h] [ebp-B0h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "TtMultiSphere";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
  }
  v19 = *a2;
  sub_903FA0((char *)v24, (_OWORD *)a2[2]);
  sub_8ED410(v22, 0);
  v12 = *(this + 3);
  v13 = *(this + 4) - 1;
  v21[3] = a2;
  v21[2] = v24;
  v20 = v12;
  if ( v13 >= 0 )
  {
    v14 = (__m128 *)(v19 + 0x10 * (v13 + 1));
    do
    {
      v24[3] = _mm_add_ps(
                 *(__m128 *)(a2[2] + 0x30),
                 _mm_add_ps(
                   _mm_add_ps(
                     _mm_mul_ps(v24[0], _mm_shuffle_ps(*v14, *v14, 0)),
                     _mm_mul_ps(v24[1], _mm_shuffle_ps(*v14, *v14, 0x55))),
                   _mm_mul_ps(v24[2], _mm_shuffle_ps(*v14, *v14, 0xAA))));
      v23 = v14->m128_i32[3];
      v21[0] = v22;
      v21[1] = v13;
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int, int))(**(_DWORD **)(v20 + 4) + 0x10))(
        *(_DWORD *)(v20 + 4),
        v21,
        a3,
        a4,
        a5,
        a6);
      --v13;
      v14 += 0xFFFFFFFF;
    }
    while ( v13 >= 0 );
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v15) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[TlsIndex];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v15 = __rdtsc();
    v17[1] = v15;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v15;
}
