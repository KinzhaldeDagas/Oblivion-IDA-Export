int __thiscall sub_9046E0(_DWORD **this, __m128 **a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  __m128 *v10; // edi
  __int32 v11; // edi
  int v12; // eax
  bool v13; // cf
  int v14; // ebx
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  _DWORD v19[4]; // [esp+20h] [ebp-50h] BYREF
  __m128 v20[4]; // [esp+30h] [ebp-40h] BYREF

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
  sub_8B1F70(v20, a2[2], *a2 + 2);
  v19[3] = a2;
  v19[2] = v20;
  v11 = v10->m128_i32[3];
  v19[1] = a2[1];
  v12 = ThreadLocalStoragePointer[TlsIndex];
  v13 = *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8);
  v19[0] = v11;
  if ( v13 )
  {
    v14 = v12;
    v15 = *(_DWORD **)(v12 + 0x1A4);
    *v15 = "Et";
    v16 = __rdtsc();
    v15[1] = v16;
    *(_DWORD *)(v14 + 0x1A4) = v15 + 3;
  }
  return (*(int (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(this + 3) + 8))(*(this + 3), v19, a3, a4, a5);
}
