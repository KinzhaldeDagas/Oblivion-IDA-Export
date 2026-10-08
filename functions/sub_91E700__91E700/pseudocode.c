_DWORD *__cdecl sub_91E700(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x38, 0xE); /*0x91e70c*/
  v1[2] = 0x38; /*0x91e716*/
  v2 = sub_91E3F0(v1, a1); /*0x91e71c*/
  if ( v2 ) /*0x91e723*/
    return v2 + 2; /*0x91e725*/
  else
    return 0; /*0x91e729*/
}
