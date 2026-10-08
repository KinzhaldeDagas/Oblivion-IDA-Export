_DWORD *__cdecl sub_901A40(int a1, _DWORD *a2, int a3, int a4)
{
  _WORD *v4; // esi

  v4 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x18, 0x1C); /*0x901a5d*/
  v4[2] = 0x18; /*0x901a68*/
  sub_901690(v4, a2, a1, a3, a4); /*0x901a6e*/
  *(_DWORD *)v4 = &off_A9BB44; /*0x901a73*/
  return v4; /*0x901a7b*/
}
