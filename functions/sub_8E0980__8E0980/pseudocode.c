_WORD *__thiscall sub_8E0980(_WORD *this, int a2)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_A9A638;
  *((_DWORD *)this + 2) = a2;
  return this;
}
