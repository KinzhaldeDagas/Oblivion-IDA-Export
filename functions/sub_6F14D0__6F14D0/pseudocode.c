_DWORD *__thiscall sub_6F14D0(void *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    *((_DWORD *)this + 2) = sub_54D950(a6, *((char **)this + 2), (int)a4);
  a2[1] = a4;
  *a2 = a3;
  return a2;
}
