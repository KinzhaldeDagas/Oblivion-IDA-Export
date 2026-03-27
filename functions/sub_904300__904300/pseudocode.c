int __thiscall sub_904300(_DWORD *this, __m128 **a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  __m128 *v11; // edi
  __int32 v12; // edi
  int v13; // ecx
  unsigned __int64 v14; // rax
  int v15; // ebx
  _DWORD *v16; // ecx
  _DWORD v19[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v20[4]; // [esp+30h] [ebp-40h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "TtTransform";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3;
  }
  v11 = *a2;
  sub_8B1F70(v20, a2[2], *a2 + 2);
  v19[3] = a2;
  v19[2] = v20;
  v12 = v11->m128_i32[3];
  v19[1] = a2[1];
  v13 = *(this + 3);
  v19[0] = v12;
  (*(void (__thiscall **)(int, _DWORD *, int, int, int, int))(*(_DWORD *)v13 + 0x10))(v13, v19, a3, a4, a5, a6);
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
