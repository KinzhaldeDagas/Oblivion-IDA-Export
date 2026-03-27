_DWORD *__thiscall sub_6F7240(_DWORD *this, unsigned int a2, _DWORD *a3)
{
  unsigned int v4; // edx
  _DWORD *v5; // eax
  _DWORD *v6; // ecx

  *this = 0;
  if ( !a3 )
    goto LABEL_10;
  if ( !a2 )
    goto LABEL_10;
  v4 = a3[6];
  v5 = a3 + 1;
  v6 = v4 < 0x10 ? a3 + 1 : (_DWORD *)*v5;
  if ( (unsigned int)v6 > a2 )
    goto LABEL_10;
  if ( v4 >= 0x10 )
    v5 = (_DWORD *)*v5;
  if ( a2 > (unsigned int)v5 + a3[5] )
LABEL_10:
    _invalid_parameter_noinfo();
  *this = a3;
  *(this + 1) = a2;
  return this;
}
