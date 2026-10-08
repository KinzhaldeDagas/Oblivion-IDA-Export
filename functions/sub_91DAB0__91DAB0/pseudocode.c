int __cdecl sub_91DAB0(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x2C, 0x32); /*0x91dac4*/
  *(_WORD *)(v1 + 4) = 0x2C; /*0x91dac9*/
  sub_9491F0((_WORD *)v1, a1); /*0x91dacf*/
  *(_DWORD *)(v1 + 0x28) = &hkCollisionListener::`vftable'; /*0x91dad4*/
  *(_DWORD *)v1 = &off_A9D7C4; /*0x91dade*/
  *(_DWORD *)(v1 + 0x20) = off_A9D7FC; /*0x91dae4*/
  *(_DWORD *)(v1 + 0x28) = off_A9D798; /*0x91daeb*/
  *(_DWORD *)(v1 + 8) = &off_A9D7AC; /*0x91daf2*/
  return v1 + 8; /*0x91daf8*/
}
