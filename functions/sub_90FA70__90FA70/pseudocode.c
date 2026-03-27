_DWORD *__thiscall sub_90FA70(_DWORD *this, _WORD *a2, int a3, int a4)
{
  sub_8E7B70(this, a2, a3, a4);
  *this = &off_A9CB30;
  *(this + 0x14) = 0x3F800000;
  *(this + 0x15) = 0x447A0000;
  *(this + 0x16) = 0x3DCCCCCD;
  *((_BYTE *)this + 0x5C) = 1;
  *((_BYTE *)this + 0x5D) = 1;
  return this;
}
