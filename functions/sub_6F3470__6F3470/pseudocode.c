_DWORD *__thiscall sub_6F3470(char **this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  char *v7; // edi

  if ( !a3 || a3 != a5 ) /*0x6f3481*/
    _invalid_parameter_noinfo(); /*0x6f3483*/
  if ( a4 != a6 ) /*0x6f3492*/
  {
    v7 = (char *)sub_6F30C0(a6, *(this + 2), a4); /*0x6f34a5*/
    sub_557030((int)v7, (int)*(this + 2)); /*0x6f34ad*/
    *(this + 2) = v7; /*0x6f34b5*/
  }
  *a2 = a3; /*0x6f34be*/
  a2[1] = a4; /*0x6f34c1*/
  return a2; /*0x6f34bd*/
}
