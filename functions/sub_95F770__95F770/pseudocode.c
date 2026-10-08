unsigned int __stdcall sub_95F770(char *ArgList, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // edi
  unsigned int v3; // kr00_4
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int end; // edi

  v2 = ArgList; /*0x95f772*/
  v3 = strlen(ArgList); /*0x95f778*/
  ArgList = (char *)FormHeapAlloc(v3 + 0x10); /*0x95f79c*/
  sub_6C5D40(v2, ArgList, __PAIR64__("%s = HALFSPACE_BV", v3 + 0x10), v2); /*0x95f7a0*/
  v4 = a2; /*0x95f7a5*/
  end = a2->end; /*0x95f7a9*/
  if ( end >= a2->capacity ) /*0x95f7b6*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x95f7c1*/
  return NiTArray_SetAt(v4, end, &ArgList); /*0x95f7d3*/
}
