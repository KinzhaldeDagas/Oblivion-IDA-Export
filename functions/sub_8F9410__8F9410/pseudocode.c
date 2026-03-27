_DWORD *__cdecl sub_8F9410(__m128 **a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x28, 0x1C);
  *(_WORD *)(v4 + 0xC) = 0xFFFF;
  *(_WORD *)(v4 + 0xE) = 0xFFFF;
  *(_WORD *)(v4 + 0x10) = 0xFFFF;
  *(_DWORD *)(v4 + 8) = a4;
  *(_WORD *)(v4 + 4) = 0x28;
  *(_WORD *)(v4 + 6) = 1;
  *(_DWORD *)v4 = &off_A9B6F0;
  sub_8D1EF0(*a1 + 1, (float *)(v4 + 0x14));
  *(_DWORD *)v4 = &off_A9B724;
  return (_DWORD *)v4;
}
