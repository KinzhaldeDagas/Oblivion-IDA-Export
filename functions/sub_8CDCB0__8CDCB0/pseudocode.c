char *__thiscall sub_8CDCB0(char *this, _OWORD *a2, int a3)
{
  sub_8BC8F0(this, 0, 2);
  *((_DWORD *)this + 0x14) = 0;
  *((_DWORD *)this + 0x15) = 0;
  *((_DWORD *)this + 0x16) = 0x80000000;
  *((_DWORD *)this + 0x17) = 0;
  *((_DWORD *)this + 0x18) = 0;
  *((_DWORD *)this + 0x19) = 0x80000000;
  *((_DWORD *)this + 9) = 0xFFFFFFEC;
  *(_DWORD *)this = &off_A99BF0;
  *((_DWORD *)this + 0x24) = 0;
  *((_DWORD *)this + 0x25) = 0;
  *((_DWORD *)this + 0x26) = 0x80000000;
  *((_OWORD *)this + 7) = *a2;
  *((_OWORD *)this + 8) = a2[1];
  *((_DWORD *)this + 0xC) = a3;
  return this;
}
