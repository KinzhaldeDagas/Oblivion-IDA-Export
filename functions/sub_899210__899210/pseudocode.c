int __thiscall sub_899210(int this)
{
  int v1; // ebx
  _DWORD *ThreadLocalStoragePointer; // edi
  int v3; // eax
  int v4; // ebp
  _DWORD *v5; // esi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  int v8; // edi
  _DWORD *v9; // ecx

  v1 = MEMORY[0xBA9DE4]; /*0x899212*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x89921a*/
  v3 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x899221*/
  if ( *(_DWORD *)(v3 + 0x1A4) < *(_DWORD *)(v3 + 0x1A8) ) /*0x899230*/
  {
    v4 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x899233*/
    v5 = *(_DWORD **)(v3 + 0x1A4); /*0x899235*/
    *v5 = "TtPendingOps"; /*0x89923b*/
    v6 = __rdtsc(); /*0x899241*/
    v5[1] = v6; /*0x89924b*/
    *(_DWORD *)(v4 + 0x1A4) = v5 + 3; /*0x899251*/
  }
  *(_DWORD *)(this + 0x84) = 0; /*0x899258*/
  sub_8D8BF0(*(int **)(this + 0x80)); /*0x899268*/
  LODWORD(v7) = ThreadLocalStoragePointer[v1]; /*0x89926d*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x89927c*/
  {
    v8 = ThreadLocalStoragePointer[v1]; /*0x89927e*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x899280*/
    *v9 = "Et"; /*0x899286*/
    v7 = __rdtsc(); /*0x89928c*/
    v9[1] = v7; /*0x899296*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x89929c*/
  }
  return v7; /*0x8992a2*/
}
