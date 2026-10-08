_DWORD *__thiscall sub_536BC0(_DWORD *this, int a2, int a3)
{
  _DWORD *result; // eax

  result = (_DWORD *)*(this + 6); /*0x536bc8*/
  if ( !result ) /*0x536bcd*/
    goto LABEL_5; /*0x536bcd*/
  do /*0x536bda*/
  {
    if ( result[2] == a3 ) /*0x536bd3*/
      break; /*0x536bd3*/
    result = (_DWORD *)result[1]; /*0x536bd5*/
  }
  while ( result ); /*0x536bda*/
  if ( !result ) /*0x536bde*/
  {
LABEL_5:
    result = (_DWORD *)FormHeapAlloc(0x14u); /*0x536be2*/
    if ( result ) /*0x536bec*/
    {
      result[2] = a3; /*0x536bf2*/
      *result = 0; /*0x536bf5*/
      result[1] = 0; /*0x536bfb*/
      result[3] = a2; /*0x536c02*/
      result[4] = 0; /*0x536c05*/
      result[1] = *(this + 6); /*0x536c0f*/
      *(this + 6) = result; /*0x536c12*/
    }
    else
    {
      *(_DWORD *)4 = *(this + 6); /*0x536c1f*/
      *(this + 6) = 0; /*0x536c22*/
      return 0; /*0x536c1d*/
    }
  }
  return result; /*0x536c15*/
}
