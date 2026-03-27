int __thiscall sub_92B330(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // esi
  _DWORD *v14; // ecx
  _DWORD v16[4]; // [esp+10h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v5 = TlsIndex;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcBvShape";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v16[2] = *(_DWORD *)(a3 + 8);
  v10 = *(this + 4);
  v16[3] = a3;
  v11 = *(_DWORD *)(a3 + 4);
  v16[0] = v10;
  v16[1] = v11;
  (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v10 + 0x18))(v10, a2, v16, a4);
  LODWORD(v12) = ThreadLocalStoragePointer[v5];
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) )
  {
    v13 = ThreadLocalStoragePointer[v5];
    v14 = *(_DWORD **)(v12 + 0x1A4);
    *v14 = "Et";
    v12 = __rdtsc();
    v14[1] = v12;
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3;
  }
  return v12;
}
