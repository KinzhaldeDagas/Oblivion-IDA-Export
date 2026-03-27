int *__thiscall sub_90D960(int *this, int a2)
{
  *this = a2;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0x80000000;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0x80000000;
  sub_942D70((int)(this + 8), a2, (_DWORD *)(a2 + 4));
  *(this + 0xC) = 0;
  *(this + 0xD) = 0;
  *(this + 0xE) = 0x80000000;
  *(this + 0xF) = 0;
  *(this + 0x10) = 0;
  *(this + 0x11) = 0x80000000;
  *((_BYTE *)this + 0x48) = BYTE1(dword_B2FDE4) != *(_BYTE *)(a2 + 5);
  return this;
}
