int __usercall sub_8993F0@<eax>(int a1@<eax>, char *a2)
{
  _WORD *v3; // eax
  _WORD *v4; // edi
  _WORD *v5; // eax
  _WORD *v6; // ebp
  int v7; // esi
  int result; // eax

  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x1F);
  v3[2] = 0xC;
  v4 = sub_8DBB90(v3, a1);
  v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x1F);
  v5[2] = 0xC;
  v6 = sub_8DB4E0(v5, a1);
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x10, 4);
  *(_WORD *)(v7 + 4) = 0x10;
  *(_WORD *)(v7 + 6) = 1;
  *(_DWORD *)v7 = &off_A96B58;
  *(_WORD *)(v7 + 0xE) = 1;
  *(_DWORD *)(v7 + 8) = &off_A96AB4;
  sub_8DA3F0(a2, (int)v4, 1);
  sub_8DA3F0(a2, (int)v6, 2);
  result = sub_8DA3F0(a2, v7, 3);
  if ( v4[2] )
  {
    if ( !--v4[3] )
      result = (**(int (__thiscall ***)(_WORD *, int))v4)(v4, 1);
  }
  if ( v6[2] )
  {
    if ( !--v6[3] )
      result = (**(int (__thiscall ***)(_WORD *, int))v6)(v6, 1);
  }
  if ( *(_WORD *)(v7 + 4) )
  {
    if ( !--*(_WORD *)(v7 + 6) )
      return (**(int (__thiscall ***)(int, int))v7)(v7, 1);
  }
  return result;
}
