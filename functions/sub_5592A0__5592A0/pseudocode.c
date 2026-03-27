_DWORD *__thiscall sub_5592A0(int *this, _DWORD *a2, int a3, float *a4, int a5, float *a6)
{
  int v7; // edi

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_558610(a6, (float *)*(this + 2), (int)a4);
    sub_557740(v7, *(this + 2));
    *(this + 2) = v7;
  }
  *a2 = a3;
  a2[1] = a4;
  return a2;
}
