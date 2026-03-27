int __thiscall sub_9044F0(_DWORD *this, __m128 **a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __int32 v11; // edi
  int v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // ebx
  _DWORD *v15; // ecx
  _DWORD v18[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v19[4]; // [esp+30h] [ebp-40h] BYREF

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
  v10 = *a2;
  sub_8B1F70(v19, a2[2], *a2 + 2);
  v18[3] = a2;
  v18[2] = v19;
  v11 = v10->m128_i32[3];
  v18[1] = a2[1];
  v12 = *(this + 3);
  v18[0] = v11;
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v12 + 0xC))(v12, v18, a3, a4, a5);
  LODWORD(v13) = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v13 + 0x1A4) < *(_DWORD *)(v13 + 0x1A8) )
  {
    v14 = ThreadLocalStoragePointer[TlsIndex];
    v15 = *(_DWORD **)(v13 + 0x1A4);
    *v15 = "Et";
    v13 = __rdtsc();
    v15[1] = v13;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return v13;
}
