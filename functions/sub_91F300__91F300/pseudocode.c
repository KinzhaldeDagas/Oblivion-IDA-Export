int *__thiscall sub_91F300(int ***this)
{
  int *v1; // edx
  int *result; // eax
  int *v3; // edi

  v1 = **this; /*0x91f303*/
  result = v1; /*0x91f30b*/
  v3 = &v1[(_DWORD)(*this)[1]]; /*0x91f30d*/
  if ( v1 != v3 ) /*0x91f312*/
  {
    do /*0x91f338*/
    {
      if ( *result >= 0 && v1[*result] >= 0 ) /*0x91f31e*/
      {
        do /*0x91f331*/
        {
          *result = v1[*result]; /*0x91f325*/
          v1 = **this; /*0x91f329*/
        }
        while ( v1[*result] >= 0 ); /*0x91f331*/
      }
      ++result; /*0x91f333*/
    }
    while ( result != v3 ); /*0x91f338*/
  }
  return result; /*0x91f33a*/
}
