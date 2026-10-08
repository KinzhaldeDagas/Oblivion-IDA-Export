unsigned int __userpurge sub_96D6C0@<eax>(
        float *this@<ecx>,
        va_list a2@<edi>,
        char *ArgList,
        NiTArray_NiTexturingPropertyMap *a4)
{
  char *v4; // ebx
  unsigned int v6; // kr00_4
  NiTArray_NiTexturingPropertyMap *v7; // esi
  unsigned int end; // edi
  char *v9; // eax
  unsigned int v10; // edi
  unsigned int v11; // kr04_4
  char *v12; // eax
  double v13; // st6
  char *v14; // ebx
  unsigned int v15; // edi

  v4 = ArgList; /*0x96d6c1*/
  v6 = strlen(ArgList); /*0x96d6cc*/
  ArgList = (char *)FormHeapAlloc(v6 + 0xD); /*0x96d6ec*/
  sub_6C5D40(a2, ArgList, __PAIR64__("%s = SPHERE_BV", v6 + 0xD), v4); /*0x96d6f0*/
  v7 = a4; /*0x96d6f5*/
  end = a4->end; /*0x96d6f9*/
  if ( end >= a4->capacity ) /*0x96d706*/
    NiTArray_SetSize((unsigned __int16 *)a4, end + a4->growSize); /*0x96d711*/
  NiTArray_SetAt(v7, end, &ArgList); /*0x96d71e*/
  v9 = sub_707280(this + 1, "     center"); /*0x96d72b*/
  v10 = v7->end; /*0x96d730*/
  ArgList = v9; /*0x96d734*/
  if ( v10 >= v7->capacity ) /*0x96d73e*/
    NiTArray_SetSize((unsigned __int16 *)v7, v10 + v7->growSize); /*0x96d749*/
  NiTArray_SetAt(v7, v10, &ArgList); /*0x96d756*/
  v11 = strlen(v4); /*0x96d75d*/
  v12 = (char *)FormHeapAlloc(v11 + 0x1E); /*0x96d76f*/
  v13 = fCostant_100; /*0x96d777*/
  v14 = v12; /*0x96d77d*/
  ArgList = v12; /*0x96d781*/
  a4 = (NiTArray_NiTexturingPropertyMap *)Double_To_SInt32(v13); /*0x96d78c*/
  sub_6C5D40( /*0x96d79f*/
    (va_list)(v11 + 0x1E),
    v14,
    __PAIR64__("     radius = %g", v11 + 0x1E),
    (char *)COERCE_UNSIGNED_INT64((double)(int)a4 / v13),
    (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64((double)(int)a4 / v13)));
  v15 = v7->end; /*0x96d7a4*/
  if ( v15 >= v7->capacity ) /*0x96d7b1*/
    NiTArray_SetSize((unsigned __int16 *)v7, v15 + v7->growSize); /*0x96d7bc*/
  return NiTArray_SetAt(v7, v15, &ArgList); /*0x96d7ce*/
}
