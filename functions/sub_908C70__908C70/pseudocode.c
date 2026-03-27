int __thiscall sub_908C70(__m128 *this, _DWORD *a2, int *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // eax
  int v8; // edi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  __int32 v15; // esi
  int v16; // eax
  __int32 v17; // ebx
  int v18; // ecx
  int i; // edi
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  _DWORD v27[4]; // [esp+1Ch] [ebp-220h] BYREF
  _BYTE v28[524]; // [esp+2Ch] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) )
  {
    v8 = ThreadLocalStoragePointer[TlsIndex];
    v9 = *(_DWORD **)(v7 + 0x1A4);
    *v9 = "LtBvTree";
    v9[3] = "QueryTree";
    v10 = __rdtsc();
    v9[1] = v10;
    *(_DWORD *)(v8 + 0x1A4) = v9 + 4;
  }
  sub_9069E0(this, a2, (int)a3, a4);
  v11 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) )
  {
    v12 = ThreadLocalStoragePointer[TlsIndex];
    v13 = *(_DWORD **)(v11 + 0x1A4);
    *v13 = "StNarrowPhase";
    v14 = __rdtsc();
    v13[1] = v14;
    *(_DWORD *)(v12 + 0x1A4) = v13 + 3;
  }
  v15 = this->m128_i32[3];
  v16 = a3[2];
  v17 = v15 + 0xC * *((_DWORD *)this + 4);
  v18 = *a3;
  v27[3] = a3;
  v27[2] = v16;
  for ( i = *(_DWORD *)(v18 + 0xC); v15 != v17; v15 += 0xC )
  {
    v20 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)i + 0x28))(i, *(_DWORD *)v15, v28);
    v21 = *(_DWORD *)v15;
    v27[0] = v20;
    v27[1] = v21;
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, int))(**(_DWORD **)(v15 + 8) + 0xC))(
      *(_DWORD *)(v15 + 8),
      a2,
      v27,
      a4,
      a5);
  }
  v22 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v23) = v22[TlsIndex];
  if ( *(_DWORD *)(v23 + 0x1A4) < *(_DWORD *)(v23 + 0x1A8) )
  {
    v24 = v22[TlsIndex];
    v25 = *(_DWORD **)(v23 + 0x1A4);
    *v25 = "lt";
    v23 = __rdtsc();
    v25[1] = v23;
    *(_DWORD *)(v24 + 0x1A4) = v25 + 3;
  }
  return v23;
}
