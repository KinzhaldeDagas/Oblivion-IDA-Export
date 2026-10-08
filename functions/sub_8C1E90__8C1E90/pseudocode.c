int __thiscall sub_8C1E90(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // eax
  _WORD *v5; // eax

  v4 = a2; /*0x8c1eb3*/
  if ( !a2 ) /*0x8c1eb9*/
  {
    v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x4C, 0x29); /*0x8c1eca*/
    v5[2] = 0x4C; /*0x8c1ecc*/
    v4 = sub_913180(v5); /*0x8c1ee0*/
  }
  return sub_911D50(this, v4, a3); /*0x8c1efa*/
}
