int __thiscall sub_903450(int *this, int *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v8; // eax
  int v9; // ebx
  _DWORD *v10; // esi
  unsigned __int64 v11; // rax
  int v12; // ebx
  int v13; // edx
  int v14; // ebp
  _DWORD *v15; // edi
  int v16; // esi
  unsigned __int64 v17; // rax
  int v18; // esi
  _DWORD *v19; // ecx
  _DWORD v21[4]; // [esp+14h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90345f*/
  v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903466*/
  if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x903475*/
  {
    v9 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903477*/
    v10 = *(_DWORD **)(v8 + 0x1A4); /*0x903479*/
    *v10 = "TtListAgent"; /*0x90347f*/
    v11 = __rdtsc(); /*0x903485*/
    v10[1] = v11; /*0x90348f*/
    *(_DWORD *)(v9 + 0x1A4) = v10 + 3; /*0x903495*/
  }
  v12 = *(this + 4); /*0x90349f*/
  v13 = a2[2]; /*0x9034a2*/
  v14 = *a2; /*0x9034a5*/
  v15 = (_DWORD *)*(this + 3); /*0x9034a7*/
  v16 = 0; /*0x9034aa*/
  v21[3] = a2; /*0x9034ae*/
  v21[2] = v13; /*0x9034b2*/
  if ( v12 > 0 ) /*0x9034b6*/
  {
    do /*0x9034f4*/
    {
      v21[0] = *(_DWORD *)(*(_DWORD *)(v14 + 0x10) + 8 * v16); /*0x9034d9*/
      v21[1] = v16; /*0x9034dd*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int, int))(*(_DWORD *)*v15 + 0x10))(*v15, v21, a3, a4, a5, a6); /*0x9034eb*/
      ++v15; /*0x9034ee*/
      ++v16; /*0x9034f1*/
    }
    while ( v16 < v12 ); /*0x9034f4*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9034f6*/
  }
  LODWORD(v17) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903503*/
  if ( *(_DWORD *)(v17 + 0x1A4) < *(_DWORD *)(v17 + 0x1A8) ) /*0x903512*/
  {
    v18 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903514*/
    v19 = *(_DWORD **)(v17 + 0x1A4); /*0x903516*/
    *v19 = "Et"; /*0x90351c*/
    v17 = __rdtsc(); /*0x903522*/
    v19[1] = v17; /*0x90352c*/
    *(_DWORD *)(v18 + 0x1A4) = v19 + 3; /*0x903532*/
  }
  return v17; /*0x903538*/
}
