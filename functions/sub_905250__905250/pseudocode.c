int __thiscall sub_905250(_DWORD *this, int *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int v12; // edx
  int v13; // ebx
  int *v14; // esi
  int v15; // eax
  int v16; // edi
  unsigned __int64 v17; // rax
  int v18; // edi
  _DWORD *v19; // ecx
  int v21; // [esp+1Ch] [ebp-228h]
  _DWORD v23[4]; // [esp+24h] [ebp-220h] BYREF
  _BYTE v24[524]; // [esp+34h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = TlsIndex;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "TtShapeCollection";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
  }
  v12 = a2[2];
  v13 = *a2;
  v23[3] = a2;
  v14 = (int *)*(this + 3);
  v15 = *(this + 4) - 1;
  v23[2] = v12;
  if ( v15 >= 0 )
  {
    v21 = v15 + 1;
    do
    {
      v16 = *v14;
      v23[0] = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v13 + 0x28))(v13, *v14, v24);
      v23[1] = v16;
      (*(void (__thiscall **)(int, _DWORD *, int, int, int, int))(*(_DWORD *)v14[1] + 0x10))(
        v14[1],
        v23,
        a3,
        a4,
        a5,
        a6);
      v14 += 2;
      --v21;
    }
    while ( v21 );
    v7 = TlsIndex;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  }
  LODWORD(v17) = ThreadLocalStoragePointer[v7];
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) )
  {
    v18 = ThreadLocalStoragePointer[v7];
    v19 = *(_DWORD **)(v17 + 0x1A4);
    *v19 = "Et";
    v17 = __rdtsc();
    v19[1] = v17;
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
  }
  return v17;
}
