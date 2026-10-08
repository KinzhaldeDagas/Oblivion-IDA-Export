_DWORD *__cdecl sub_919F80(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x48, 0x32); /*0x919f8c*/
  v1[2] = 0x48; /*0x919f96*/
  v2 = sub_919D90(v1, a1); /*0x919f9c*/
  if ( v2 ) /*0x919fa3*/
    return v2 + 2; /*0x919fa5*/
  else
    return 0; /*0x919fa9*/
}
