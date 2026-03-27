char *__thiscall sub_903FA0(char *this, _OWORD *a2)
{
  *(_OWORD *)this = *a2;
  *((_OWORD *)this + 1) = a2[1];
  *((_OWORD *)this + 2) = a2[2];
  *((_OWORD *)this + 3) = a2[3];
  qmemcpy(this + 0x40, a2 + 4, 0x70u);
  return this;
}
