float *__thiscall sub_6E7FA0(float *this, char a2)
{
  sub_6EC220(this);
  *((_BYTE *)this + 0xC) = a2;
  *(_DWORD *)this = &NiBoolInterpolator::`vftable';
  *(this + 4) = 0.0;
  *(this + 5) = 0.0;
  return this;
}
