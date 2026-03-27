_WORD *__thiscall sub_8BC270(_WORD *this, int a2)
{
  _WORD *v3; // eax

  *(this + 3) = 1;
  *(_DWORD *)this = &off_A98328;
  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x14, 0x17);
  v3[2] = 0x14;
  *((_DWORD *)this + 2) = sub_8BC030(v3, a2, 1);
  return this;
}
