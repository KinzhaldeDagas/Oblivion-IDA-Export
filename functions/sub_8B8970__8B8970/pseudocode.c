_DWORD *__thiscall sub_8B8970(_DWORD *this, _WORD *a2)
{
  sub_8F5750(this, a2, 0);
  *this = &off_A98060;
  *(this + 0x10) = 0x3F000000;
  *(this + 0x11) = 0x3E99999A;
  *(this + 0x12) = 0x437A0000;
  *(this + 0x13) = 0x3F733333;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  return this;
}
