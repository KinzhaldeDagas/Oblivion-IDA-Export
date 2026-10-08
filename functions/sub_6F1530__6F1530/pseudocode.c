int *__thiscall sub_6F1530(char **this, int *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // ebp
  char *v8; // eax
  char *v9; // ecx
  int v10; // edx

  v6 = a3; /*0x6f1531*/
  if ( !a3 || a3 != a5 ) /*0x6f1541*/
    _invalid_parameter_noinfo(); /*0x6f1543*/
  v8 = a6; /*0x6f154c*/
  if ( a4 != a6 ) /*0x6f1552*/
  {
    v9 = *(this + 2); /*0x6f1554*/
    if ( a6 != v9 ) /*0x6f1564*/
    {
      v10 = a4 - a6; /*0x6f1568*/
      do /*0x6f1581*/
      {
        *(_DWORD *)&v8[v10] = *(_DWORD *)v8; /*0x6f1572*/
        *(_DWORD *)&v8[v10 + 4] = *((_DWORD *)v8 + 1); /*0x6f1578*/
        v8 += 8; /*0x6f157c*/
      }
      while ( v8 != v9 ); /*0x6f1581*/
      v6 = a3; /*0x6f1583*/
    }
    *(this + 2) = &a4[8 * ((v9 - a6) >> 3)]; /*0x6f1587*/
  }
  a2[1] = (int)a4; /*0x6f1590*/
  *a2 = v6; /*0x6f1594*/
  return a2; /*0x6f158f*/
}
