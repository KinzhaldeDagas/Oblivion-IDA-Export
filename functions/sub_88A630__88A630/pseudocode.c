float *__thiscall sub_88A630(float *this, int a2)
{
  *(_OWORD *)this = *(_OWORD *)a2;
  *(this + 4) = *(float *)(a2 + 0x10);
  *(this + 5) = *(float *)(a2 + 0x14);
  *(this + 8) = *(float *)(a2 + 0x20);
  return this;
}
