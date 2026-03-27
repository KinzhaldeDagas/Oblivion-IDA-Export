_DWORD *__usercall sub_943070@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  int v3; // esi
  void *v4; // eax
  void **i; // ebx
  int v6; // esi
  char **v7; // eax
  char ***j; // ebx
  int v9; // esi

  *(_WORD *)(a1 + 6) = 1;
  *(_DWORD *)a1 = &off_AA2768;
  v3 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x12);
  *(_WORD *)(v3 + 4) = 0x14;
  *(_WORD *)(v3 + 6) = 1;
  *(_DWORD *)v3 = &off_AA2738;
  sub_942B70((char **)(v3 + 8), a2);
  *(_DWORD *)(a1 + 8) = v3;
  v4 = off_A9AA48;
  for ( i = &off_A9AA48; v4; ++i )
  {
    (*(void (__thiscall **)(int, void *, _DWORD))(*(_DWORD *)v3 + 8))(v3, v4, 0);
    v4 = i[1];
  }
  v6 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x12);
  *(_WORD *)(v6 + 4) = 0x14;
  *(_WORD *)(v6 + 6) = 1;
  *(_DWORD *)v6 = &off_AA2748;
  sub_942B70((char **)(v6 + 8), (int)i);
  *(_DWORD *)(a1 + 0xC) = v6;
  v7 = off_A9A910[0];
  for ( j = off_A9A910; v7; ++j )
  {
    (*(void (__thiscall **)(int, char **))(*(_DWORD *)v6 + 8))(v6, v7);
    v7 = j[1];
  }
  v9 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x12);
  *(_WORD *)(v9 + 4) = 0x14;
  *(_WORD *)(v9 + 6) = 1;
  *(_DWORD *)v9 = &off_AA2758;
  sub_8B0E10((char **)(v9 + 8), (int)j);
  *(_DWORD *)(a1 + 0x10) = v9;
  sub_9546D0((void *)v9, off_A9A910, (int)&off_A9AA48);
  return (_DWORD *)a1;
}
