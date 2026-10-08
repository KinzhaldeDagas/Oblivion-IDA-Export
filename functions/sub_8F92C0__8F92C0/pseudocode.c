int __cdecl sub_8F92C0(int a1, __m128 **a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x1C); /*0x8f92d4*/
  *(_WORD *)(v4 + 0xC) = 0xFFFF; /*0x8f92db*/
  *(_WORD *)(v4 + 0xE) = 0xFFFF; /*0x8f92df*/
  *(_WORD *)(v4 + 0x10) = 0xFFFF; /*0x8f92e3*/
  *(_DWORD *)(v4 + 8) = a4; /*0x8f92eb*/
  *(_WORD *)(v4 + 4) = 0x28; /*0x8f92ee*/
  *(_WORD *)(v4 + 6) = 1; /*0x8f92f4*/
  *(_DWORD *)v4 = &off_A9B6F0; /*0x8f92fa*/
  sub_8D1EF0(*a2 + 1, (float *)(v4 + 0x14)); /*0x8f930a*/
  return v4; /*0x8f9314*/
}
