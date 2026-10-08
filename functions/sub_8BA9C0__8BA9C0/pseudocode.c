_DWORD *sub_8BA9C0()
{
  _DWORD *result; // eax

  result = *((_DWORD **)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8ba9cc*/
  result[0x68] = 0; /*0x8ba9d1*/
  result[0x6B] = 0; /*0x8ba9d7*/
  result[0x69] = 0; /*0x8ba9dd*/
  result[0x6A] = 0; /*0x8ba9e3*/
  return result; /*0x8ba9e9*/
}
