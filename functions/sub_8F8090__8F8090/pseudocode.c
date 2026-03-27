_DWORD *__cdecl sub_8F8090(__m128 **a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x2C, 0x1C);
  *(_DWORD *)(v4 + 8) = a4;
  *(_WORD *)(v4 + 4) = 0x2C;
  *(_WORD *)(v4 + 6) = 1;
  *(_DWORD *)v4 = &off_A9B63C;
  *(_DWORD *)(v4 + 0x1C) = 0xFFFFFFFF;
  *(_DWORD *)(v4 + 0x20) = 0xFFFFFFFF;
  *(_DWORD *)(v4 + 0x24) = 0xFFFFFFFF;
  *(_DWORD *)(v4 + 0x28) = 0xFFFFFFFF;
  sub_8D1DB0(*a1 + 1, (float *)(v4 + 0xC));
  *(_DWORD *)v4 = &off_A9B670;
  return (_DWORD *)v4;
}
