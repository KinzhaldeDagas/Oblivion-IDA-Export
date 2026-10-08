// positive sp value has been detected, the output may be wrong!
double __usercall unknown_libname_192_::ExpArgOutOfRange@<st0>(
        int a1@<ebp>,
        __int16 a2@<fpstat>,
        double result@<st0>,
        char a4@<ch>)
{
  bool v4; // c0
  char v5; // c2
  bool v6; // c3

  v4 = result < 0.0; /*0x994b91*/
  v5 = 0; /*0x994b91*/
  v6 = result == 0.0; /*0x994b91*/
  *(_WORD *)(a1 - 0xA0) = a2; /*0x994b93*/
  if ( (*(_BYTE *)(a1 - 0x9F) & 1) != 0 ) /*0x994ba2*/
  {
    unknown_libname_192_::zeronpopue(a1); /*0x994ba2*/
  }
  else
  {
    result = *(double *)&tbyte_B31CD0; /*0x994ba6*/
    if ( a4 ) /*0x994bae*/
      result = -*(double *)&tbyte_B31CD0; /*0x994bb0*/
    unknown_libname_192_::_expbigret(); /*0x994bae*/
  }
  return result;
}
