char __cdecl sub_46B5C0(char a1)
{
  int v1; // ecx
  char result; // al

  v1 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  result = *(_BYTE *)(v1 + 0x185);
  *(_BYTE *)(v1 + 0x185) = a1;
  return result;
}
