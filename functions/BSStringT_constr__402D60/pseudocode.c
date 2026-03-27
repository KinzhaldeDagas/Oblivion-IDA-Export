_WORD *__thiscall BSStringT_constr(_WORD *this)
{
  *(_DWORD *)this = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  return this;
}
