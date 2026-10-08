_WORD *__thiscall sub_94A530(_WORD *this, _DWORD *a2)
{
  *(this + 3) = 1; /*0x94a536*/
  *(_DWORD *)this = &off_AA2BE4; /*0x94a53c*/
  *((_DWORD *)this + 2) = *a2; /*0x94a544*/
  *((_DWORD *)this + 3) = a2[1]; /*0x94a54a*/
  *((_DWORD *)this + 4) = 0; /*0x94a54d*/
  return this; /*0x94a554*/
}
