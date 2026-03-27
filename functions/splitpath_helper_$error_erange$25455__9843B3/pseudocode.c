// positive sp value has been detected, the output may be wrong!
int __usercall _splitpath_helper_::_error_erange_25455@<eax>(_BYTE *a1@<ebx>, _DWORD *a2@<ebp>, _BYTE *a3@<edi>)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  int *v7; // eax

  v3 = (_BYTE *)a2[2];
  if ( v3 != a3 && a2[3] > (unsigned int)a3 )
    *v3 = 0;
  v4 = (_BYTE *)a2[4];
  if ( v4 != a3 && a2[5] > (unsigned int)a3 )
    *v4 = 0;
  v5 = (_BYTE *)a2[6];
  if ( v5 != a3 && a2[7] > (unsigned int)a3 )
    *v5 = 0;
  v6 = (_BYTE *)a2[8];
  if ( v6 != a3 && a2[9] > (unsigned int)a3 )
    *v6 = 0;
  v7 = _errno();
  if ( a1 == a3 || (_BYTE *)a2[0xFFFFFFFE] != a3 )
  {
    *v7 = 0x16;
    _invalid_parameter(a3, a3, a3, a3, a3);
    return 0x16;
  }
  else
  {
    *v7 = 0x22;
    return 0x22;
  }
}
