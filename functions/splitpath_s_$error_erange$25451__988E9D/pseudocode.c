// positive sp value has been detected, the output may be wrong!
int __usercall _splitpath_s_::_error_erange_25451@<eax>(_BYTE *a1@<ebx>, _DWORD *a2@<ebp>, _BYTE *a3@<edi>)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  int *v7; // eax

  v3 = (_BYTE *)a2[3]; /*0x988e9d*/
  if ( v3 != a3 && a2[4] > (unsigned int)a3 ) /*0x988ea7*/
    *v3 = 0; /*0x988ea9*/
  v4 = (_BYTE *)a2[5]; /*0x988eac*/
  if ( v4 != a3 && a2[6] > (unsigned int)a3 ) /*0x988eb6*/
    *v4 = 0; /*0x988eb8*/
  v5 = (_BYTE *)a2[7]; /*0x988ebb*/
  if ( v5 != a3 && a2[8] > (unsigned int)a3 ) /*0x988ec5*/
    *v5 = 0; /*0x988ec7*/
  v6 = (_BYTE *)a2[9]; /*0x988eca*/
  if ( v6 != a3 && a2[0xA] > (unsigned int)a3 ) /*0x988ed4*/
    *v6 = 0; /*0x988ed6*/
  v7 = _errno(); /*0x988ed9*/
  if ( a1 == a3 || (_BYTE *)a2[0xFFFFFFFF] != a3 ) /*0x988efb*/
  {
    *v7 = 0x16; /*0x988eea*/
    _invalid_parameter((int)a1, (int)a3, 0x16); /*0x988eec*/
    return 0x16; /*0x988ef4*/
  }
  else
  {
    *v7 = 0x22; /*0x988f00*/
    return 0x22; /*0x988f02*/
  }
}
