int __thiscall sub_904FD0(_DWORD *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v6; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ebx
  int *v13; // esi
  int v14; // eax
  int v15; // edi
  unsigned __int64 v16; // rax
  int v17; // edi
  _DWORD *v18; // ecx
  int v20; // [esp+18h] [ebp-228h]
  _DWORD v22[4]; // [esp+20h] [ebp-220h] BYREF
  _BYTE v23[524]; // [esp+30h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x904fe4*/
  v6 = MEMORY[0xBA9DE4]; /*0x904fef*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904ffc*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90500b*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90500d*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x90500f*/
    *v9 = "TtShapeCollection"; /*0x905015*/
    v10 = __rdtsc(); /*0x90501b*/
    v9[1] = v10; /*0x905025*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x90502b*/
  }
  v11 = a2[2]; /*0x905034*/
  v12 = *a2; /*0x905037*/
  v22[3] = a2; /*0x905039*/
  v13 = (int *)*(this + 3); /*0x905041*/
  v14 = *(this + 4) - 1; /*0x905047*/
  v22[2] = v11; /*0x905048*/
  if ( v14 >= 0 ) /*0x90504c*/
  {
    v20 = v14 + 1; /*0x90504f*/
    do /*0x90508f*/
    {
      v15 = *v13; /*0x905053*/
      v22[0] = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v12 + 0x28))(v12, *v13, v23); /*0x905062*/
      v22[1] = v15; /*0x905071*/
      (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v13[1] + 0xC))(v13[1], v22, a3, a4, a5); /*0x905080*/
      v13 += 2; /*0x905087*/
      --v20; /*0x90508b*/
    }
    while ( v20 ); /*0x90508f*/
    v6 = MEMORY[0xBA9DE4]; /*0x905091*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x905097*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[v6]; /*0x90509e*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x9050ad*/
  {
    v17 = ThreadLocalStoragePointer[v6]; /*0x9050af*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x9050b1*/
    *v18 = "Et"; /*0x9050b7*/
    v16 = __rdtsc(); /*0x9050bd*/
    v18[1] = v16; /*0x9050c7*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x9050cd*/
  }
  return v16; /*0x9050d3*/
}
