int __cdecl sub_91E010(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x2C, 0x32); /*0x91e024*/
  *(_WORD *)(v1 + 4) = 0x2C; /*0x91e029*/
  sub_9491F0((_WORD *)v1, a1); /*0x91e02f*/
  *(_DWORD *)(v1 + 0x28) = &hkCollisionListener::`vftable'; /*0x91e034*/
  *(_DWORD *)v1 = &off_A9D81C; /*0x91e03e*/
  *(_DWORD *)(v1 + 0x20) = off_A9D7FC; /*0x91e044*/
  *(_DWORD *)(v1 + 0x28) = off_A9D7E8; /*0x91e04b*/
  *(_DWORD *)(v1 + 8) = &off_A9D804; /*0x91e052*/
  return v1 + 8; /*0x91e058*/
}
