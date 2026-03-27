int (*__usercall _initterm@<eax>(int (*result)(void)@<eax>, unsigned int a2))(void)
{
  int (**i)(void); // esi

  for ( i = (int (**)(void))result; (unsigned int)i < a2; ++i )
  {
    result = *i;
    if ( *i )
      result = (int (*)(void))result();
  }
  return result;
}
