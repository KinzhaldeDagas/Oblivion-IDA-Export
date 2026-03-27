char *__cdecl TESOutput_PrintLabeledUnsignedShort(char *ArgList, unsigned __int16 a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList);
  v3 = (char *)FormHeapAlloc(v2 + 9);
  sub_6C5D40(v3, v3, __PAIR64__("%s = %hu", v2 + 9), ArgList, a2);
  return v3;
}
