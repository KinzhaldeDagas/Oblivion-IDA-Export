int __thiscall sub_8CB180(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int result; // eax
  int v7; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *this = (int)&off_A99B70;
  v3 = *(this + 0xB);
  v4 = TlsIndex;
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 9), 4 * v3, 0x14);
  }
  result = *(this + 4);
  if ( result >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    return sub_8A75D0(v7, (_DWORD *)*(this + 2), 4 * result, 0x14);
  }
  return result;
}
