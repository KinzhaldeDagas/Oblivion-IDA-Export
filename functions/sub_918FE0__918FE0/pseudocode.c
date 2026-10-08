int __cdecl sub_918FE0(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x34, 0x32); /*0x918ff4*/
  *(_WORD *)(v1 + 4) = 0x34; /*0x918ff9*/
  sub_9491F0((_WORD *)v1, a1); /*0x918fff*/
  *(_DWORD *)v1 = &off_A9D2A0; /*0x919009*/
  *(_DWORD *)(v1 + 0x20) = off_A9D280; /*0x91900f*/
  *(_DWORD *)(v1 + 0x28) = 0; /*0x919016*/
  *(_DWORD *)(v1 + 0x2C) = 0; /*0x919019*/
  *(_DWORD *)(v1 + 0x30) = 0x447A0000; /*0x91901c*/
  *(_DWORD *)(v1 + 8) = &off_A9D288; /*0x919023*/
  return v1 + 8; /*0x919029*/
}
