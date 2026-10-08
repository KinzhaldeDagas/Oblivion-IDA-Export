_DWORD *__thiscall sub_6F14D0(void *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  if ( !a3 || a3 != a5 ) /*0x6f14e1*/
    _invalid_parameter_noinfo(); /*0x6f14e3*/
  if ( a4 != a6 ) /*0x6f14f2*/
    *((_DWORD *)this + 2) = sub_54D950(a6, *((char **)this + 2), (int)a4); /*0x6f1516*/
  a2[1] = a4; /*0x6f151d*/
  *a2 = a3; /*0x6f1522*/
  return a2; /*0x6f1520*/
}
