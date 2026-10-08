int __thiscall sub_903360(int *this, int *a2, int a3, int a4, int a5)
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

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90336f*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903376*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x903385*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903387*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x903389*/
    *v9 = "TtListAgent"; /*0x90338f*/
    v10 = __rdtsc(); /*0x903395*/
    v9[1] = v10; /*0x90339f*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x9033a5*/
  }
  v11 = *(this + 4); /*0x9033af*/
  v12 = a2[2]; /*0x9033b2*/
  v13 = *a2; /*0x9033b5*/
  v14 = (_DWORD *)*(this + 3); /*0x9033b7*/
  v15 = 0; /*0x9033ba*/
  v20[3] = a2; /*0x9033be*/
  v20[2] = v12; /*0x9033c2*/
  if ( v11 > 0 ) /*0x9033c6*/
  {
    do /*0x9033ff*/
    {
      v20[0] = *(_DWORD *)(*(_DWORD *)(v13 + 0x10) + 8 * v15); /*0x9033e4*/
      v20[1] = v15; /*0x9033e8*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(*(_DWORD *)*v14 + 0xC))(*v14, v20, a3, a4, a5); /*0x9033f6*/
      ++v14; /*0x9033f9*/
      ++v15; /*0x9033fc*/
    }
    while ( v15 < v11 ); /*0x9033ff*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x903401*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90340e*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x90341d*/
  {
    v17 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90341f*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x903421*/
    *v18 = "Et"; /*0x903427*/
    v16 = __rdtsc(); /*0x90342d*/
    v18[1] = v16; /*0x903437*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x90343d*/
  }
  return v16; /*0x903443*/
}
