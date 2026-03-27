_DWORD *__cdecl sub_8F7140(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x1C);
  *(_WORD *)(v4 + 4) = 0x40;
  sub_8F6720((_DWORD *)v4, a2, a1, a3, a4);
  *(_DWORD *)v4 = &off_A9B580;
  return (_DWORD *)v4;
}
