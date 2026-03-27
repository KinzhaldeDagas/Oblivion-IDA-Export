void sub_41DEA0()
{
  void *v0; // esi
  int v1; // edi

  v0 = *((void **)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v1 = dword_B33780;
  if ( *((_DWORD *)v0 + 3) != dword_B33780 )
  {
    *((_DWORD *)v0 + 2) = 0;
    _memset((char *)v0 + 0x10, 0, 0x174);
    *((_DWORD *)v0 + 3) = v1;
  }
}
