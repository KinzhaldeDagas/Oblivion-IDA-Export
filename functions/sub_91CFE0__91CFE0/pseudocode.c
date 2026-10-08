_DWORD *__cdecl sub_91CFE0(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x3C, 0x32); /*0x91cfec*/
  v1[2] = 0x3C; /*0x91cff6*/
  v2 = sub_91CD70(v1, a1); /*0x91cffc*/
  if ( v2 ) /*0x91d003*/
    return v2 + 2; /*0x91d005*/
  else
    return 0; /*0x91d009*/
}
