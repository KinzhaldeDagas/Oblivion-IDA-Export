int __thiscall sub_942BD0(char **this, int a2)
{
  char *v3; // ebp
  int v4; // esi
  char *v5; // eax
  int v6; // ebx
  char **v8; // [esp+14h] [ebp+4h]

  v3 = *this; /*0x942be5*/
  v4 = (int)(*(this + 2) + 1); /*0x942bf0*/
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0xC * a2, 0x14); /*0x942bf1*/
  *this = v5; /*0x942c02*/
  sub_8B18C0(a2, v5, 0xFF, 4 * a2); /*0x942c04*/
  *(this + 2) = (char *)(a2 - 1); /*0x942c0d*/
  v6 = 0; /*0x942c10*/
  *(this + 1) = 0; /*0x942c14*/
  if ( v4 > 0 ) /*0x942c1b*/
  {
    v8 = (char **)&v3[4 * v4]; /*0x942c21*/
    do /*0x942c50*/
    {
      if ( *(_DWORD *)&v3[4 * v6] != 0xFFFFFFFF ) /*0x942c2a*/
        sub_9429D0(this, *v8, *(_DWORD *)&v3[8 * v4 + 4 * v6]); /*0x942c3d*/
      ++v6; /*0x942c46*/
      ++v8; /*0x942c4c*/
    }
    while ( v6 < v4 ); /*0x942c50*/
  }
  return (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v3, 0xC * v4, 0x14); /*0x942c67*/
}
