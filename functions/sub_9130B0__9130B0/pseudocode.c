int __thiscall sub_9130B0(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int result; // eax
  int v11; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  v3 = *(this + 0xF);
  v4 = TlsIndex;
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 0xD), 4 * v3, 0x14);
  }
  v6 = *(this + 0xC);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0xA), 4 * v6, 0x14);
  }
  v8 = *(this + 9);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)*(this + 7), 4 * v8, 0x14);
  }
  result = *(this + 6);
  if ( result >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    return sub_8A75D0(v11, (_DWORD *)*(this + 4), 0x10 * result, 0x14);
  }
  return result;
}
