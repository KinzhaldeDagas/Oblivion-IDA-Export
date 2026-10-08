int __thiscall sub_92B330(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // edx
  int v11; // eax
  unsigned __int64 v12; // rax
  int v13; // esi
  _DWORD *v14; // ecx
  _DWORD v16[4]; // [esp+10h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92b335*/
  v5 = MEMORY[0xBA9DE4]; /*0x92b33d*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92b343*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x92b352*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92b355*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x92b357*/
    *v8 = "TtrcBvShape"; /*0x92b35d*/
    v9 = __rdtsc(); /*0x92b363*/
    v8[1] = v9; /*0x92b36d*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x92b373*/
  }
  v16[2] = *(_DWORD *)(a3 + 8); /*0x92b381*/
  v10 = *(this + 4); /*0x92b385*/
  v16[3] = a3; /*0x92b388*/
  v11 = *(_DWORD *)(a3 + 4); /*0x92b38c*/
  v16[0] = v10; /*0x92b38f*/
  v16[1] = v11; /*0x92b3a3*/
  (*(void (__thiscall **)(int, int, _DWORD *, int))(*(_DWORD *)v10 + 0x18))(v10, a2, v16, a4); /*0x92b3aa*/
  LODWORD(v12) = ThreadLocalStoragePointer[v5]; /*0x92b3ad*/
  if ( *(_DWORD *)(v12 + 0x1A4) < *(_DWORD *)(v12 + 0x1A8) ) /*0x92b3bc*/
  {
    v13 = ThreadLocalStoragePointer[v5]; /*0x92b3be*/
    v14 = *(_DWORD **)(v12 + 0x1A4); /*0x92b3c0*/
    *v14 = "Et"; /*0x92b3c6*/
    v12 = __rdtsc(); /*0x92b3cc*/
    v14[1] = v12; /*0x92b3d6*/
    *(_DWORD *)(v13 + 0x1A4) = v14 + 3; /*0x92b3dc*/
  }
  return v12; /*0x92b3e2*/
}
