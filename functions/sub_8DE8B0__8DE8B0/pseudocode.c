int __thiscall sub_8DE8B0(int *this)
{
  int v2; // edi
  int v3; // ecx
  int v4; // eax
  int v5; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx

  v2 = *(this + 0x18) - 1;
  for ( *this = (int)&off_A97B60; v2 >= 0; --v2 )
  {
    v3 = *(_DWORD *)(*(this + 0x17) + 4 * v2);
    if ( v3 )
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v3 + 0x10))(v3, this);
  }
  v4 = *(this + 0x19);
  v5 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0x17), 4 * v4, 0x14);
  }
  v8 = *(this + 0x16);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)*(this + 0x14), 4 * v8, 0x14);
  }
  return sub_8A66A0(this);
}
