char *__cdecl sub_7158A0(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi

  v2 = strlen(ArgList) + 0xC;
  v3 = (char *)FormHeapAlloc(v2);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_6C5D40(v3, v3, __PAIR64__("%s = APP_INIT", v2), ArgList);
      return v3;
    }
  }
  else
  {
    sub_6C5D40(v3, v3, __PAIR64__("%s = APP_TIME", v2), ArgList);
  }
  return v3;
}
