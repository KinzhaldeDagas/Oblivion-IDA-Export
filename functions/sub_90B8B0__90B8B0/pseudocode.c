_DWORD *__cdecl sub_90B8B0(_DWORD *a1, int *a2, int *a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x14, 0x1C); /*0x90b8cd*/
  *(_WORD *)(v4 + 4) = 0x14; /*0x90b8d8*/
  sub_90A8B0((_DWORD *)v4, a2, a1, a3, a4); /*0x90b8de*/
  *(_DWORD *)v4 = &off_A9BFD8; /*0x90b8e3*/
  return (_DWORD *)v4; /*0x90b8eb*/
}
