int __thiscall sub_903550(int *this, int *a2, int a3, int a4, int a5)
{
  _DWORD *ThreadLocalStoragePointer; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // ecx
  unsigned __int64 v10; // rax
  int v11; // ecx
  int v12; // ebp
  int v13; // eax
  int v14; // esi
  int v15; // ecx
  unsigned __int64 v16; // rax
  int v17; // edi
  _DWORD *v18; // ecx
  _DWORD v20[4]; // [esp+14h] [ebp-10h] BYREF

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x903557*/
  v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903566*/
  if ( *(_DWORD *)(v7 + 0x1A4) < *(_DWORD *)(v7 + 0x1A8) ) /*0x903575*/
  {
    v8 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903577*/
    v9 = *(_DWORD **)(v7 + 0x1A4); /*0x903579*/
    *v9 = "TtListAgent"; /*0x90357f*/
    v10 = __rdtsc(); /*0x903585*/
    v9[1] = v10; /*0x90358f*/
    *(_DWORD *)(v8 + 0x1A4) = v9 + 3; /*0x903595*/
  }
  v11 = a2[2]; /*0x90359f*/
  v12 = *a2; /*0x9035a2*/
  v20[3] = a2; /*0x9035a4*/
  v13 = *(this + 4); /*0x9035a8*/
  v14 = 0; /*0x9035ab*/
  v20[2] = v11; /*0x9035af*/
  if ( v13 > 0 ) /*0x9035b3*/
  {
    do /*0x9035f6*/
    {
      v15 = *(this + 3); /*0x9035c6*/
      v20[0] = *(_DWORD *)(*(_DWORD *)(v12 + 0x10) + 8 * v14); /*0x9035c9*/
      v20[1] = v14; /*0x9035d7*/
      (*(void (__thiscall **)(_DWORD, _DWORD *, int, int, int))(**(_DWORD **)(v15 + 4 * v14) + 8))( /*0x9035e6*/
        *(_DWORD *)(v15 + 4 * v14),
        v20,
        a3,
        a4,
        a5);
      if ( *(_BYTE *)(a5 + 4) ) /*0x9035e9*/
        break; /*0x9035ee*/
      ++v14; /*0x9035f3*/
    }
    while ( v14 < *(this + 4) ); /*0x9035f6*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9035f8*/
  }
  LODWORD(v16) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903605*/
  if ( *(_DWORD *)(v16 + 0x1A4) < *(_DWORD *)(v16 + 0x1A8) ) /*0x903614*/
  {
    v17 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x903616*/
    v18 = *(_DWORD **)(v16 + 0x1A4); /*0x903618*/
    *v18 = "Et"; /*0x90361e*/
    v16 = __rdtsc(); /*0x903624*/
    v18[1] = v16; /*0x90362e*/
    *(_DWORD *)(v17 + 0x1A4) = v18 + 3; /*0x903634*/
  }
  return v16; /*0x90363a*/
}
