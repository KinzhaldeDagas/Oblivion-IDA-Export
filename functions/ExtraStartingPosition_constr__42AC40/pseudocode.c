_DWORD *__thiscall ExtraStartingPosition_constr(_DWORD *this, _DWORD *a2)
{
  _DWORD *v3; // eax

  *((_BYTE *)this + 4) = 0x14; /*0x42ac6b*/
  *(this + 2) = 0; /*0x42ac6f*/
  *this = &ExtraStartingPosition::`vftable'; /*0x42ac7a*/
  v3 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x174))(a2); /*0x42ac8a*/
  *(this + 3) = *v3; /*0x42ac8e*/
  *(this + 4) = v3[1]; /*0x42ac94*/
  *(this + 5) = v3[2]; /*0x42ac9a*/
  *(this + 6) = a2[8]; /*0x42aca3*/
  *(this + 7) = a2[9]; /*0x42aca9*/
  *(this + 8) = a2[0xA]; /*0x42acaf*/
  return this; /*0x42acb4*/
}
