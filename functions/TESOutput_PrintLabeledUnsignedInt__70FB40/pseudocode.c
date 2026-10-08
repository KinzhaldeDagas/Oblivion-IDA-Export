char *__cdecl TESOutput_PrintLabeledUnsignedInt(char *ArgList, int a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70fb49*/
  v3 = (char *)FormHeapAlloc(v2 + 0xE); /*0x70fb64*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %u", v2 + 0xE), ArgList, a2); /*0x70fb73*/
  return v3; /*0x70fb7d*/
}
