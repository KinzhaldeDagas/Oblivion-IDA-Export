int __cdecl sub_918D10(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x50, 0x32); /*0x918d25*/
  *(_WORD *)(v1 + 4) = 0x50; /*0x918d2a*/
  sub_9491F0((_WORD *)v1, a1); /*0x918d30*/
  *(_DWORD *)v1 = &off_A9D270; /*0x918d40*/
  *(_DWORD *)(v1 + 8) = &off_A9D258; /*0x918d46*/
  *(_DWORD *)(v1 + 0x20) = off_A9D250; /*0x918d4c*/
  sub_948D00((_WORD *)(v1 + 0x28), 0x7A120); /*0x918d53*/
  return v1 + 8; /*0x918d5a*/
}
