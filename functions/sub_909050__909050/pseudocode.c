int __thiscall sub_909050(__m128 *this, _DWORD *a2, int *a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // esi
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  __int32 v15; // esi
  __int32 v16; // eax
  int v17; // ecx
  int v18; // edx
  int v19; // edi
  int v20; // eax
  int v21; // ecx
  _DWORD *v22; // ecx
  unsigned __int64 v23; // rax
  int v24; // esi
  _DWORD *v25; // ecx
  __int32 i; // [esp+18h] [ebp-224h]
  _DWORD v28[4]; // [esp+1Ch] [ebp-220h] BYREF
  char v29[524]; // [esp+2Ch] [ebp-210h] BYREF

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
  v16 = v15 + 0xC * *((_DWORD *)this + 4);
  v17 = a3[2];
  v18 = *a3;
  v28[3] = a3;
  v28[2] = v17;
  v19 = *(_DWORD *)(v18 + 0xC);
  for ( i = v16; v15 != i; v15 += 0xC )
  {
    v20 = (*(int (__thiscall **)(int, _DWORD, char *))(*(_DWORD *)v19 + 0x28))(v19, *(_DWORD *)v15, v29);
    v21 = *(_DWORD *)v15;
    v28[0] = v20;
    v28[1] = v21;
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int, int))(**(_DWORD **)(v15 + 8) + 8))(
      *(_DWORD *)(v15 + 8),
      a2,
      v28,
      a4,
      a5);
    if ( *(_BYTE *)(a5 + 4) )
      break;
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
