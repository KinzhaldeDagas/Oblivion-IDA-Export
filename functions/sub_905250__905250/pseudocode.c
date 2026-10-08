int __thiscall sub_905250(_DWORD *this, int *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // ecx
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int v12; // edx
  int v13; // ebx
  int *v14; // esi
  int v15; // eax
  int v16; // edi
  unsigned __int64 v17; // rax
  int v18; // edi
  _DWORD *v19; // ecx
  int v21; // [esp+1Ch] [ebp-228h]
  _DWORD v23[4]; // [esp+24h] [ebp-220h] BYREF
  _BYTE v24[524]; // [esp+34h] [ebp-210h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x905264*/
  v7 = MEMORY[0xBA9DE4]; /*0x90526f*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90527c*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x90528b*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90528d*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x90528f*/
    *v10 = "TtShapeCollection"; /*0x905295*/
    v11 = __rdtsc(); /*0x90529b*/
    v10[1] = v11; /*0x9052a5*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x9052ab*/
  }
  v12 = a2[2]; /*0x9052b4*/
  v13 = *a2; /*0x9052b7*/
  v23[3] = a2; /*0x9052b9*/
  v14 = (int *)*(this + 3); /*0x9052c1*/
  v15 = *(this + 4) - 1; /*0x9052c7*/
  v23[2] = v12; /*0x9052c8*/
  if ( v15 >= 0 ) /*0x9052cc*/
  {
    v21 = v15 + 1; /*0x9052cf*/
    do /*0x905313*/
    {
      v16 = *v14; /*0x9052d3*/
      v23[0] = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v13 + 0x28))(v13, *v14, v24); /*0x9052e2*/
      v23[1] = v16; /*0x9052f5*/
      (*(void (__thiscall **)(int, _DWORD *, int, int, int, int))(*(_DWORD *)v14[1] + 0x10))( /*0x905304*/
        v14[1],
        v23,
        a3,
        a4,
        a5,
        a6);
      v14 += 2; /*0x90530b*/
      --v21; /*0x90530f*/
    }
    while ( v21 ); /*0x905313*/
    v7 = MEMORY[0xBA9DE4]; /*0x905315*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90531b*/
  }
  LODWORD(v17) = ThreadLocalStoragePointer[v7]; /*0x905322*/
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) ) /*0x905331*/
  {
    v18 = ThreadLocalStoragePointer[v7]; /*0x905333*/
    v19 = *(_DWORD **)(v17 + 0x1A4); /*0x905335*/
    *v19 = "Et"; /*0x90533b*/
    v17 = __rdtsc(); /*0x905341*/
    v19[1] = v17; /*0x90534b*/
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x905351*/
  }
  return v17; /*0x905357*/
}
