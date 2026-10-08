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

  if ( unk_BA7A00 ) /*0x8897a0*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA7A00 + 0x10))(unk_BA7A00, 1); /*0x8897b1*/
  if ( unk_BA8038 ) /*0x8897b3*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)unk_BA8038 + 8))(unk_BA8038, 1); /*0x8897c4*/
  sub_8905B0(); /*0x8897c6*/
  sub_891010(); /*0x8897cb*/
  v0 = unk_BA7904; /*0x8897d0*/
  if ( unk_BA7904 ) /*0x8897d0*/
  {
    v1 = (void (__thiscall ***)(_DWORD, int))unk_BA7904; /*0x8897de*/
    if ( *(_WORD *)(v0 + 4) ) /*0x8897d9*/
    {
      if ( !--*(_WORD *)(v0 + 6) ) /*0x8897ea*/
        (**v1)(v1, 1); /*0x8897f6*/
    }
    unk_BA7904 = 0; /*0x8897f8*/
  }
  if ( unk_BA8040 == 1 ) /*0x8bbb97*/
  {
    sub_8BB990(); /*0x8bbb9d*/
    v2 = unk_BA7FB0; /*0x8bbba2*/
    if ( unk_BA7FB0 ) /*0x8bbba2*/
    {
      v3 = (void (__thiscall ***)(_DWORD, int))unk_BA7FB0; /*0x8bbbb0*/
      if ( *(_WORD *)(v2 + 4) ) /*0x8bbbab*/
      {
        v4 = (_WORD *)(v2 + 6); /*0x8bbbb4*/
        if ( !--*v4 ) /*0x8bbbba*/
          (**v3)(v3, 1); /*0x8bbbc4*/
      }
    }
    v5 = unk_BA7FB4; /*0x8bbbc6*/
    v6 = unk_BA7FB4 == 0; /*0x8bbbcb*/
    unk_BA7FB0 = 0; /*0x8bbbcd*/
    if ( !v6 ) /*0x8bbbd7*/
    {
      v7 = (void (__thiscall ***)(_DWORD, int))v5; /*0x8bbbde*/
      if ( *(_WORD *)(v5 + 4) ) /*0x8bbbd9*/
      {
        v8 = (_WORD *)(v5 + 6); /*0x8bbbe2*/
        if ( !--*v8 ) /*0x8bbbe8*/
          (**v7)(v7, 1); /*0x8bbbf2*/
      }
    }
    unk_BA7FB4 = 0; /*0x8bbbf4*/
    sub_8BAA10(); /*0x8bbbfe*/
    v9 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8bbc12*/
    if ( !v9 ) /*0x8bbc1a*/
      v9 = unk_BA7D9C; /*0x8bbc1c*/
    (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 4))(v9); /*0x8bbc24*/
    sub_8A7260(0); /*0x8bbc29*/
    if ( unk_BA7D9C ) /*0x8bbc2e*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)unk_BA7D9C + 4))(unk_BA7D9C); /*0x8bbc3d*/
      sub_8A7210((_DWORD *)unk_BA7D9C); /*0x8bbc46*/
    }
    sub_8A70F0(0); /*0x8bbc4d*/
    unk_BA8040 = 0; /*0x8bbc55*/
  }
  return 0; /*0x8bbc5e*/
}
