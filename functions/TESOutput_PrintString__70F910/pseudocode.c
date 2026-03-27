char *__cdecl TESOutput_PrintString(char *ArgList)
{
  unsigned int v1; // kr00_4
  char *v2; // edi

  v1 = strlen(ArgList);
  v2 = (char *)FormHeapAlloc(v1 + 9);
  sub_6C5D40(v2, v2, __PAIR64__("--- %s ---", v1 + 9), ArgList);
  return v2;
}
