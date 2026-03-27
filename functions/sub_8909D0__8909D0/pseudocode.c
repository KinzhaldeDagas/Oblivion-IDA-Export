float *__thiscall sub_8909D0(float *this, int a2)
{
  *(_OWORD *)this = *(_OWORD *)a2;
  *((_OWORD *)this + 1) = *(_OWORD *)(a2 + 0x10);
  *(this + 8) = *(float *)(a2 + 0x20);
  *(this + 9) = *(float *)(a2 + 0x24);
  *(this + 0xA) = *(float *)(a2 + 0x28);
  *(this + 0xB) = *(float *)(a2 + 0x2C);
  *(this + 0xC) = *(float *)(a2 + 0x30);
  return this;
}
