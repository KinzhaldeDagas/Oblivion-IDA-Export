_DWORD *__thiscall sub_6F34D0(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  char *v7; // edi

  if ( !a3 || a3 != a5 ) /*0x6f34e1*/
    _invalid_parameter_noinfo(); /*0x6f34e3*/
  if ( a4 != a6 ) /*0x6f34f2*/
  {
    v7 = (char *)sub_6F3110(a6, *(this + 2), a4); /*0x6f3505*/
    sub_557080((int)v7, (int)*(this + 2)); /*0x6f350d*/
    *(this + 2) = v7; /*0x6f3515*/
  }
  *a2 = a3; /*0x6f351e*/
  a2[1] = a4; /*0x6f3521*/
  return a2; /*0x6f351d*/
}
