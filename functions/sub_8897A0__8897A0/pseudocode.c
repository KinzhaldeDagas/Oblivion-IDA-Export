int sub_8897A0()
{
  int v0; // eax
  void (__thiscall ***v1)(_DWORD, int); // ecx
  int v2; // eax
  void (__thiscall ***v3)(_DWORD, int); // ecx
  _WORD *v4; // eax
  int v5; // eax
  bool v6; // zf
  void (__thiscall ***v7)(_DWORD, int); // ecx
  _WORD *v8; // eax
  int v9; // ecx

  if ( dword_BA7A00 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA7A00 + 0x10))(dword_BA7A00, 1);
  if ( dword_BA8038 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_BA8038 + 8))(dword_BA8038, 1);
  sub_8905B0();
  sub_891010();
  v0 = dword_BA7904;
  if ( dword_BA7904 )
  {
    v1 = (void (__thiscall ***)(_DWORD, int))dword_BA7904;
    if ( *(_WORD *)(v0 + 4) )
    {
      if ( !--*(_WORD *)(v0 + 6) )
        (**v1)(v1, 1);
    }
    dword_BA7904 = 0;
  }
  if ( byte_BA8040 == 1 )
  {
    sub_8BB990();
    v2 = dword_BA7FB0;
    if ( dword_BA7FB0 )
    {
      v3 = (void (__thiscall ***)(_DWORD, int))dword_BA7FB0;
      if ( *(_WORD *)(v2 + 4) )
      {
        v4 = (_WORD *)(v2 + 6);
        if ( !--*v4 )
          (**v3)(v3, 1);
      }
    }
    v5 = dword_BA7FB4;
    v6 = dword_BA7FB4 == 0;
    dword_BA7FB0 = 0;
    if ( !v6 )
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v5;
      if ( *(_WORD *)(v5 + 4) )
      {
        v8 = (_WORD *)(v5 + 6);
        if ( !--*v8 )
          (**v7)(v7, 1);
      }
    }
    dword_BA7FB4 = 0;
    sub_8BAA10();
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v9 )
      v9 = dword_BA7D9C;
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9);
    sub_8A7260(0);
    if ( dword_BA7D9C )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_BA7D9C + 4))(dword_BA7D9C);
      sub_8A7210((_DWORD *)dword_BA7D9C);
    }
    sub_8A70F0(0);
    byte_BA8040 = 0;
  }
  return 0;
}
