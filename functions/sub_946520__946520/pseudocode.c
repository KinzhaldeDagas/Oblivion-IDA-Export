_WORD *__cdecl sub_946520(_DWORD *a1)
{
  _WORD *v1; // eax
  _WORD *v2; // eax

  v1 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x30, 0x32); /*0x94652c*/
  v1[2] = 0x30; /*0x946536*/
  v2 = sub_9463E0(v1, a1); /*0x94653c*/
  if ( v2 ) /*0x946543*/
    return v2 + 4; /*0x946545*/
  else
    return 0; /*0x946549*/
}
