_DWORD *__cdecl sub_91B650(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x3C, 0x32); /*0x91b65c*/
  v1[2] = 0x3C; /*0x91b666*/
  v2 = sub_91B4B0(v1, a1); /*0x91b66c*/
  if ( v2 ) /*0x91b673*/
    return v2 + 2; /*0x91b675*/
  else
    return 0; /*0x91b679*/
}
