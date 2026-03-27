_WORD *__thiscall sub_943420(_WORD *this, int a2)
{
  *(this + 3) = 1;
  *(_DWORD *)this = &off_AA27E0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x1C))(a2);
  return this;
}
