_WORD *__thiscall sub_950C30(_WORD *this, int a2)
{
  *(this + 3) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_AA333C;
  return this;
}
