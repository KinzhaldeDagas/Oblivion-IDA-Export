int __thiscall sub_911D50(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // eax
  _WORD *v5; // eax

  v4 = a2; /*0x911d73*/
  if ( !a2 ) /*0x911d79*/
  {
    v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)unk_BA7D98 + 0x10))(unk_BA7D98, 0x4C, 0x29); /*0x911d8a*/
    v5[2] = 0x4C; /*0x911d8c*/
    v4 = sub_913180(v5); /*0x911da0*/
  }
  return sub_8A07B0(this, (int)v4, a3); /*0x911dba*/
}
