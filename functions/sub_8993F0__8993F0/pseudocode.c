int __usercall sub_8993F0@<eax>(int a1@<eax>, char *a2)
{
  _WORD *v3; // eax
  _WORD *v4; // edi
  _WORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  int result; // eax

  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x1F); /*0x89940a*/
  v3[2] = 0xC; /*0x899410*/
  v4 = sub_8DBB90(v3, a1); /*0x899424*/
  v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC, 0x1F); /*0x899426*/
  v5[2] = 0xC; /*0x89942c*/
  v6 = sub_8DB4E0(v5, a1); /*0x89943d*/
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10, 4); /*0x899446*/
  *(_WORD *)(v7 + 4) = 0x10; /*0x89944e*/
  *(_WORD *)(v7 + 6) = 1; /*0x899454*/
  *(_DWORD *)v7 = &off_A96B58; /*0x899458*/
  *(_WORD *)(v7 + 0xE) = 1; /*0x899461*/
  *(_DWORD *)(v7 + 8) = &off_A96AB4; /*0x899465*/
  sub_8DA3F0(a2, (int)v4, 1); /*0x89946c*/
  sub_8DA3F0(a2, (int)v6, 2); /*0x899476*/
  result = sub_8DA3F0(a2, v7, 3); /*0x899480*/
  if ( v4[2] ) /*0x899485*/
  {
    if ( !--v4[3] ) /*0x899490*/
      result = (**(int (__thiscall ***)(_WORD *, int))v4)(v4, 1); /*0x89949d*/
  }
  if ( v6[2] ) /*0x89949f*/
  {
    if ( !--v6[3] ) /*0x8994aa*/
      result = (**(int (__thiscall ***)(_WORD *, int))v6)(v6, 1); /*0x8994b8*/
  }
  if ( *(_WORD *)(v7 + 4) ) /*0x8994ba*/
  {
    if ( !--*(_WORD *)(v7 + 6) ) /*0x8994c5*/
      return (**(int (__thiscall ***)(int, int))v7)(v7, 1); /*0x8994d2*/
  }
  return result; /*0x8994d4*/
}
