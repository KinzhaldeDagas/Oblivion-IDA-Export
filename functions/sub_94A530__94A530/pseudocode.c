_WORD *__thiscall sub_94A530(_WORD *this, _DWORD *a2)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_AA2BE4;
  *((_DWORD *)this + 2) = *a2;
  *((_DWORD *)this + 3) = a2[1];
  *((_DWORD *)this + 4) = 0;
  return this;
}
