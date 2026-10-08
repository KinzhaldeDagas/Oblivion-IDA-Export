char *__cdecl TESOutput_PrintLabeledBool(char *ArgList, char a2)
{
  unsigned int v2; // esi
  char *v3; // eax
  char *v4; // edi

  v2 = strlen(ArgList) + 9; /*0x70f96b*/
  v3 = (char *)FormHeapAlloc(v2); /*0x70f96f*/
  v4 = v3; /*0x70f97c*/
  if ( a2 ) /*0x70f97f*/
    sub_6C5D40(v3, v3, __PAIR64__("%s = true", v2), ArgList); /*0x70f988*/
  else
    sub_6C5D40(v3, v3, __PAIR64__("%s = false", v2), ArgList); /*0x70f99d*/
  return v4; /*0x70f992*/
}
