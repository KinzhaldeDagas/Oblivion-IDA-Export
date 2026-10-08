char *__cdecl sub_7063B0(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi

  v2 = (va_list)(strlen(ArgList) + 0x1A); /*0x7063cb*/
  v3 = (char *)FormHeapAlloc((unsigned int)v2); /*0x7063d4*/
  if ( a2 ) /*0x7063e0*/
  {
    if ( a2 == 1 ) /*0x7063e5*/
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = SOURCE_EMISSIVE", (unsigned int)v2), ArgList); /*0x70640a*/
      return v3; /*0x706417*/
    }
    if ( a2 == 2 ) /*0x7063ea*/
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = SOURCE_AMB_DIFF", (unsigned int)v2), ArgList); /*0x7063f4*/
      return v3; /*0x706401*/
    }
  }
  else
  {
    sub_6C5D40(v2, v3, __PAIR64__("%s = SOURCE_IGNORE", (unsigned int)v2), ArgList); /*0x706420*/
  }
  return v3; /*0x7063fc*/
}
