_DWORD *__thiscall sub_6F37D0(
        int *this,
        _DWORD *a2,
        int a3,
        OB_stString28_010201A0 *a4,
        int a5,
        OB_stString28_010201A0 *a6)
{
  int v7; // edi

  if ( !a3 || a3 != a5 ) /*0x6f37e1*/
    _invalid_parameter_noinfo(); /*0x6f37e3*/
  if ( a4 != a6 ) /*0x6f37f2*/
  {
    v7 = sub_6F3530(a6, (OB_stString28_010201A0 *)*(this + 2), a4); /*0x6f3805*/
    sub_5573D0(v7, *(this + 2)); /*0x6f380d*/
    *(this + 2) = v7; /*0x6f3815*/
  }
  *a2 = a3; /*0x6f381e*/
  a2[1] = a4; /*0x6f3821*/
  return a2; /*0x6f381d*/
}
