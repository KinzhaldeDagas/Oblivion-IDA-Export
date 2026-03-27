int __thiscall sub_8C1E90(_DWORD *this, _WORD *a2, int a3)
{
  _WORD *v4; // eax
  _WORD *v5; // eax

  v4 = a2;
  if ( !a2 )
  {
    v5 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x4C, 0x29);
    v5[2] = 0x4C;
    v4 = sub_913180(v5);
  }
  return sub_911D50(this, v4, a3);
}
