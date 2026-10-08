_WORD *__thiscall sub_94B850(_WORD *this, _DWORD *a2)
{
  *(this + 3) = 1; /*0x94b856*/
  *(_DWORD *)this = &off_AA2BE4; /*0x94b85c*/
  *((_DWORD *)this + 2) = *a2; /*0x94b864*/
  *((_DWORD *)this + 3) = 0; /*0x94b867*/
  return this; /*0x94b86e*/
}
