// positive sp value has been detected, the output may be wrong!
int __usercall _splitpath_helper_::_error_erange_25455@<eax>(_BYTE *a1@<ebx>, _DWORD *a2@<ebp>, _BYTE *a3@<edi>)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  int *v7; // eax

  v3 = (_BYTE *)a2[2]; /*0x9843b3*/
  if ( v3 != a3 && a2[3] > (unsigned int)a3 ) /*0x9843bd*/
    *v3 = 0; /*0x9843bf*/
  v4 = (_BYTE *)a2[4]; /*0x9843c2*/
  if ( v4 != a3 && a2[5] > (unsigned int)a3 ) /*0x9843cc*/
    *v4 = 0; /*0x9843ce*/
  v5 = (_BYTE *)a2[6]; /*0x9843d1*/
  if ( v5 != a3 && a2[7] > (unsigned int)a3 ) /*0x9843db*/
    *v5 = 0; /*0x9843dd*/
  v6 = (_BYTE *)a2[8]; /*0x9843e0*/
  if ( v6 != a3 && a2[9] > (unsigned int)a3 ) /*0x9843ea*/
    *v6 = 0; /*0x9843ec*/
  v7 = _errno(); /*0x9843ef*/
  if ( a1 == a3 || (_BYTE *)a2[0xFFFFFFFE] != a3 ) /*0x984411*/
  {
    *v7 = 0x16; /*0x984400*/
    _invalid_parameter((int)a1, (int)a3, 0x16); /*0x984402*/
    return 0x16; /*0x98440a*/
  }
  else
  {
    *v7 = 0x22; /*0x984416*/
    return 0x22; /*0x984418*/
  }
}
