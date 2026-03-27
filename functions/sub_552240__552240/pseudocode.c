_DWORD *__thiscall sub_552240(_DWORD *this, int a2, int a3)
{
  *this = a2;
  *(this + 1) = a3;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  sub_527160(this + 2, *this * *(this + 1), COERCE_INT(0.0));
  return this;
}
