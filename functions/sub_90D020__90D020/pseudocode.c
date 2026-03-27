int __thiscall sub_90D020(int *this)
{
  int v2; // eax
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v9; // ecx
  int result; // eax
  int v11; // ecx

  v2 = *(this + 0x11);
  v3 = 0;
  *this = (int)&off_A9C4D4;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(this + 0x10);
      v5 = *(_DWORD *)(v4 + 4 * v3);
      if ( v5 )
      {
        sub_90C940(*(_DWORD **)(v4 + 4 * v3));
        (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)dword_BA7D98 + 0x14))(dword_BA7D98, v5, 0x48, 0x22);
      }
      ++v3;
    }
    while ( v3 < *(this + 0x11) );
  }
  v6 = *(this + 0x12);
  v7 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v6 >= 0 )
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v7] + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    sub_8A75D0(v9, (_DWORD *)*(this + 0x10), 4 * v6, 0x14);
  }
  result = *(this + 0xB);
  if ( result >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v7] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    result = sub_8A75D0(v11, (_DWORD *)*(this + 9), 0x30 * (result & 0x3FFFFFFF), 0x14);
  }
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
