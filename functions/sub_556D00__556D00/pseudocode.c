_DWORD *__thiscall sub_556D00(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    *(this + 2) = sub_556780(a6, *(this + 2), a4);
  a2[1] = a4;
  *a2 = a3;
  return a2;
}
