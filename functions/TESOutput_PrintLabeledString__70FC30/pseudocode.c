char *__cdecl TESOutput_PrintLabeledString(char *ArgList, const char *a2)
{
  unsigned int v2; // esi
  char *v3; // edi
  unsigned int v5; // kr04_4

  if ( a2 ) /*0x70fc39*/
  {
    v2 = strlen(a2) + strlen(ArgList) + 4; /*0x70fc62*/
    v3 = (char *)FormHeapAlloc(v2); /*0x70fc73*/
    sub_6C5D40(v3, v3, __PAIR64__("%s = %s", v2), ArgList, a2); /*0x70fc77*/
  }
  else
  {
    v5 = strlen(ArgList); /*0x70fc8c*/
    v3 = (char *)FormHeapAlloc(v5 + 8); /*0x70fcaa*/
    sub_6C5D40(v3, v3, __PAIR64__("%s = NULL", v5 + 8), ArgList); /*0x70fcae*/
  }
  return v3; /*0x70fc82*/
}
