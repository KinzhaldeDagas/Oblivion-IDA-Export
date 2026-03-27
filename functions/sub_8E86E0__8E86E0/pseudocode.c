_DWORD *__thiscall sub_8E86E0(_WORD *this, int a2, int a3)
{
  sub_8E89D0(this, a2, a3);
  *(_DWORD *)this = &off_A9ABC4;
  *((_DWORD *)this + 7) = 0x3F800000;
  return this;
}
