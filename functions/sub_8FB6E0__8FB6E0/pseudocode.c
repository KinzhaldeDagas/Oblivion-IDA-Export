int __cdecl sub_8FB6E0(int a1, __m128 **a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x1C); /*0x8fb6f4*/
  *(_DWORD *)(v4 + 8) = a4; /*0x8fb6fa*/
  *(_WORD *)(v4 + 4) = 0x20; /*0x8fb6fd*/
  *(_WORD *)(v4 + 6) = 1; /*0x8fb703*/
  *(_DWORD *)v4 = &off_A9B840; /*0x8fb709*/
  *(_WORD *)(v4 + 0xC) = 0xFFFF; /*0x8fb70f*/
  sub_8D1DB0(*a2 + 1, (float *)(v4 + 0x10)); /*0x8fb71f*/
  return v4; /*0x8fb729*/
}
