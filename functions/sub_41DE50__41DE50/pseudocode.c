void __cdecl sub_41DE50(ExtraDataList *a1)
{
  _DWORD *ThreadLocalStoragePointer; // edx
  int v2; // esi

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x41de56*/
  ++unk_B33780; /*0x41de62*/
  v2 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x41de69*/
  ++*(_DWORD *)(v2 + 0xC); /*0x41de6c*/
  if ( a1 == *(ExtraDataList **)(v2 + 8) ) /*0x41de7c*/
  {
    _memset(v2 + 0x10, 0, 0x174u); /*0x41de8c*/
    *(_DWORD *)(v2 + 8) = 0; /*0x41de94*/
  }
}
