_DWORD *sub_8BAA10()
{
  _DWORD *ThreadLocalStoragePointer; // esi
  int v1; // edi
  _DWORD *result; // eax

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v1 = TlsIndex;
  if ( *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A0) )
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_BA7D98 + 4))(
      dword_BA7D98,
      *(_DWORD *)(ThreadLocalStoragePointer[TlsIndex] + 0x1A0));
  result = (_DWORD *)ThreadLocalStoragePointer[v1];
  result[0x68] = 0;
  result[0x6B] = 0;
  result[0x69] = 0;
  result[0x6A] = 0;
  return result;
}
