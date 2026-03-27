char *__cdecl TESOutput_PrintLabeledString(char *ArgList, const char *a2)
{
  unsigned int v3; // esi
  char *v4; // edi
  unsigned int v6; // kr04_4

  if ( a2 )
  {
    v3 = strlen(a2) + strlen(ArgList) + 4;
    v4 = (char *)FormHeapAlloc(v3);
    sub_6C5D40(v4, v4, __PAIR64__("%s = %s", v3), ArgList, a2);
  }
  else
  {
    v6 = strlen(ArgList);
    v4 = (char *)FormHeapAlloc(v6 + 8);
    sub_6C5D40(v4, v4, __PAIR64__("%s = NULL", v6 + 8), ArgList);
  }
  return v4;
}
