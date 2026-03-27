int __thiscall sub_8C8DB0(int *this)
{
  int v2; // eax
  int v3; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  v2 = *(this + 7);
  v3 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 5), 0x10 * v2, 0x14);
  }
  result = *(this + 4);
  if ( result >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v3] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    return sub_8A75D0(v7, (_DWORD *)*(this + 2), 0x10 * result, 0x14);
  }
  return result;
}
