unsigned int __stdcall sub_96C3B0(char *ArgList, unsigned __int16 *a2)
{
  char *v2; // edi
  unsigned int v3; // kr00_4
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int v5; // edi

  v2 = ArgList;
  v3 = strlen(ArgList);
  ArgList = (char *)FormHeapAlloc(v3 + 0xA);
  sub_6C5D40(v2, ArgList, __PAIR64__("%s = BOX_BV", v3 + 0xA), v2);
  v4 = (NiTArray_NiTexturingPropertyMap *)a2;
  v5 = a2[5];
  if ( v5 >= a2[4] )
    NiTArray_SetSize(a2, v5 + a2[7]);
  return NiTArray_SetAt(v4, v5, &ArgList);
}
