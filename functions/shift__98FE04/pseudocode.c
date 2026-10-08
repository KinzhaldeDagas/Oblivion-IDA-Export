const char *__usercall _shift@<eax>(const char *result@<eax>, int a2@<edi>)
{
  const char *v2; // esi
  int v3; // eax

  v2 = result; /*0x98fe07*/
  if ( a2 ) /*0x98fe09*/
  {
    v3 = strlen(result); /*0x98fe0c*/
    return (const char *)unknown_libname_16((unsigned int)&v2[a2], (unsigned int)v2, v3 + 1); /*0x98fe17*/
  }
  return result; /*0x98fe1f*/
}
