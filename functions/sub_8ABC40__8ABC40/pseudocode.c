char *__thiscall sub_8ABC40(char *this, int a2, _OWORD *a3)
{
  sub_8BC8F0(this, a2, 2);
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0x80000000;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0x80000000;
  *((_DWORD *)this + 9) = 0xFFFFFFEC;
  *(_DWORD *)this = &off_A97B90;
  *((_DWORD *)this + 7) = this + 0x70;
  *((_OWORD *)this + 7) = *a3;
  *((_OWORD *)this + 8) = a3[1];
  *((_OWORD *)this + 9) = a3[2];
  *((_OWORD *)this + 0xA) = a3[3];
  return this;
}
