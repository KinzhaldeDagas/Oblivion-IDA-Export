_DWORD *__cdecl sub_91CBB0(_DWORD *a1)
{
  _WORD *v1; // eax
  _DWORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x3C, 0x32); /*0x91cbbc*/
  v1[2] = 0x3C; /*0x91cbc6*/
  v2 = sub_91C9D0(v1, a1); /*0x91cbcc*/
  if ( v2 ) /*0x91cbd3*/
    return v2 + 2; /*0x91cbd5*/
  else
    return 0; /*0x91cbd9*/
}
