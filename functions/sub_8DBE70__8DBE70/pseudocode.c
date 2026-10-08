char *__thiscall sub_8DBE70(int *this, int a2, int a3, int a4)
{
  _WORD *v4; // esi
  int v6; // edi
  int v7; // eax

  v4 = (_WORD *)(a2 + *(_DWORD *)(a2 + 0x10)); /*0x8dbe7a*/
  v6 = a3 + *(_DWORD *)(a3 + 0x10); /*0x8dbe8d*/
  v7 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x9C, 0x1F); /*0x8dbe96*/
  *(_WORD *)(v7 + 4) = 0x9C; /*0x8dbe9a*/
  return sub_8DBD90((char *)v7, *(this + 2), v4, v6); /*0x8dbeac*/
}
