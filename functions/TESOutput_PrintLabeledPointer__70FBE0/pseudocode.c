char *__cdecl TESOutput_PrintLabeledPointer(char *ArgList, int a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70fbe9*/
  v3 = (char *)FormHeapAlloc(v2 + 0x10); /*0x70fc04*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %p", v2 + 0x10), ArgList, a2); /*0x70fc13*/
  return v3; /*0x70fc1d*/
}
