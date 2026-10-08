int __thiscall sub_904EB0(_DWORD *this, int *a2, int a3, int a4, int a5)
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x904ec4*/
  v6 = MEMORY[0xBA9DE4]; /*0x904ecf*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904edc*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x904eeb*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x904eed*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x904eef*/
    *v9 = "TtShapeCollection"; /*0x904ef5*/
    v10 = __rdtsc(); /*0x904efb*/
    v9[1] = v10; /*0x904f05*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x904f0b*/
  }
  v11 = a2[2]; /*0x904f14*/
  v12 = *a2; /*0x904f17*/
  v22[3] = a2; /*0x904f19*/
  v13 = (int *)*(this + 3); /*0x904f21*/
  v14 = *(this + 4) - 1; /*0x904f27*/
  v22[2] = v11; /*0x904f28*/
  if ( v14 >= 0 ) /*0x904f2c*/
  {
    v20 = v14 + 1; /*0x904f2f*/
    do /*0x904f6f*/
    {
      v15 = *v13; /*0x904f33*/
      v22[0] = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v12 + 0x28))(v12, *v13, v23); /*0x904f42*/
      v22[1] = v15; /*0x904f51*/
      (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v13[1] + 0x14))(v13[1], v22, a3, a4, a5); /*0x904f60*/
      v13 += 2; /*0x904f67*/
      --v20; /*0x904f6b*/
    }
    while ( v20 ); /*0x904f6f*/
    v6 = MEMORY[0xBA9DE4]; /*0x904f71*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x904f77*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[v6]; /*0x904f7e*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x904f8d*/
  {
    v17 = ThreadLocalStoragePointer[v6]; /*0x904f8f*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x904f91*/
    *v18 = "Et"; /*0x904f97*/
    v16 = __rdtsc(); /*0x904f9d*/
    v18[1] = v16; /*0x904fa7*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x904fad*/
  }
  return v16; /*0x904fb3*/
}
