char *__cdecl TESOutput_PrintLabeledBool(char *ArgList, char a2)
{
  unsigned int v2; // esi
  char *v3; // eax
  char *v4; // edi

  v2 = strlen(ArgList) + 9;
  v3 = (char *)FormHeapAlloc(v2);
  v4 = v3;
  if ( a2 )
    sub_6C5D40(v3, v3, __PAIR64__("%s = true", v2), ArgList);
  else
    sub_6C5D40(v3, v3, __PAIR64__("%s = false", v2), ArgList);
  return v4;
}
