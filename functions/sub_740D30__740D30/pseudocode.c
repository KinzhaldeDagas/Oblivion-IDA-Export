char *__cdecl sub_740D30(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi

  v2 = (va_list)(strlen(ArgList) + 0x14);
  v3 = (char *)FormHeapAlloc((unsigned int)v2);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = FOG_RANGE_SQ", (unsigned int)v2), ArgList);
      return v3;
    }
    if ( a2 == 2 )
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = FOG_VERTEX_ALPHA", (unsigned int)v2), ArgList);
      return v3;
    }
  }
  else
  {
    sub_6C5D40(v2, v3, __PAIR64__("%s = FOG_Z_LINEAR", (unsigned int)v2), ArgList);
  }
  return v3;
}
