char **__usercall copy_environ@<eax>(const char **a1@<edi>)
{
  char **result; // eax
  const char **v2; // ecx
  char **v3; // esi
  const char *v4; // eax
  const char **v5; // ebx
  char **v6; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h] BYREF

  result = 0; /*0x9a1706*/
  v2 = a1; /*0x9a170a*/
  if ( a1 ) /*0x9a170c*/
  {
    if ( *a1 ) /*0x9a1710*/
    {
      do /*0x9a1718*/
      {
        ++v2; /*0x9a1714*/
        result = (char **)((char *)result + 1); /*0x9a1717*/
      }
      while ( *v2 ); /*0x9a1718*/
    }
    v3 = (char **)unknown_libname_74((int)result + 1, 4); /*0x9a1728*/
    v6 = v3; /*0x9a172e*/
    if ( !v3 ) /*0x9a1731*/
      _amsg_exit((int)&savedregs, 9); /*0x9a1735*/
    v4 = *a1; /*0x9a173b*/
    v5 = a1; /*0x9a173d*/
    while ( v4 ) /*0x9a1754*/
    {
      *v3++ = _strdup(v4); /*0x9a1747*/
      v4 = *++v5; /*0x9a174f*/
    }
    *v3 = 0; /*0x9a1756*/
    return v6; /*0x9a1758*/
  }
  return result; /*0x9a170e*/
}
