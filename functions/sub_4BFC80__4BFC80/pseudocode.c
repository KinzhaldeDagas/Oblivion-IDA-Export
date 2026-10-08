int sub_4BFC80()
{
  int result; // eax

  result = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x4bfc8f*/
  if ( !result ) /*0x4bfc97*/
    return unk_BA7D9C; /*0x4bfc99*/
  return result; /*0x4bfc9e*/
}
