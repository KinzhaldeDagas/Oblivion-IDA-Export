_DWORD *__thiscall sub_79E020(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // edi

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (_DWORD *)sub_79BDF0(a6, *(this + 2), a4);
    sub_79B120(v7, (_DWORD *)*(this + 2));
    *(this + 2) = (int)v7;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}
