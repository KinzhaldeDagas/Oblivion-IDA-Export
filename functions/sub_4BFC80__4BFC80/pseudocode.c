int sub_4BFC80()
{
  int result; // eax

  result = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
  if ( !result )
    return dword_BA7D9C;
  return result;
}
