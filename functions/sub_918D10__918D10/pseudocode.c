int __cdecl sub_918D10(_DWORD *a1)
{
  int v1; // esi

  v1 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x50, 0x32);
  *(_WORD *)(v1 + 4) = 0x50;
  sub_9491F0((_WORD *)v1, a1);
  *(_DWORD *)v1 = &off_A9D270;
  *(_DWORD *)(v1 + 8) = &off_A9D258;
  *(_DWORD *)(v1 + 0x20) = off_A9D250;
  sub_948D00((_WORD *)(v1 + 0x28), 0x7A120);
  return v1 + 8;
}
