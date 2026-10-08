_DWORD *__thiscall sub_556D00(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  if ( !a3 || a3 != a5 ) /*0x556d11*/
    _invalid_parameter_noinfo(); /*0x556d13*/
  if ( a4 != a6 ) /*0x556d22*/
    *(this + 2) = sub_556780(a6, *(this + 2), a4); /*0x556d46*/
  a2[1] = a4; /*0x556d4d*/
  *a2 = a3; /*0x556d52*/
  return a2; /*0x556d50*/
}
