_WORD *__cdecl sub_91BF60(_DWORD *a1)
{
  _WORD *v1; // eax
  _WORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x40, 0x32); /*0x91bf6c*/
  v1[2] = 0x40; /*0x91bf76*/
  v2 = sub_91BD70(v1, a1); /*0x91bf7c*/
  if ( v2 ) /*0x91bf83*/
    return v2 + 4; /*0x91bf85*/
  else
    return 0; /*0x91bf89*/
}
