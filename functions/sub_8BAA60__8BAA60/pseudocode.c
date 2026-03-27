_DWORD *__cdecl sub_8BAA60(int a1)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v2; // ebp
  _DWORD *result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // edx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v2 = TlsIndex;
  result = (_DWORD *)ThreadLocalStoragePointer[TlsIndex];
  if ( a1 != result[0x6B] - result[0x68] )
  {
    v4 = ThreadLocalStoragePointer[TlsIndex];
    v5 = result[0x68];
    if ( v5 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7D98 + 4))(dword_BA7D98, v5);
    *(_DWORD *)(v4 + 0x1A0) = (**(int (__thiscall ***)(int, int, int))dword_BA7D98)(dword_BA7D98, a1, 0x18);
    result = (_DWORD *)ThreadLocalStoragePointer[v2];
    result[0x69] = result[0x68];
    v6 = result[0x68];
    result[0x6B] = v6 + a1;
    result[0x6A] = v6 + a1 - 0x10;
  }
  return result;
}
