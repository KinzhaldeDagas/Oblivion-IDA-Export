int (**__usercall _initterm@<eax>(int (**result)(void)@<eax>, unsigned int a2))(void)
{
  int (**i)(void); // esi

  for ( i = result; (unsigned int)i < a2; ++i ) /*0x981bc1*/
  {
    result = (int (**)(void))*i; /*0x981bc5*/
    if ( *i ) /*0x981bc5*/
      result = (int (**)(void))((int (*)(void))result)(); /*0x981bcb*/
  }
  return result; /*0x981bd6*/
}
