char *__cdecl TESOutput_PrintLabeledUnsignedShort(char *ArgList, __int16 a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70faa9*/
  v3 = (char *)FormHeapAlloc(v2 + 9); /*0x70fac4*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %hu", v2 + 9), ArgList, (unsigned __int16)a2); /*0x70fad4*/
  return v3; /*0x70fade*/
}
