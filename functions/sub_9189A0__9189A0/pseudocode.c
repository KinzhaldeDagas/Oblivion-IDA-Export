int __thiscall sub_9189A0(int *this)
{
  int v2; // eax
  int v3; // edi
  void (__thiscall ***v4)(_DWORD, int); // ecx
  void (__thiscall ***v5)(_DWORD, int); // ecx
  void (__thiscall ***v6)(_DWORD, int); // ecx
  void (__thiscall ***v7)(_DWORD, int); // ecx
  int v8; // eax
  int v9; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int result; // eax

  v2 = *(this + 0xF);
  v3 = 0;
  *this = (int)&off_A9D230;
  *(this + 2) = (int)&off_A9D214;
  *(this + 3) = (int)&off_A9D1FC;
  if ( v2 > 0 )
  {
    do
    {
      v4 = *(void (__thiscall ****)(_DWORD, int))(*(this + 0xE) + 4 * v3);
      if ( v4 )
        (**v4)(v4, 1);
      ++v3;
    }
    while ( v3 < *(this + 0xF) );
  }
  v5 = (void (__thiscall ***)(_DWORD, int))*(this + 5);
  if ( v5 )
    (**v5)(v5, 1);
  v6 = (void (__thiscall ***)(_DWORD, int))*(this + 6);
  if ( v6 )
    (**v6)(v6, 1);
  v7 = (void (__thiscall ***)(_DWORD, int))*(this + 7);
  if ( v7 )
    (**v7)(v7, 1);
  v8 = *(this + 0x13);
  v9 = TlsIndex;
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  if ( v8 >= 0 )
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v11 )
      v11 = dword_BA7D9C;
    sub_8A75D0(v11, (_DWORD *)*(this + 0x11), 4 * v8, 0x14);
  }
  v12 = *(this + 0x10);
  if ( v12 >= 0 )
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C);
    if ( !v13 )
      v13 = dword_BA7D9C;
    sub_8A75D0(v13, (_DWORD *)*(this + 0xE), 4 * v12, 0x14);
  }
  result = sub_8B0E60(this + 0xB);
  *(this + 9) = (int)&hkBaseObject::`vftable';
  *(this + 3) = (int)&off_A9D1C0;
  *(this + 2) = (int)&off_A9D1D8;
  *this = (int)&hkBaseObject::`vftable';
  return result;
}
