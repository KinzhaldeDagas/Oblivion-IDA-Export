_WORD *__thiscall sub_94B850(_WORD *this, _DWORD *a2)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_AA2BE4;
  *((_DWORD *)this + 2) = *a2;
  *((_DWORD *)this + 3) = 0;
  return this;
}
