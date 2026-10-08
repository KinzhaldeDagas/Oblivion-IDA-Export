char *__cdecl TESOutput_PrintLabeledFloat(char *ArgList, float a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70fb99*/
  v3 = (char *)FormHeapAlloc(v2 + 0x14); /*0x70fbc2*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %g", v2 + 0x14), ArgList, a2); /*0x70fbc6*/
  return v3; /*0x70fbd0*/
}
