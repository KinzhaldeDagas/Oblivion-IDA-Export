_WORD *__cdecl sub_919410(_DWORD *a1)
{
  _WORD *v1; // eax
  _WORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x48, 0x32); /*0x91941c*/
  v1[2] = 0x48; /*0x919426*/
  v2 = sub_9191D0(v1, a1); /*0x91942c*/
  if ( v2 ) /*0x919433*/
    return v2 + 4; /*0x919435*/
  else
    return 0; /*0x919439*/
}
