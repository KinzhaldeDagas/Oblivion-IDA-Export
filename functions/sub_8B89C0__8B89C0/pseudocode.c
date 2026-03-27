_DWORD *__thiscall sub_8B89C0(_DWORD *this, _OWORD *a2, _OWORD *a3, int a4, int a5, int a6, _WORD *a7)
{
  sub_8F5750(this, a7, 0);
  *this = &off_A98060;
  *((_OWORD *)this + 2) = *a2;
  *((_OWORD *)this + 3) = *a3;
  *(this + 0x10) = a4;
  *(this + 0x11) = a5;
  *(this + 0x13) = a6;
  *(this + 0x12) = 0x437A0000;
  return this;
}
