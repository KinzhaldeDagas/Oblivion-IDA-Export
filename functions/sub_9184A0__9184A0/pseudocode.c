_WORD *__thiscall sub_9184A0(_WORD *this, int a2, char a3)
{
  _WORD *v4; // eax

  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9D1B8;
  *((_BYTE *)this + 0xC) = a3;
  v4 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x17);
  v4[2] = 0x14;
  *((_DWORD *)this + 2) = sub_8BC030(v4, a2, 1);
  return this;
}
