unsigned int __stdcall sub_961510(char *ArgList, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // edi
  unsigned int v3; // kr00_4
  NiTArray_NiTexturingPropertyMap *v4; // esi
  unsigned int end; // edi

  v2 = ArgList; /*0x961512*/
  v3 = strlen(ArgList); /*0x961518*/
  ArgList = (char *)FormHeapAlloc(v3 + 0xE); /*0x96153c*/
  sub_6C5D40(v2, ArgList, __PAIR64__("%s = CAPSULE_BV", v3 + 0xE), v2); /*0x961540*/
  v4 = a2; /*0x961545*/
  end = a2->end; /*0x961549*/
  if ( end >= a2->capacity ) /*0x961556*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x961561*/
  return NiTArray_SetAt(v4, end, &ArgList); /*0x961573*/
}
