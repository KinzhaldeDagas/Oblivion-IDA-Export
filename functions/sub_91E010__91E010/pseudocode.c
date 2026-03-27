int __cdecl sub_91E010(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x2C, 0x32);
  *(_WORD *)(v1 + 4) = 0x2C;
  sub_9491F0((_WORD *)v1, a1);
  *(_DWORD *)(v1 + 0x28) = &hkCollisionListener::`vftable';
  *(_DWORD *)v1 = &off_A9D81C;
  *(_DWORD *)(v1 + 0x20) = off_A9D7FC;
  *(_DWORD *)(v1 + 0x28) = off_A9D7E8;
  *(_DWORD *)(v1 + 8) = &off_A9D804;
  return v1 + 8;
}
