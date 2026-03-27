float *__thiscall ExtraHealth_costr(float *this, float a2)
{
  *(this + 3) = a2;
  *((_BYTE *)this + 4) = 0x2B;
  *(this + 2) = 0.0;
  *(_DWORD *)this = &ExtraHealth::`vftable';
  return this;
}
