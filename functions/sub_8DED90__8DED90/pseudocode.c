int __thiscall sub_8DED90(float *this, int a2, float *a3)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v4; // edi
  int v5; // eax
  int v7; // ebx
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v14; // eax
  int v15; // ebx
  _DWORD *v16; // ecx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // esi
  _DWORD *v20; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v4 = TlsIndex;
  v5 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v5 + 0x1A4);
    *v8 = "LtMaint";
    v8[3] = "Split";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 4;
  }
  sub_8CCC90(a2);
  if ( *a3 >= (double)*(this + 3) )
  {
    v10 = ThreadLocalStoragePointer[v4];
    if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) )
    {
      v11 = ThreadLocalStoragePointer[v4];
      v12 = *(_DWORD **)(v10 + 0x1A4);
      *v12 = "StResetTime";
      v13 = __rdtsc();
      v12[1] = v13;
      *(_DWORD *)(v11 + 0x1A4) = v12 + 3;
    }
    sub_8DEC30(this, a2, a3);
  }
  v14 = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) )
  {
    v15 = ThreadLocalStoragePointer[v4];
    v16 = *(_DWORD **)(v14 + 0x1A4);
    *v16 = "StCheckDeact";
    v17 = __rdtsc();
    v16[1] = v17;
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3;
  }
  sub_8DED40(a2, *(float *)&a3);
  LODWORD(v18) = ThreadLocalStoragePointer[v4];
  if ( *(_DWORD *)(v18 + 0x1A4) < *(_DWORD *)(v18 + 0x1A8) )
  {
    v19 = ThreadLocalStoragePointer[v4];
    v20 = *(_DWORD **)(v18 + 0x1A4);
    *v20 = "lt";
    v18 = __rdtsc();
    v20[1] = v18;
    *(_DWORD *)(v19 + 0x1A4) = v20 + 3;
  }
  return v18;
}
