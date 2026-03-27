_DWORD *__thiscall sub_903DB0(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // ecx
  _DWORD *i; // eax
  _DWORD *v7; // ecx
  _DWORD *j; // eax

  *(this + 2) = a4;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9BD10;
  v5 = (_DWORD *)a2[3];
  for ( i = a2; v5; v5 = (_DWORD *)v5[3] )
    i = v5;
  *(this + 3) = i;
  v7 = (_DWORD *)a3[3];
  for ( j = a3; v7; v7 = (_DWORD *)v7[3] )
    j = v7;
  *(this + 4) = j;
  *(this + 7) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
  *(this + 8) = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
  return this;
}
