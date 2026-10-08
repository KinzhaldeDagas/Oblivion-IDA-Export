char *__cdecl TESOutput_PrintString(char *ArgList)
{
  unsigned int v1; // kr00_4
  char *v2; // edi

  v1 = strlen(ArgList); /*0x70f919*/
  v2 = (char *)FormHeapAlloc(v1 + 9); /*0x70f93a*/
  sub_6C5D40(v2, v2, __PAIR64__("--- %s ---", v1 + 9), ArgList); /*0x70f93e*/
  return v2; /*0x70f948*/
}
