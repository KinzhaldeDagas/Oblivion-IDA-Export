char *__cdecl TESOutput_PrintLabeledChar(char *ArgList, char a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70f9b9*/
  v3 = (char *)FormHeapAlloc(v2 + 5); /*0x70f9d4*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %c", v2 + 5), ArgList, a2); /*0x70f9e4*/
  return v3; /*0x70f9ee*/
}
