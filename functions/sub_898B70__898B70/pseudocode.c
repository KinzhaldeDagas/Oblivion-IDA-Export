int __thiscall sub_898B70(_DWORD **this, int a2)
{
  int v3; // edi
  _DWORD *v4; // ecx
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // edi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ebx
  _DWORD *v12; // ecx
  unsigned __int64 v13; // rax
  int v15; // [esp+10h] [ebp-8h]
  int v16; // [esp+14h] [ebp-4h]

  _mm_setcsr(_mm_getcsr() | 0x8000); /*0x898b94*/
  v3 = _mm_getcsr() & 0x8000; /*0x898ba2*/
  v16 = v3; /*0x898ba9*/
  v15 = (*(int (__thiscall **)(_DWORD, _DWORD **, int, int))(**(this + 2) + 8))(*(this + 2), this, a2, a2); /*0x898bb2*/
  if ( !v15 ) /*0x898bb6*/
  {
    v4 = *(this + 0x18); /*0x898bbc*/
    if ( v4 ) /*0x898bc1*/
    {
      if ( *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28) > v4[2] ) /*0x898bda*/
      {
        ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x898be0*/
        v6 = MEMORY[0xBA9DE4]; /*0x898be8*/
        v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x898bee*/
        if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x898bfd*/
        {
          v8 = *(_DWORD **)(v7 + 0x1A4); /*0x898bff*/
          *v8 = "TtWatchDog:FreeMem"; /*0x898c05*/
          v9 = __rdtsc(); /*0x898c0b*/
          v8[1] = v9; /*0x898c15*/
          *(_DWORD *)(ThreadLocalStoragePointer[v6] + 0x1A4) = v8 + 3; /*0x898c1e*/
          v3 = v16; /*0x898c24*/
        }
        (*(void (__thiscall **)(_DWORD *, _DWORD **))(*v4 + 8))(v4, this); /*0x898c2b*/
        v10 = ThreadLocalStoragePointer[v6]; /*0x898c2e*/
        if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x898c3d*/
        {
          v11 = ThreadLocalStoragePointer[v6]; /*0x898c3f*/
          v12 = *(_DWORD **)(v10 + 0x1A4); /*0x898c41*/
          *v12 = "Et"; /*0x898c47*/
          v13 = __rdtsc(); /*0x898c4d*/
          v12[1] = v13; /*0x898c57*/
          *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x898c5d*/
        }
      }
    }
  }
  _mm_setcsr(v3 | _mm_getcsr() & 0xFFFF7FFF); /*0x898c79*/
  return v15; /*0x898c82*/
}
