int __thiscall sub_903270(int *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // ecx
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  unsigned __int64 v10; // rax
  int v11; // ebx
  int v12; // edx
  int v13; // ebp
  _DWORD *v14; // edi
  int v15; // esi
  unsigned __int64 v16; // rax
  int v17; // esi
  _DWORD *v18; // ecx
  _DWORD v20[4]; // [esp+14h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90327f*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903286*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x903295*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903297*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x903299*/
    *v9 = "Ttlist"; /*0x90329f*/
    v10 = __rdtsc(); /*0x9032a5*/
    v9[1] = v10; /*0x9032af*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x9032b5*/
  }
  v11 = *(this + 4); /*0x9032bf*/
  v12 = a2[2]; /*0x9032c2*/
  v13 = *a2; /*0x9032c5*/
  v14 = (_DWORD *)*(this + 3); /*0x9032c7*/
  v15 = 0; /*0x9032ca*/
  v20[3] = a2; /*0x9032ce*/
  v20[2] = v12; /*0x9032d2*/
  if ( v11 > 0 ) /*0x9032d6*/
  {
    do /*0x90330f*/
    {
      v20[0] = *(_DWORD *)(*(_DWORD *)(v13 + 0x10) + 8 * v15); /*0x9032f4*/
      v20[1] = v15; /*0x9032f8*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(*(_DWORD *)*v14 + 0x14))(*v14, v20, a3, a4, a5); /*0x903306*/
      ++v14; /*0x903309*/
      ++v15; /*0x90330c*/
    }
    while ( v15 < v11 ); /*0x90330f*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x903311*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90331e*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x90332d*/
  {
    v17 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90332f*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x903331*/
    *v18 = "Et"; /*0x903337*/
    v16 = __rdtsc(); /*0x90333d*/
    v18[1] = v16; /*0x903347*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x90334d*/
  }
  return v16; /*0x903353*/
}
