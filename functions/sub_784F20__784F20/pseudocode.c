_DWORD *__thiscall sub_784F20(_DWORD *this, int a2, int a3, int a4, _DWORD *a5, char a6)
{
  _DWORD *v7; // edi

  *(this + 1) = a3;
  v7 = this + 3;
  *this = a2;
  *(this + 2) = a4;
  *(this + 9) = 0xF;
  *(this + 8) = 0;
  *((_BYTE *)this + 0x10) = 0;
  sub_414420((int)(this + 3), a5, 0, 0xFFFFFFFF);
  v7[7] = a5[7];
  *((_BYTE *)this + 0x2C) = a6;
  *((_BYTE *)this + 0x2D) = 0;
  return this;
}
