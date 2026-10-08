_DWORD *sub_8BAA10()
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v1; // edi
  _DWORD *result; // eax

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8baa12*/
  v1 = MEMORY[0xBA9DE4]; /*0x8baa1a*/
  if ( *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A0) ) /*0x8baa23*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)unk_BA7D98 + 4))( /*0x8baa38*/
      unk_BA7D98,
      *(_DWORD *)(ThreadLocalStoragePointer[MEMORY[0xBA9DE4]] + 0x1A0));
  result = (_DWORD *)ThreadLocalStoragePointer[v1]; /*0x8baa3b*/
  result[0x68] = 0; /*0x8baa3e*/
  result[0x6B] = 0; /*0x8baa44*/
  result[0x69] = 0; /*0x8baa4b*/
  result[0x6A] = 0; /*0x8baa52*/
  return result; /*0x8baa4a*/
}
