int __thiscall sub_8E7B20(float *this, _OWORD *a2, float *a3)
{
  int result; // eax

  sub_8E79A0((_OWORD *)this + 4, a2, a3);
  result = sub_8B1DD0(this, a3);
  *((_OWORD *)this + 3) = *a2;
  *((_OWORD *)this + 9) = 0;
  *(this + 0x28) = 1.0;
  return result;
}
