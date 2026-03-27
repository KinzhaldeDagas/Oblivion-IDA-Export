int __thiscall sub_946CB0(int *this)
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
  *this = (int)&off_AA297C;
  *(this + 2) = (int)&off_AA2964;
  v3 = *(this + 0x10);
  v4 = TlsIndex;
  if ( v3 >= 0 )
  {
    v5 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v5 )
      v5 = dword_BA7D9C;
    sub_8A75D0(v5, (_DWORD *)*(this + 0xE), v3 & 0x3FFFFFFF, 0x14);
  }
  v6 = *(this + 0xD);
  if ( v6 >= 0 )
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v7 )
      v7 = dword_BA7D9C;
    sub_8A75D0(v7, (_DWORD *)*(this + 0xB), v6 & 0x3FFFFFFF, 0x14);
  }
  result = *(this + 0xA);
  if ( result >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    result = sub_8A75D0(v9, (_DWORD *)*(this + 8), 4 * result, 0x14);
  }
  *(this + 2) = (int)&off_A9D1C0;
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
