_DWORD *__thiscall sub_6F1470(void *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  if ( !a3 || a3 != a5 ) /*0x6f1481*/
    _invalid_parameter_noinfo(); /*0x6f1483*/
  if ( a4 != a6 ) /*0x6f1492*/
    *((_DWORD *)this + 2) = sub_6F1240(a6, *((char **)this + 2), (int)a4); /*0x6f14b6*/
  a2[1] = a4; /*0x6f14bd*/
  *a2 = a3; /*0x6f14c2*/
  return a2; /*0x6f14c0*/
}
