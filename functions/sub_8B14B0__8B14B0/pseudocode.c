int __thiscall sub_8B14B0(char **this, int a2)
{
  char *v3; // ebp
  int v4; // edi
  char *v5; // eax
  int v6; // ebx
  int *v8; // [esp+14h] [ebp+4h]

  v3 = *this; /*0x8b14c5*/
  v4 = (int)(*(this + 2) + 1); /*0x8b14cf*/
  v5 = (char *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x10 * a2, 0x14); /*0x8b14d0*/
  *this = v5; /*0x8b14de*/
  sub_8B18C0(a2, v5, 0, 8 * a2); /*0x8b14e0*/
  *(this + 2) = (char *)(a2 - 1); /*0x8b14e9*/
  v6 = 0; /*0x8b14ec*/
  *(this + 1) = 0; /*0x8b14f0*/
  if ( v4 > 0 ) /*0x8b14f7*/
  {
    v8 = (int *)&v3[8 * v4]; /*0x8b14fd*/
    do /*0x8b1535*/
    {
      if ( *(_QWORD *)&v3[8 * v6] ) /*0x8b1509*/
        sub_8B1170(this, *(_QWORD *)&v3[8 * v6], *v8, v8[1]); /*0x8b1522*/
      ++v6; /*0x8b152b*/
      v8 += 2; /*0x8b1531*/
    }
    while ( v6 < v4 ); /*0x8b1535*/
  }
  return (*(int (__thiscall **)(int, char *, int, int))(*(_DWORD *)unk_BA7D98 + 0x14))(unk_BA7D98, v3, 0x10 * v4, 0x14); /*0x8b1549*/
}
