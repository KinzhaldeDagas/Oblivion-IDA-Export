char *__cdecl sub_706430(char *ArgList, int a2)
{
  unsigned int v2; // esi
  char *v3; // edi

  v2 = strlen(ArgList) + 0x1A;
  v3 = (char *)FormHeapAlloc(v2);
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      sub_6C5D40(v3, v3, __PAIR64__("%s = LIGHTING_E_A_D", v2), ArgList);
      return v3;
    }
  }
  else
  {
    sub_6C5D40(v3, v3, __PAIR64__("%s = LIGHTING_E", v2), ArgList);
  }
  return v3;
}
