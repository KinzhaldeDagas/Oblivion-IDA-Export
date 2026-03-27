int __cdecl sub_8FB6E0(int a1, __m128 **a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x20, 0x1C);
  *(_DWORD *)(v4 + 8) = a4;
  *(_WORD *)(v4 + 4) = 0x20;
  *(_WORD *)(v4 + 6) = 1;
  *(_DWORD *)v4 = &off_A9B840;
  *(_WORD *)(v4 + 0xC) = 0xFFFF;
  sub_8D1DB0(*a2 + 1, (float *)(v4 + 0x10));
  return v4;
}
