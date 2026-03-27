int __cdecl sub_918FE0(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x34, 0x32);
  *(_WORD *)(v1 + 4) = 0x34;
  sub_9491F0((_WORD *)v1, a1);
  *(_DWORD *)v1 = &off_A9D2A0;
  *(_DWORD *)(v1 + 0x20) = off_A9D280;
  *(_DWORD *)(v1 + 0x28) = 0;
  *(_DWORD *)(v1 + 0x2C) = 0;
  *(_DWORD *)(v1 + 0x30) = 0x447A0000;
  *(_DWORD *)(v1 + 8) = &off_A9D288;
  return v1 + 8;
}
