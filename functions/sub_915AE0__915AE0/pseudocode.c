int __thiscall sub_915AE0(void *this, int a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // ecx
  unsigned __int64 v9; // rax
  int j; // edi
  int v11; // eax
  int v12; // edx
  int i; // edi
  int v14; // eax
  _DWORD *v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  int v20; // [esp+2Ch] [ebp-224h] BYREF
  int v21; // [esp+30h] [ebp-220h] BYREF
  int v22; // [esp+34h] [ebp-21Ch]
  int v23; // [esp+38h] [ebp-218h]
  int v24; // [esp+3Ch] [ebp-214h]
  _BYTE v25[524]; // [esp+40h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v6 = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) )
  {
    v7 = ThreadLocalStoragePointer[TlsIndex];
    v8 = *(_DWORD **)(v6 + 0x1A4);
    *v8 = "TtrcShpCollect";
    v9 = __rdtsc();
    v8[1] = v9;
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3;
  }
  if ( *(_DWORD *)(a2 + 0x24) )
  {
    for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this);
          i != 0xFFFFFFFF;
          i = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, i) )
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, void *, int))(a2 + 0x24))(
                       *(_DWORD *)(a2 + 0x24),
                       (char *)&v20 + 3,
                       a2,
                       this,
                       i) )
      {
        v14 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, i, v25);
        v24 = a3;
        v23 = *(_DWORD *)(a3 + 8);
        v21 = v14;
        v22 = i;
        (*(void (__thiscall **)(int, int, int *, int))(*(_DWORD *)v14 + 0x18))(v14, a2, &v21, a4);
      }
    }
  }
  else
  {
    for ( j = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this);
          j != 0xFFFFFFFF;
          j = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, j) )
    {
      v11 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, j, v25);
      v12 = *(_DWORD *)(a3 + 8);
      v24 = a3;
      v23 = v12;
      v21 = v11;
      v22 = j;
      (*(void (__thiscall **)(int, int, int *, int))(*(_DWORD *)v11 + 0x18))(v11, a2, &v21, a4);
    }
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer;
  LODWORD(v16) = v15[TlsIndex];
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) )
  {
    v17 = v15[TlsIndex];
    v18 = *(_DWORD **)(v16 + 0x1A4);
    *v18 = "Et";
    v16 = __rdtsc();
    v18[1] = v16;
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3;
  }
  return v16;
}
