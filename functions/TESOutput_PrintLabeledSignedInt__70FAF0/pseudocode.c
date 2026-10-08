char *__cdecl TESOutput_PrintLabeledSignedInt(char *ArgList, int a2)
{
  unsigned int v2; // kr00_4
  char *v3; // edi

  v2 = strlen(ArgList); /*0x70faf9*/
  v3 = (char *)FormHeapAlloc(v2 + 0xF); /*0x70fb14*/
  sub_6C5D40(v3, v3, __PAIR64__("%s = %d", v2 + 0xF), ArgList, a2); /*0x70fb23*/
  return v3; /*0x70fb2d*/
}
