// positive sp value has been detected, the output may be wrong!
int __usercall _splitpath_s_::_error_erange_25451@<eax>(int a1@<ebx>, _DWORD *a2@<ebp>, unsigned int a3@<edi>)
{
  _BYTE *v3; // eax
  _BYTE *v4; // eax
  _BYTE *v5; // eax
  _BYTE *v6; // eax
  int *v7; // eax

  v3 = (_BYTE *)a2[3];
  if ( v3 != (_BYTE *)a3 && a2[4] > a3 )
    *v3 = 0;
  v4 = (_BYTE *)a2[5];
  if ( v4 != (_BYTE *)a3 && a2[6] > a3 )
    *v4 = 0;
  v5 = (_BYTE *)a2[7];
  if ( v5 != (_BYTE *)a3 && a2[8] > a3 )
    *v5 = 0;
  v6 = (_BYTE *)a2[9];
  if ( v6 != (_BYTE *)a3 && a2[0xA] > a3 )
    *v6 = 0;
  v7 = _errno();
  if ( a1 == a3 || a2[0xFFFFFFFF] != a3 )
  {
    *v7 = 0x16;
    _invalid_parameter(a1, a3, 0x16);
    return 0x16;
  }
  else
  {
    *v7 = 0x22;
    return 0x22;
  }
}
