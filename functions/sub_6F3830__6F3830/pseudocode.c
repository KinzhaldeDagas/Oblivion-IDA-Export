_DWORD *__thiscall sub_6F3830(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  char *v7; // edi

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (char *)sub_6F3170(a6, *(this + 2), (int)a4);
    sub_5570D0((int)v7, (int)*(this + 2));
    *(this + 2) = v7;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}
