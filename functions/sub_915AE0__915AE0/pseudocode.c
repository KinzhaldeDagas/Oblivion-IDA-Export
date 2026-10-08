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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x915afb*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x915b09*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x915b1b*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x915b1d*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x915b1f*/
    *v8 = "TtrcShpCollect"; /*0x915b25*/
    v9 = __rdtsc(); /*0x915b2b*/
    v8[1] = v9; /*0x915b35*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x915b3b*/
  }
  if ( *(_DWORD *)(a2 + 0x24) ) /*0x915b44*/
  {
    for ( i = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this); /*0x915baf*/
          i != 0xFFFFFFFF;
          i = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, i) )
    {
      if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, void *, int))(a2 + 0x24))( /*0x915bc0*/
                       *(_DWORD *)(a2 + 0x24),
                       (char *)&v20 + 3,
                       a2,
                       this,
                       i) )
      {
        v14 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, i, v25); /*0x915bcf*/
        v24 = a3; /*0x915bd5*/
        v23 = *(_DWORD *)(a3 + 8); /*0x915bdc*/
        v21 = v14; /*0x915be9*/
        v22 = i; /*0x915bed*/
        (*(void (__thiscall **)(int, int, int *, int))(*(_DWORD *)v14 + 0x18))(v14, a2, &v21, a4); /*0x915bf6*/
      }
    }
  }
  else
  {
    for ( j = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x20))(this); /*0x915b57*/
          j != 0xFFFFFFFF;
          j = (*(int (__thiscall **)(void *, int))(*(_DWORD *)this + 0x24))(this, j) )
    {
      v11 = (*(int (__thiscall **)(void *, int, _BYTE *))(*(_DWORD *)this + 0x28))(this, j, v25); /*0x915b6a*/
      v12 = *(_DWORD *)(a3 + 8); /*0x915b70*/
      v24 = a3; /*0x915b73*/
      v23 = v12; /*0x915b80*/
      v21 = v11; /*0x915b84*/
      v22 = j; /*0x915b88*/
      (*(void (__thiscall **)(int, int, int *, int))(*(_DWORD *)v11 + 0x18))(v11, a2, &v21, a4); /*0x915b91*/
    }
  }
  v15 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x915c08*/
  LODWORD(v16) = v15[MEMORY[0xBA9DE4]]; /*0x915c15*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x915c24*/
  {
    v17 = v15[MEMORY[0xBA9DE4]]; /*0x915c26*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x915c28*/
    *v18 = "Et"; /*0x915c2e*/
    v16 = __rdtsc(); /*0x915c34*/
    v18[1] = v16; /*0x915c3e*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x915c44*/
  }
  return v16; /*0x915c4a*/
}
