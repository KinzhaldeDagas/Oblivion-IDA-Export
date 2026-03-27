int __cdecl sub_952B90(
        int *a1,
        int *a2,
        __m128 *a3,
        unsigned int a4,
        _OWORD *a5,
        __int128 *a6,
        int a7,
        _DWORD *a8,
        __m128 *a9)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  signed int v14; // ecx
  _DWORD *v15; // edx
  int v16; // eax
  int v17; // edi
  _DWORD *v18; // esi
  unsigned __int64 v19; // rax
  float v21[28]; // [esp+10h] [ebp-70h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v10 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
  {
    v11 = ThreadLocalStoragePointer[TlsIndex];
    v12 = *(_DWORD **)(v10 + 0x1A4);
    *v12 = "TtPenetration";
    v13 = __rdtsc();
    v12[1] = v13;
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
  }
  sub_951C80(v21, (int)a1, (int)a2, a3, a4, (int)a5, (int)a6, a7, (int)a8);
  v14 = sub_952A00(v21, a9);
  if ( v14 == 3 )
  {
    sub_959750(a1, a2, a3, a5, a6, (int)a9);
    *a8 = 1;
    v14 = 1;
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v16 = v15[TlsIndex];
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = v15[TlsIndex];
    v18 = *(_DWORD **)(v16 + 0x1A4);
    *v18 = "Et";
    v19 = __rdtsc();
    v18[1] = v19;
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
  }
  return v14;
}
