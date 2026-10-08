_DWORD *__thiscall sub_6F3830(
        char **this,
        _DWORD *a2,
        int a3,
        OB_stString28_010201A0 *a4,
        int a5,
        OB_stString28_010201A0 *a6)
{
  char *v7; // edi

  if ( !a3 || a3 != a5 ) /*0x6f3841*/
    _invalid_parameter_noinfo(); /*0x6f3843*/
  if ( a4 != a6 ) /*0x6f3852*/
  {
    v7 = (char *)sub_6F3170(a6, (OB_stString28_010201A0 *)*(this + 2), a4); /*0x6f3877*/
    sub_5570D0((int)v7, (int)*(this + 2)); /*0x6f3881*/
    *(this + 2) = v7; /*0x6f3889*/
  }
  *a2 = a3; /*0x6f3892*/
  a2[1] = a4; /*0x6f3895*/
  return a2; /*0x6f3891*/
}
