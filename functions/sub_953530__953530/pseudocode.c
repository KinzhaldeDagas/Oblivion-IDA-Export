_WORD *__thiscall sub_953530(_WORD *this, _DWORD *a2, _DWORD *a3)
{
  _WORD *result; // eax
  char v4; // cl

  result = this; /*0x953530*/
  *(this + 3) = 1; /*0x953536*/
  *(_DWORD *)this = &off_AA33BC; /*0x95353c*/
  *((_DWORD *)this + 2) = *a2; /*0x953548*/
  v4 = *((_BYTE *)this + 9); /*0x95354d*/
  *((_DWORD *)result + 3) = *a3; /*0x953550*/
  *((_BYTE *)result + 0x10) = v4 != *((_BYTE *)result + 0xD); /*0x953559*/
  return result; /*0x95355c*/
}
