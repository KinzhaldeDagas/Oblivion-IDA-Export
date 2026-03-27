_OWORD *__thiscall sub_539980(_OWORD *this, _OWORD *a2)
{
  *this = *a2;
  *(this + 1) = a2[1];
  *(this + 2) = a2[2];
  *(this + 3) = a2[3];
  return this;
}
