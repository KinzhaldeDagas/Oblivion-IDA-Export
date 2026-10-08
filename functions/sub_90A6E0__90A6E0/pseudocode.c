_DWORD *__cdecl sub_90A6E0(_DWORD *a1, int *a2, int *a3, int a4)
{
  int v4; // esi

  v4 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x38, 0x1C); /*0x90a6fd*/
  *(_WORD *)(v4 + 4) = 0x38; /*0x90a708*/
  sub_90A260((_DWORD *)v4, a2, a1, a3, a4); /*0x90a70e*/
  *(_DWORD *)v4 = &off_A9BF44; /*0x90a713*/
  return (_DWORD *)v4; /*0x90a71b*/
}
