int __thiscall sub_8DE350(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int result; // eax
  int v9; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  *this = (int)&off_A9A4E4;
  v3 = *(this + 0x19);
  v4 = TlsIndex;
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 0x17), 4 * v3, 0x14);
  }
  v6 = *(this + 0x13);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0x11), 4 * v6, 0x14);
  }
  result = *(this + 0xF);
  if ( result >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    result = sub_8A75D0(v9, (_DWORD *)*(this + 0xD), 4 * result, 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
