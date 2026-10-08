int __thiscall sub_92B270(_DWORD **this, _BYTE *a2, int a3, int a4)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v5; // edi
  int v6; // eax
  int v7; // ebp
  _DWORD *v8; // ebx
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // esi
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  char v16; // [esp+Fh] [ebp-5h] BYREF
  int v17; // [esp+10h] [ebp-4h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x92b275*/
  v5 = MEMORY[0xBA9DE4]; /*0x92b27d*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92b283*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x92b292*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x92b295*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x92b297*/
    *v8 = "TtrcBvShape"; /*0x92b29d*/
    v9 = __rdtsc(); /*0x92b2a3*/
    v17 = v9; /*0x92b2a5*/
    v8[1] = v9; /*0x92b2ad*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x92b2b3*/
  }
  (*(void (__thiscall **)(_DWORD, char *, int, int))(**(this + 4) + 0x14))(*(this + 4), &v16, a3, a4); /*0x92b2ce*/
  v10 = ThreadLocalStoragePointer[v5]; /*0x92b2d1*/
  if ( *(_DWORD *)(v10 + 0x1A4) >= *(_DWORD *)(v10 + 0x1A8) ) /*0x92b2e0*/
  {
    LODWORD(v14) = a2; /*0x92b319*/
  }
  else
  {
    v11 = ThreadLocalStoragePointer[v5]; /*0x92b2e2*/
    v12 = *(_DWORD **)(v10 + 0x1A4); /*0x92b2e4*/
    *v12 = "Et"; /*0x92b2ea*/
    v13 = __rdtsc(); /*0x92b2f0*/
    v14 = __PAIR64__(v13, (unsigned int)a2); /*0x92b2fa*/
    v12[1] = HIDWORD(v14); /*0x92b2fe*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x92b304*/
  }
  *a2 = v16; /*0x92b310*/
  return v14; /*0x92b30e*/
}
