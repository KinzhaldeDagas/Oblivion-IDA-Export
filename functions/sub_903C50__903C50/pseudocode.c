_DWORD *__cdecl sub_903C50(_DWORD *a1, int a2, int *a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x28, 0x1C); /*0x903c6d*/
  *(_WORD *)(v4 + 4) = 0x28; /*0x903c78*/
  sub_9037A0((_DWORD *)v4, a2, a1, a3, a4); /*0x903c7e*/
  *(_DWORD *)v4 = &off_A9BCDC; /*0x903c83*/
  return (_DWORD *)v4; /*0x903c8b*/
}
