char *__cdecl TESOutput_PrintLabeledSignedShort(char *ArgList, __int16 a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList);
  v3 = (char *)FormHeapAlloc(v2 + 0xA);
  sub_6C5D40(v3, v3, __PAIR64__("%s = %hd", v2 + 0xA), ArgList, a2);
  return v3;
}
