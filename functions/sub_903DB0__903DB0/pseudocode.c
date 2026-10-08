_DWORD *__thiscall sub_903DB0(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // ecx
  _DWORD *i; // eax
  _DWORD *v7; // ecx
  _DWORD *j; // eax

  *(this + 2) = a4; /*0x903dbb*/
  *((_WORD *)this + 3) = 1; /*0x903dbe*/
  *this = &off_A9BD10; /*0x903dc4*/
  v5 = (_DWORD *)a2[3]; /*0x903dca*/
  for ( i = a2; v5; v5 = (_DWORD *)v5[3] ) /*0x903dd2*/
    i = v5; /*0x903dd4*/
  *(this + 3) = i; /*0x903de1*/
  v7 = (_DWORD *)a3[3]; /*0x903de4*/
  for ( j = a3; v7; v7 = (_DWORD *)v7[3] ) /*0x903deb*/
    j = v7; /*0x903df0*/
  *(this + 4) = j; /*0x903df9*/
  *(this + 7) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x903e03*/
  *(this + 8) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3); /*0x903e0d*/
  return this; /*0x903e10*/
}
