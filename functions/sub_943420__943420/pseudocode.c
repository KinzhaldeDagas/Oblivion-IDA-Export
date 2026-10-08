_WORD *__thiscall sub_943420(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x943427*/
  *(_DWORD *)this = &off_AA27E0; /*0x94342d*/
  *((_DWORD *)this + 2) = a2; /*0x943433*/
  *((_DWORD *)this + 3) = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x1C))(a2); /*0x94343b*/
  return this; /*0x943440*/
}
