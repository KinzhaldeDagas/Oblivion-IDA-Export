float *__thiscall sub_7A7D10(float *this, float *a2, char a3, char a4, float a5, int a6)
{
  sub_78ECF0(this);
  *((_BYTE *)this + 0x10) = a4;
  *(_DWORD *)this = &CBillboardLeaf::`vftable';
  *(this + 5) = NAN;
  *((_BYTE *)this + 0x18) = a3;
  *(this + 9) = 0.0;
  *(this + 8) = 0.0;
  *(this + 7) = 0.0;
  *(this + 0xC) = 0.0;
  *(this + 0xB) = 0.0;
  *(this + 0xA) = 0.0;
  *(this + 0xF) = 0.0;
  *(this + 0xE) = 0.0;
  *(this + 0xD) = 0.0;
  *((_BYTE *)this + 0x40) = 0;
  *((_DWORD *)this + 0x12) = a6;
  *(this + 0x11) = a5;
  *(this + 1) = *a2;
  *(this + 2) = a2[1];
  *(this + 3) = a2[2];
  return this;
}
