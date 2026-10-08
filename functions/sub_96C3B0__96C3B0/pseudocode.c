unsigned int __stdcall sub_96C3B0(char *ArgList, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // edi
  unsigned int v3; // kr00_4
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int end; // edi

  v2 = ArgList; /*0x96c3b2*/
  v3 = strlen(ArgList); /*0x96c3b8*/
  ArgList = (char *)FormHeapAlloc(v3 + 0xA); /*0x96c3dc*/
  sub_6C5D40(v2, ArgList, __PAIR64__("%s = BOX_BV", v3 + 0xA), v2); /*0x96c3e0*/
  v4 = a2; /*0x96c3e5*/
  end = a2->end; /*0x96c3e9*/
  if ( end >= a2->capacity ) /*0x96c3f6*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x96c401*/
  return NiTArray_SetAt(v4, end, &ArgList); /*0x96c413*/
}
