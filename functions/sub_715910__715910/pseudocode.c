char *__cdecl sub_715910(char *ArgList, int a2)
{
  va_list v2; // edi
  char *v3; // esi

  v2 = (va_list)(strlen(ArgList) + 0xB);
  v3 = (char *)FormHeapAlloc((unsigned int)v2);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = REVERSE", (unsigned int)v2), ArgList);
      return v3;
    }
    if ( a2 == 2 )
    {
      sub_6C5D40(v2, v3, __PAIR64__("%s = CLAMP", (unsigned int)v2), ArgList);
      return v3;
    }
  }
  else
  {
    sub_6C5D40(v2, v3, __PAIR64__("%s = LOOP", (unsigned int)v2), ArgList);
  }
  return v3;
}
