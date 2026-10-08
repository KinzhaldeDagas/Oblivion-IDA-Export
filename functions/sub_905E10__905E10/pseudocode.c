_DWORD *__cdecl sub_905E10(_DWORD *a1, int *a2, int *a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x38, 0x1C); /*0x905e2d*/
  *(_WORD *)(v4 + 4) = 0x38; /*0x905e38*/
  sub_905990((_DWORD *)v4, a2, a1, a3, a4); /*0x905e3e*/
  *(_DWORD *)v4 = &off_A9BE0C; /*0x905e43*/
  return (_DWORD *)v4; /*0x905e4b*/
}
