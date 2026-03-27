_DWORD *__thiscall sub_8E89D0(_WORD *this, int a2, int a3)
{
  sub_9156C0(this);
  *(_DWORD *)this = &off_A9AC24;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0x80000000;
  sub_8E88A0((const void **)this, a2, a3, 0);
  return this;
}
