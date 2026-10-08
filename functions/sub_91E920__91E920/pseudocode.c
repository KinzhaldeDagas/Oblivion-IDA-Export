_DWORD *__cdecl sub_91E920(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x38, 0xE); /*0x91e92c*/
  v1[2] = 0x38; /*0x91e936*/
  v2 = sub_91E7B0(v1, a1); /*0x91e93c*/
  if ( v2 ) /*0x91e943*/
    return v2 + 2; /*0x91e945*/
  else
    return 0; /*0x91e949*/
}
