float *__thiscall sub_7A3470(float *this, int a2)
{
  *(_BYTE *)this = *(_BYTE *)a2;
  *(this + 1) = *(float *)(a2 + 4);
  *(this + 2) = *(float *)(a2 + 8);
  *(this + 3) = *(float *)(a2 + 0xC);
  *(this + 4) = *(float *)(a2 + 0x10);
  sub_414420((int)(this + 5), (_DWORD *)(a2 + 0x14), 0, 0xFFFFFFFF);
  *(this + 0xC) = *(float *)(a2 + 0x30);
  *(this + 0xD) = *(float *)(a2 + 0x34);
  *(this + 0xE) = *(float *)(a2 + 0x38);
  *(this + 0xF) = *(float *)(a2 + 0x3C);
  *(this + 0x10) = *(float *)(a2 + 0x40);
  *(this + 0x11) = *(float *)(a2 + 0x44);
  *(this + 0x12) = *(float *)(a2 + 0x48);
  *(this + 0x13) = *(float *)(a2 + 0x4C);
  *(this + 0x14) = *(float *)(a2 + 0x50);
  return this;
}
