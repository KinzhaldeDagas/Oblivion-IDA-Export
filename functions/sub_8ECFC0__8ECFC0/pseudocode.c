char *__thiscall sub_8ECFC0(char *this, int a2, _OWORD *a3, int a4)
{
  sub_8ABC40(this, a2, a3);
  *(_DWORD *)this = &off_A9AFFC;
  *((_DWORD *)this + 0x48) = 0;
  *((_DWORD *)this + 0x49) = 0;
  *((_DWORD *)this + 0x4A) = 0x80000000;
  *((_DWORD *)this + 0xC) = a4;
  return this;
}
