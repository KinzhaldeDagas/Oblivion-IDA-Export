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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9156fb*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x915709*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x91571b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91571d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x91571f*/
    *v8 = "TtrcShpCollect"; /*0x915725*/
    v9 = __rdtsc(); /*0x91572b*/
    v24 = v9; /*0x91572d*/
    v8[1] = v9; /*0x915735*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x91573b*/
  }
  v10 = *(_DWORD *)(a3 + 0x24); /*0x915744*/
  v11 = *this; /*0x915749*/
  LOBYTE(v24) = 0; /*0x91574b*/
  if ( v10 ) /*0x915752*/
  {
    for ( i = (*(int (__thiscall **)(int *))(v11 + 0x20))(this); /*0x9157a9*/
          i != 0xFFFFFFFF;
          i = (*(int (__thiscall **)(int *, int))(*this + 0x24))(this, i) )
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, int *, int))(a3 + 0x24))( /*0x9157bf*/
                       *(_DWORD *)(a3 + 0x24),
                       &v23,
                       a3,
                       this,
                       i) )
      {
        v15 = (*(int (__thiscall **)(int *, int, _BYTE *))(*this + 0x28))(this, i, v27); /*0x9157ce*/
        if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v15 + 0x14))(v15, &v25, a3, a4) ) /*0x9157e2*/
        {
          LOBYTE(v24) = 1; /*0x9157ea*/
          *(_DWORD *)(a4 + 0x10) = i; /*0x9157ef*/
        }
      }
    }
  }
  else
  {
    for ( j = (*(int (__thiscall **)(int *))(v11 + 0x20))(this); /*0x91575c*/
          j != 0xFFFFFFFF;
          j = (*(int (__thiscall **)(int *, int))(*this + 0x24))(this, j) )
    {
      v13 = (*(int (__thiscall **)(int *, int, _BYTE *))(*this + 0x28))(this, j, v27); /*0x91576c*/
      if ( *(_BYTE *)(*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)v13 + 0x14))(v13, &v23, a3, a4) ) /*0x915780*/
      {
        LOBYTE(v24) = 1; /*0x915788*/
        *(_DWORD *)(a4 + 0x10) = j; /*0x91578d*/
      }
    }
  }
  v16 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x915801*/
  v17 = v16[MEMORY[0xBA9DE4]]; /*0x91580e*/
  if ( *(_DWORD *)(v17 + 0x1A4) >= *(_DWORD *)(v17 + 0x1A8) ) /*0x91581d*/
  {
    LODWORD(v21) = a2; /*0x915861*/
  }
  else
  {
    v18 = v16[MEMORY[0xBA9DE4]]; /*0x91581f*/
    v19 = *(_DWORD **)(v17 + 0x1A4); /*0x915821*/
    *v19 = "Et"; /*0x915827*/
    v20 = __rdtsc(); /*0x91582d*/
    v26 = v20; /*0x91582f*/
    v21 = __PAIR64__(v20, (unsigned int)a2); /*0x915837*/
    v19[1] = HIDWORD(v21); /*0x91583a*/
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x915840*/
  }
  *a2 = v24; /*0x91584a*/
  return v21; /*0x91584c*/
}
