_DWORD *__cdecl sub_8F8090(__m128 **a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x2C, 0x1C); /*0x8f80a4*/
  *(_DWORD *)(v4 + 8) = a4; /*0x8f80a6*/
  *(_WORD *)(v4 + 4) = 0x2C; /*0x8f80b0*/
  *(_WORD *)(v4 + 6) = 1; /*0x8f80b6*/
  *(_DWORD *)v4 = &off_A9B63C; /*0x8f80bc*/
  *(_DWORD *)(v4 + 0x1C) = 0xFFFFFFFF; /*0x8f80c2*/
  *(_DWORD *)(v4 + 0x20) = 0xFFFFFFFF; /*0x8f80c5*/
  *(_DWORD *)(v4 + 0x24) = 0xFFFFFFFF; /*0x8f80c8*/
  *(_DWORD *)(v4 + 0x28) = 0xFFFFFFFF; /*0x8f80cb*/
  sub_8D1DB0(*a1 + 1, (float *)(v4 + 0xC)); /*0x8f80d8*/
  *(_DWORD *)v4 = &off_A9B670; /*0x8f80e0*/
  return (_DWORD *)v4; /*0x8f80e8*/
}
