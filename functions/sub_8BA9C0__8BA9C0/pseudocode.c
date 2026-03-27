_DWORD *sub_8BA9C0()
{
  _DWORD *result; // eax

  result = *((_DWORD **)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  result[0x68] = 0;
  result[0x6B] = 0;
  result[0x69] = 0;
  result[0x6A] = 0;
  return result;
}
