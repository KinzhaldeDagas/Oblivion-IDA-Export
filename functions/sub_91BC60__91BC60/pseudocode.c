int __thiscall sub_91BC60(_BYTE *this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ebp
  _DWORD *v7; // ebx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  int v10; // esi
  _DWORD *v11; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91bc63*/
  v4 = MEMORY[0xBA9DE4]; /*0x91bc6b*/
  v5 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91bc71*/
  if ( *(_DWORD *)(v5 + 0x1A4) < *(_DWORD *)(v5 + 0x1A8) ) /*0x91bc80*/
  {
    v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91bc83*/
    v7 = *(_DWORD **)(v5 + 0x1A4); /*0x91bc85*/
    *v7 = "TthkShapeDisplayViewer"; /*0x91bc8b*/
    v8 = __rdtsc(); /*0x91bc91*/
    v7[1] = v8; /*0x91bc9b*/
    *(_DWORD *)(v6 + 0x1A4) = v7 + 3; /*0x91bca1*/
  }
  if ( *(this + 0x10) ) /*0x91bca8*/
  {
    sub_91BAC0(*((_DWORD *)this + 0xFFFFFFFB), a2, -1.0); /*0x91bcf9*/
    LODWORD(v9) = ThreadLocalStoragePointer[v4]; /*0x91bcfe*/
    if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) ) /*0x91bd12*/
    {
LABEL_7:
      v10 = ThreadLocalStoragePointer[v4]; /*0x91bd14*/
      v11 = *(_DWORD **)(v9 + 0x1A4); /*0x91bd16*/
      *v11 = "Et"; /*0x91bd1c*/
      v9 = __rdtsc(); /*0x91bd22*/
      v11[1] = v9; /*0x91bd2c*/
      *(_DWORD *)(v10 + 0x1A4) = v11 + 3; /*0x91bd32*/
    }
  }
  else
  {
    LODWORD(v9) = ThreadLocalStoragePointer[v4]; /*0x91bcaf*/
    if ( *(_DWORD *)(v9 + 0x1A4) < *(_DWORD *)(v9 + 0x1A8) ) /*0x91bcbe*/
      goto LABEL_7; /*0x91bcbe*/
  }
  return v9; /*0x91bcde*/
}
