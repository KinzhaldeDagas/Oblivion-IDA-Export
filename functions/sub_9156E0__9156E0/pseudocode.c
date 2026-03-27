int __thiscall sub_9156E0(int *this, _BYTE *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // edx
  int j; // edi
  int v13; // eax
  int i; // edi
  int v15; // eax
  _DWORD *v16; // ecx
  int v17; // eax
  int v18; // esi
  _DWORD *v19; // ecx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  char v23; // [esp+27h] [ebp-21Dh] BYREF
  int v24; // [esp+28h] [ebp-21Ch]
  char v25; // [esp+2Fh] [ebp-215h] BYREF
  int v26; // [esp+30h] [ebp-214h]
  _BYTE v27[524]; // [esp+34h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcShpCollect";
    v9 = __rdtsc();
    v24 = v9;
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  v10 = *(_DWORD *)(a3 + 0x24);
  v11 = *this;
  LOBYTE(v24) = 0;
  if ( v10 )
  {
    for ( i = (*(int (__thiscall **)(int *))(v11 + 0x20))(this);
          i != 0xFFFFFFFF;
          i = (*(int (__thiscall **)(int *, int))(*this + 0x24))(this, i) )
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, int *, int))(a3 + 0x24))(
                       *(_DWORD *)(a3 + 0x24),
                       &v23,
                       a3,
                       this,
                       i) )
      {
        v15 = (*(int (__thiscall **)(int *, int, _BYTE *))(*this + 0x28))(this, i, v27);
        if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v15 + 0x14))(v15, &v25, a3, a4) )
        {
          LOBYTE(v24) = 1;
          *(_DWORD *)(a4 + 0x10) = i;
        }
      }
    }
  }
  else
  {
    for ( j = (*(int (__thiscall **)(int *))(v11 + 0x20))(this);
          j != 0xFFFFFFFF;
          j = (*(int (__thiscall **)(int *, int))(*this + 0x24))(this, j) )
    {
      v13 = (*(int (__thiscall **)(int *, int, _BYTE *))(*this + 0x28))(this, j, v27);
      if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v13 + 0x14))(v13, &v23, a3, a4) )
      {
        LOBYTE(v24) = 1;
        *(_DWORD *)(a4 + 0x10) = j;
      }
    }
  }
  v16 = NtCurrentTeb()->ThreadLocalStoragePointer;
  v17 = v16[TlsIndex];
  if ( *(_DWORD *)(v17 + 0x1A4) >= *(_DWORD *)(v17 + 0x1A8) )
  {
    LODWORD(v21) = a2;
  }
  else
  {
    v18 = v16[TlsIndex];
    v19 = *(_DWORD **)(v17 + 0x1A4);
    *v19 = "Et";
    v20 = __rdtsc();
    v26 = v20;
    v21 = __PAIR64__(v20, (unsigned int)a2);
    v19[1] = HIDWORD(v21);
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3;
  }
  *a2 = v24;
  return v21;
}
