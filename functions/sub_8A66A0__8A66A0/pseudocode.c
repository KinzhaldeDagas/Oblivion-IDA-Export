int __thiscall sub_8A66A0(int *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v6; // ecx
  int result; // eax
  int v8; // ecx

  v2 = *(this + 5);
  *this = (int)&off_A97598;
  if ( v2 )
  {
    if ( *(_WORD *)(v2 + 4) )
    {
      if ( !--*(_WORD *)(v2 + 6) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    }
  }
  v3 = *(this + 0x13);
  v4 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v3 >= 0 )
  {
    v6 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v6 )
      v6 = dword_BA7D9C;
    sub_8A75D0(v6, (_DWORD *)*(this + 0x11), 0x10 * v3, 0x14);
  }
  result = *(this + 0x10);
  if ( result >= 0 )
  {
    v8 = *(_DWORD *)(ThreadLocalStoragePointer[v4] + 0x19C);
    if ( !v8 )
      v8 = dword_BA7D9C;
    result = sub_8A75D0(v8, (_DWORD *)*(this + 0xE), 8 * result, 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
