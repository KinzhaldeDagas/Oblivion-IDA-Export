_DWORD *__cdecl sub_8FB730(__m128 **a1, int a2, int a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x20, 0x1C); /*0x8fb744*/
  *(_DWORD *)(v4 + 8) = a4; /*0x8fb74a*/
  *(_WORD *)(v4 + 4) = 0x20; /*0x8fb74d*/
  *(_WORD *)(v4 + 6) = 1; /*0x8fb753*/
  *(_DWORD *)v4 = &off_A9B840; /*0x8fb759*/
  *(_WORD *)(v4 + 0xC) = 0xFFFF; /*0x8fb75f*/
  sub_8D1DB0(*a1 + 1, (float *)(v4 + 0x10)); /*0x8fb76f*/
  *(_DWORD *)v4 = &off_A9B874; /*0x8fb777*/
  return (_DWORD *)v4; /*0x8fb77f*/
}
