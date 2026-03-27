_DWORD *__thiscall sub_796730(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v7; // edi

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (_DWORD *)sub_795CA0(a6, *(this + 2), a4);
    sub_794FC0(v7, (_DWORD *)*(this + 2));
    *(this + 2) = (int)v7;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}
