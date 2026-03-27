unsigned int __thiscall sub_8DE800(int *this)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  unsigned int result; // eax
  int v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  result = *(this + 0x15);
  v4 = TlsIndex;
  if ( !result )
  {
    v5 = *(this + 0x16);
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
      if ( !v6 )
        v6 = dword_BA7D9C;
      sub_8A75D0(v6, (_DWORD *)*(this + 0x14), 4 * v5, 0x14);
    }
    result = *(this + 0x16) & 0x40000000 | 0x80000000;
    *(this + 0x14) = 0;
    *(this + 0x15) = 0;
    *(this + 0x16) = result;
  }
  if ( !*(this + 0x18) )
  {
    v7 = *(this + 0x19);
    if ( v7 >= 0 )
    {
      v8 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
      if ( !v8 )
        v8 = dword_BA7D9C;
      sub_8A75D0(v8, (_DWORD *)*(this + 0x17), 4 * v7, 0x14);
    }
    result = *(this + 0x19) & 0x40000000 | 0x80000000;
    *(this + 0x17) = 0;
    *(this + 0x18) = 0;
    *(this + 0x19) = result;
  }
  return result;
}
