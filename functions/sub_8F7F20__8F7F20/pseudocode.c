_DWORD *__cdecl sub_8F7F20(int a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x1C); /*0x8f7f3d*/
  *(_WORD *)(v4 + 4) = 0x20; /*0x8f7f48*/
  sub_8F78F0((_DWORD *)v4, a2, a1, a3, a4); /*0x8f7f4e*/
  *(_DWORD *)v4 = &off_A9B600; /*0x8f7f53*/
  return (_DWORD *)v4; /*0x8f7f5b*/
}
