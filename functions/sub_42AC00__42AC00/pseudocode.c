float *__thiscall sub_42AC00(float *this, float a2)
{
  *(this + 3) = a2;
  *((_BYTE *)this + 4) = 0x5C;
  *(this + 2) = 0.0;
  *(_DWORD *)this = &ExtraHaggleAmount::`vftable';
  return this;
}
