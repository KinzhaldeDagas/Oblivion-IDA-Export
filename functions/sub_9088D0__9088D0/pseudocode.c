int __thiscall sub_9088D0(__m128 *this, __m128 **a2, int *a3, __m128 *a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // ecx
  unsigned __int64 v11; // rax
  int v12; // eax
  int v13; // esi
  _DWORD *v14; // ecx
  unsigned __int64 v15; // rax
  __int32 v16; // esi
  int v17; // eax
  __int32 v18; // ebx
  int v19; // ecx
  int i; // edi
  int v21; // eax
  int v22; // ecx
  _DWORD *v23; // ecx
  unsigned __int64 v24; // rax
  int v25; // esi
  _DWORD *v26; // ecx
  _DWORD v28[4]; // [esp+20h] [ebp-220h] BYREF
  char v29[524]; // [esp+30h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "LtBvTree";
    v10[3] = "QueryTree";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 4;
  }
  sub_9072C0(this, a2, a3, a4);
  v12 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) )
  {
    v13 = ThreadLocalStoragePointer[TlsIndex];
    v14 = *(_DWORD **)(v12 + 0x1A4);
    *v14 = "StNarrowPhase";
    v15 = __rdtsc();
    v14[1] = v15;
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3;
  }
  v16 = this->m128_i32[3];
  v17 = a3[2];
  v18 = v16 + 0xC * *((_DWORD *)this + 4);
  v19 = *a3;
  v28[3] = a3;
  v28[2] = v17;
  for ( i = *(_DWORD *)(v19 + 0xC); v16 != v18; v16 += 0xC )
  {
    v21 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)i + 0x28))(i, *(_DWORD *)v16, v29);
    v22 = *(_DWORD *)v16;
    v28[0] = v21;
    v28[1] = v22;
    (*(void (__thiscall **)(_DWORD, __m128 **, _DWORD *, __m128 *, int, int))(**(_DWORD **)(v16 + 8) + 0x10))(
      *(_DWORD *)(v16 + 8),
      a2,
      v28,
      a4,
      a5,
      a6);
  }
  v23 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v24) = v23[TlsIndex];
  if ( *(_DWORD *)(v24 + 0x1A4) < *(_DWORD *)(v24 + 0x1A8) )
  {
    v25 = v23[TlsIndex];
    v26 = *(_DWORD **)(v24 + 0x1A4);
    *v26 = "lt";
    v24 = __rdtsc();
    v26[1] = v24;
    *(_DWORD *)(v25 + 0x1A4) = v26 + 3;
  }
  return v24;
}
