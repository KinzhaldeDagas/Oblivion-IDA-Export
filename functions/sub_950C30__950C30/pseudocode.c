_WORD *__thiscall sub_950C30(_WORD *this, int a2)
{
  *(this + 3) = 1; /*0x950c36*/
  *((_DWORD *)this + 2) = 0; /*0x950c3c*/
  *((_DWORD *)this + 3) = a2; /*0x950c43*/
  *(_DWORD *)this = &off_AA333C; /*0x950c46*/
  return this; /*0x950c4c*/
}
