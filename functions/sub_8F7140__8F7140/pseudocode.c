_DWORD *__cdecl sub_8F7140(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x1C); /*0x8f715d*/
  *(_WORD *)(v4 + 4) = 0x40; /*0x8f7168*/
  sub_8F6720((_DWORD *)v4, a2, a1, a3, a4); /*0x8f716e*/
  *(_DWORD *)v4 = &off_A9B580; /*0x8f7173*/
  return (_DWORD *)v4; /*0x8f717b*/
}
