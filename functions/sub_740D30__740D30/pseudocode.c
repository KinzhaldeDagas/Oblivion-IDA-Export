char *__cdecl sub_740D30(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi

  v2 = (va_list)(strlen(ArgList) + 0x14); /*0x740d4b*/
  v3 = (char *)FormHeapAlloc((unsigned int)v2); /*0x740d54*/
  if ( a2 ) /*0x740d60*/
  {
    if ( a2 == 1 ) /*0x740d65*/
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = FOG_RANGE_SQ", (unsigned int)v2), ArgList); /*0x740d8a*/
      return v3; /*0x740d97*/
    }
    if ( a2 == 2 ) /*0x740d6a*/
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = FOG_VERTEX_ALPHA", (unsigned int)v2), ArgList); /*0x740d74*/
      return v3; /*0x740d81*/
    }
  }
  else
  {
    sub_6C5D40(v2, v3, __PAIR64__("%s = FOG_Z_LINEAR", (unsigned int)v2), ArgList); /*0x740da0*/
  }
  return v3; /*0x740d7c*/
}
