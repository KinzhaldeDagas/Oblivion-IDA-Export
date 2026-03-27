int sub_8BA9F0()
{
  int result; // eax

  result = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  *(_DWORD *)(result + 0x1A4) = *(_DWORD *)(result + 0x1A0);
  return result;
}
