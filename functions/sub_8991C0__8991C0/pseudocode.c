_WORD *__thiscall sub_8991C0(_DWORD *this)
{
  _WORD *v2; // eax
  _WORD *v3; // ebx

  v2 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x40, 0x2C);
  v2[2] = 0x40;
  v3 = sub_8D9EC0(v2);
  sub_898F10(this, v3);
  sub_899130(this, v3);
  sub_899030(v3, this);
  sub_899090(this, v3);
  return v3;
}
