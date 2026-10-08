_DWORD *__thiscall sub_559240(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi

  if ( !a3 || a3 != a5 ) /*0x559251*/
    _invalid_parameter_noinfo(); /*0x559253*/
  if ( a4 != a6 ) /*0x559262*/
  {
    v7 = sub_5585B0(a6, *(this + 2), a4); /*0x559275*/
    sub_557430(v7, *(this + 2)); /*0x55927d*/
    *(this + 2) = v7; /*0x559285*/
  }
  *a2 = a3; /*0x55928e*/
  a2[1] = a4; /*0x559291*/
  return a2; /*0x55928d*/
}
