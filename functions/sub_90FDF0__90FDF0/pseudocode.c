_DWORD *__thiscall sub_90FDF0(_DWORD *this, _WORD *a2, int a3, int a4)
{
  sub_8E7B70(this, a2, a3, a4);
  *this = &off_A9CB64;
  *(this + 0xC) = 0x3DCCCCCD;
  *(this + 0xD) = 0x3C23D70A;
  *((_OWORD *)this + 2) = 0;
  *(this + 0xB) = 0x3F800000;
  return this;
}
