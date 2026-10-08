int sub_8BA9F0()
{
  int result; // eax

  result = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ba9fc*/
  *(_DWORD *)(result + 0x1A4) = *(_DWORD *)(result + 0x1A0); /*0x8baa05*/
  return result; /*0x8baa0b*/
}
