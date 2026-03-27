const char *__usercall _shift@<eax>(const char *result@<eax>, int a2@<edi>)
{
  unsigned int v2; // esi
  int v3; // eax

  v2 = (unsigned int)result;
  if ( a2 )
  {
    v3 = strlen(result);
    return (const char *)unknown_libname_16(a2 + v2, v2, v3 + 1);
  }
  return result;
}
