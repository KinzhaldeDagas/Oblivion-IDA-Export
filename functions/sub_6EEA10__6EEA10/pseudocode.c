_DWORD *__thiscall sub_6EEA10(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  char *v7; // edi

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (char *)sub_6EE160(a6, *(this + 2), a4);
    sub_5522B0((int)v7, (int)*(this + 2));
    *(this + 2) = v7;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}
