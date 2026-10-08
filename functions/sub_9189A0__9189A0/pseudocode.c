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

  v2 = *(this + 0xF); /*0x9189a4*/
  v3 = 0; /*0x9189a8*/
  *this = (int)&off_A9D230; /*0x9189ac*/
  *(this + 2) = (int)&off_A9D214; /*0x9189b2*/
  *(this + 3) = (int)&off_A9D1FC; /*0x9189b9*/
  if ( v2 > 0 ) /*0x9189c0*/
  {
    do /*0x9189d8*/
    {
      v4 = *(void (__thiscall ****)(_DWORD, int))(*(this + 0xE) + 4 * v3); /*0x9189c5*/
      if ( v4 ) /*0x9189ca*/
        (**v4)(v4, 1); /*0x9189d0*/
      ++v3; /*0x9189d5*/
    }
    while ( v3 < *(this + 0xF) ); /*0x9189d8*/
  }
  v5 = (void (__thiscall ***)(_DWORD, int))*(this + 5); /*0x9189da*/
  if ( v5 ) /*0x9189df*/
    (**v5)(v5, 1); /*0x9189e5*/
  v6 = (void (__thiscall ***)(_DWORD, int))*(this + 6); /*0x9189e7*/
  if ( v6 ) /*0x9189ec*/
    (**v6)(v6, 1); /*0x9189f2*/
  v7 = (void (__thiscall ***)(_DWORD, int))*(this + 7); /*0x9189f4*/
  if ( v7 ) /*0x9189f9*/
    (**v7)(v7, 1); /*0x9189ff*/
  v8 = *(this + 0x13); /*0x918a01*/
  v9 = MEMORY[0xBA9DE4]; /*0x918a06*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x918a0c*/
  if ( v8 >= 0 ) /*0x918a13*/
  {
    v11 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x918a18*/
    if ( !v11 ) /*0x918a20*/
      v11 = unk_BA7D9C; /*0x918a22*/
    sub_8A75D0(v11, (_DWORD *)*(this + 0x11), 4 * v8, 0x14); /*0x918a37*/
  }
  v12 = *(this + 0x10); /*0x918a3c*/
  if ( v12 >= 0 ) /*0x918a41*/
  {
    v13 = *(_DWORD *)(ThreadLocalStoragePointer[v9] + 0x19C); /*0x918a46*/
    if ( !v13 ) /*0x918a4e*/
      v13 = unk_BA7D9C; /*0x918a50*/
    sub_8A75D0(v13, (_DWORD *)*(this + 0xE), 4 * v12, 0x14); /*0x918a65*/
  }
  result = sub_8B0E60(this + 0xB); /*0x918a6d*/
  *(this + 9) = (int)&hkBaseObject::`vftable'; /*0x918a72*/
  *(this + 3) = (int)&off_A9D1C0; /*0x918a79*/
  *(this + 2) = (int)&off_A9D1D8; /*0x918a80*/
  *this = (int)&hkBaseObject::`vftable'; /*0x918a88*/
  return result; /*0x918a87*/
}
