_DWORD *__cdecl sub_8F6780(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // eax

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x1C);
  *(_WORD *)(v4 + 4) = 0x40;
  return sub_8F6720((_DWORD *)v4, a1, a2, a3, a4);
}
