_DWORD *__thiscall sub_6F37D0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_6F3530(a6, *(this + 2), a4);
    sub_5573D0(v7, *(this + 2));
    *(this + 2) = v7;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}
