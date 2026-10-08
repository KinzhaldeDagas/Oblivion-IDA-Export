int __thiscall sub_90B2F0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v6; // edi
  int v7; // eax
  int v8; // ebp
  _DWORD *v9; // ebx
  unsigned __int64 v10; // rax
  int v11; // edx
  int v12; // ecx
  int v13; // edx
  unsigned __int64 v14; // rax
  int v15; // esi
  _DWORD *v16; // ecx
  _DWORD v18[4]; // [esp+10h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x90b2f5*/
  v6 = MEMORY[0xBA9DE4]; /*0x90b2fd*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90b303*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x90b312*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x90b315*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x90b317*/
    *v9 = "TthkBvAgent"; /*0x90b31d*/
    v10 = __rdtsc(); /*0x90b323*/
    v9[1] = v10; /*0x90b32d*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x90b333*/
  }
  v11 = a2[2]; /*0x90b33e*/
  v12 = *(this + 3); /*0x90b341*/
  v18[3] = a2; /*0x90b344*/
  v18[2] = v11; /*0x90b348*/
  v13 = *(_DWORD *)(*a2 + 0xC); /*0x90b351*/
  v18[1] = a2[1]; /*0x90b354*/
  v18[0] = v13; /*0x90b36b*/
  (*(void (__thiscall **)(int, _DWORD *, int, int, int))(*(_DWORD *)v12 + 8))(v12, v18, a3, a4, a5); /*0x90b372*/
  LODWORD(v14) = ThreadLocalStoragePointer[v6]; /*0x90b375*/
  if ( *(_DWORD *)(v14 + 0x1A4) < *(_DWORD *)(v14 + 0x1A8) ) /*0x90b384*/
  {
    v15 = ThreadLocalStoragePointer[v6]; /*0x90b386*/
    v16 = *(_DWORD **)(v14 + 0x1A4); /*0x90b388*/
    *v16 = "Et"; /*0x90b38e*/
    v14 = __rdtsc(); /*0x90b394*/
    v16[1] = v14; /*0x90b39e*/
    *(_DWORD *)(v15 + 0x1A4) = v16 + 3; /*0x90b3a4*/
  }
  return v14; /*0x90b3aa*/
}
