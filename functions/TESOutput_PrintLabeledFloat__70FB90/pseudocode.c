char *__cdecl TESOutput_PrintLabeledFloat(char *ArgList, float a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList);
  v3 = (char *)FormHeapAlloc(v2 + 0x14);
  sub_6C5D40(v3, v3, __PAIR64__("%s = %g", v2 + 0x14), ArgList, a2);
  return v3;
}
