char *__cdecl sub_70FA00(char *ArgList, unsigned __int8 a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList);
  v3 = (char *)FormHeapAlloc(v2 + 7);
  sub_6C5D40(v3, v3, __PAIR64__("%s = %u", v2 + 7), ArgList, a2);
  return v3;
}
