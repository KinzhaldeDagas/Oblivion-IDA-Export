_WORD *__thiscall sub_8D3330(_WORD *this, int a2)
{
  _WORD *v3; // eax
  _WORD *v4; // eax

  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9A030;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0x80000000;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = a2;
  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0xC, 0x12);
  v3[2] = 0xC;
  v4 = sub_91FEB0(v3);
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 8) = v4;
  return this;
}
