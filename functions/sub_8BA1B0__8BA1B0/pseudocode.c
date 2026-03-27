int __thiscall sub_8BA1B0(_DWORD *this, int *a2, __int128 *a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // edi
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int v12; // edx
  __int128 v13; // xmm0
  int v14; // edx
  unsigned __int64 v15; // rax
  int v16; // esi
  _DWORD *v17; // ecx
  __int128 v19; // [esp+10h] [ebp-20h] BYREF
  int v20; // [esp+20h] [ebp-10h]
  __int128 *v21; // [esp+24h] [ebp-Ch]
  int v22; // [esp+28h] [ebp-8h]
  int v23; // [esp+2Ch] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v7 = TlsIndex;
  v8 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) )
  {
    v9 = ThreadLocalStoragePointer[TlsIndex];
    v10 = *(_DWORD **)(v8 + 0x1A4);
    *v10 = "TtRayCstCached";
    v11 = __rdtsc();
    v10[1] = v11;
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3;
    v7 = TlsIndex;
  }
  *(this + 1) = a3;
  *(this + 3) = a6;
  *(this + 4) = 0;
  if ( a4 )
    v12 = a4 + 0x14;
  else
    v12 = 0;
  *(this + 2) = v12;
  if ( *((_BYTE *)a3 + 0x20) )
  {
    if ( a4 )
      *(this + 0x11) = a4 + 0x10;
    else
      *(this + 0x11) = 0;
  }
  else
  {
    *(this + 0x11) = 0;
  }
  v13 = *a3;
  v21 = a3 + 1;
  v23 = a5;
  v14 = *a2;
  v20 = 1;
  v22 = 0x10;
  v19 = v13;
  (*(void (__thiscall **)(int *, __int128 *, _DWORD *, _DWORD))(v14 + 0x38))(a2, &v19, this, 0);
  LODWORD(v15) = ThreadLocalStoragePointer[v7];
  if ( *(_DWORD *)(v15 + 0x1A4) < *(_DWORD *)(v15 + 0x1A8) )
  {
    v16 = ThreadLocalStoragePointer[v7];
    v17 = *(_DWORD **)(v15 + 0x1A4);
    *v17 = "Et";
    v15 = __rdtsc();
    v17[1] = v15;
    *(_DWORD *)(v16 + 0x1A4) = v17 + 3;
  }
  return v15;
}
