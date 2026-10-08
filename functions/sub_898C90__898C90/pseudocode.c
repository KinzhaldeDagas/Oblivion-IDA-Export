int __thiscall sub_898C90(_DWORD **this, int a2, int a3)
{
  int v4; // edi
  _DWORD *v5; // ecx
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // ebp
  int v8; // eax
  _DWORD *v9; // edi
  unsigned __int64 v10; // rax
  int v11; // eax
  int v12; // ebx
  _DWORD *v13; // ecx
  unsigned __int64 v14; // rax
  int v16; // [esp+Ch] [ebp-4h]
  int v17; // [esp+14h] [ebp+4h]

  _mm_setcsr(_mm_getcsr() | 0x8000); /*0x898cb4*/
  v4 = _mm_getcsr() & 0x8000; /*0x898cc6*/
  v16 = v4; /*0x898ccd*/
  v17 = (*(int (__thiscall **)(_DWORD, _DWORD **, int, int))(**(this + 2) + 8))(*(this + 2), this, a2, a3); /*0x898cd6*/
  if ( !v17 ) /*0x898cda*/
  {
    v5 = *(this + 0x18); /*0x898ce0*/
    if ( v5 ) /*0x898ce5*/
    {
      if ( *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28) > v5[2] ) /*0x898cfe*/
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x898d04*/
        v7 = MEMORY[0xBA9DE4]; /*0x898d0c*/
        v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x898d12*/
        if ( *(_DWORD *)(v8 + 0x1A4) < *(_DWORD *)(v8 + 0x1A8) ) /*0x898d21*/
        {
          v9 = *(_DWORD **)(v8 + 0x1A4); /*0x898d23*/
          *v9 = "TtWatchDog:FreeMem"; /*0x898d29*/
          v10 = __rdtsc(); /*0x898d2f*/
          v9[1] = v10; /*0x898d39*/
          *(_DWORD *)(ThreadLocalStoragePointer[v7] + 0x1A4) = v9 + 3; /*0x898d42*/
          v4 = v16; /*0x898d48*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD **))(*v5 + 8))(v5, this); /*0x898d4f*/
        v11 = ThreadLocalStoragePointer[v7]; /*0x898d52*/
        if ( *(_DWORD *)(v11 + 0x1A4) < *(_DWORD *)(v11 + 0x1A8) ) /*0x898d61*/
        {
          v12 = ThreadLocalStoragePointer[v7]; /*0x898d63*/
          v13 = *(_DWORD **)(v11 + 0x1A4); /*0x898d65*/
          *v13 = "Et"; /*0x898d6b*/
          v14 = __rdtsc(); /*0x898d71*/
          v13[1] = v14; /*0x898d7b*/
          *(_DWORD *)(v12 + 0x1A4) = v13 + 3; /*0x898d81*/
        }
      }
    }
  }
  _mm_setcsr(v4 | _mm_getcsr() & 0xFFFF7FFF); /*0x898d9d*/
  return v17; /*0x898da6*/
}
