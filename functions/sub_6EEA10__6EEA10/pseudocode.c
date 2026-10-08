_DWORD *__thiscall sub_6EEA10(char **this, _DWORD *a2, int a3, FaceGenMatrix *a4, int a5, FaceGenMatrix *a6)
{
  char *v7; // edi

  if ( !a3 || a3 != a5 ) /*0x6eea21*/
    _invalid_parameter_noinfo(); /*0x6eea23*/
  if ( a4 != a6 ) /*0x6eea32*/
  {
    v7 = (char *)sub_6EE160(a6, (FaceGenMatrix *)*(this + 2), a4); /*0x6eea45*/
    sub_5522B0((int)v7, (int)*(this + 2)); /*0x6eea4d*/
    *(this + 2) = v7; /*0x6eea55*/
  }
  *a2 = a3; /*0x6eea5e*/
  a2[1] = a4; /*0x6eea61*/
  return a2; /*0x6eea5d*/
}
