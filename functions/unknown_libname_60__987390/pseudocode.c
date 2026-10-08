int __usercall unknown_libname_60@<eax>(
        int a1@<edi>,
        char *a2,
        unsigned int a3,
        unsigned int a4,
        int (__cdecl *a5)(unsigned int, unsigned int))
{
  if ( a2 || !a3 ) /*0x9873ac*/
  {
    if ( a4 && a5 ) /*0x9873e8*/
    {
      if ( a3 < 2 ) /*0x987414*/
        JUMPOUT(0x98762D); /*0x98762d*/
      return unknown_libname_60_::unknown_libname_61(a2, a4, &a2[a4 * (a3 - 1)], (int)a2, a3, a4, a5); /*0x987432*/
    }
    else
    {
      *_errno() = 0x16; /*0x9873f9*/
      return _invalid_parameter((int)a2, a1, a3); /*0x9873ff*/
    }
  }
  else
  {
    *_errno() = 0x16; /*0x9873bd*/
    return _invalid_parameter(0, a1, a3); /*0x9873c3*/
  }
}
