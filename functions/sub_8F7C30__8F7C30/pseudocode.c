_DWORD *__cdecl sub_8F7C30(int a1, int a2, int a3, int a4)
{
  int v4; // eax

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x1C);
  *(_WORD *)(v4 + 4) = 0x20;
  return sub_8F78F0((_DWORD *)v4, a1, a2, a3, a4);
}
