unsigned int __userpurge sub_96D6C0@<eax>(float *this@<ecx>, va_list a2@<edi>, char *ArgList, unsigned __int16 *a4)
{
  char *v4; // ebx
  unsigned int v6; // kr00_4
  NiTArray_NiTexturingPropertyMap *v7; // esi
  unsigned int v8; // edi
  char *v9; // eax
  unsigned int end; // edi
  unsigned int v11; // kr04_4
  char *v12; // eax
  double v13; // st6
  char *v14; // ebx
  unsigned int v15; // edi

  v4 = ArgList;
  v6 = strlen(ArgList);
  ArgList = (char *)FormHeapAlloc(v6 + 0xD);
  sub_6C5D40(a2, ArgList, __PAIR64__("%s = SPHERE_BV", v6 + 0xD), v4);
  v7 = (NiTArray_NiTexturingPropertyMap *)a4;
  v8 = a4[5];
  if ( v8 >= a4[4] )
    NiTArray_SetSize(a4, v8 + a4[7]);
  NiTArray_SetAt(v7, v8, &ArgList);
  v9 = sub_707280(this + 1, "     center");
  end = v7->end;
  ArgList = v9;
  if ( end >= v7->capacity )
    NiTArray_SetSize((unsigned __int16 *)v7, end + v7->growSize);
  NiTArray_SetAt(v7, end, &ArgList);
  v11 = strlen(v4);
  v12 = (char *)FormHeapAlloc(v11 + 0x1E);
  v13 = fCostant_100;
  v14 = v12;
  ArgList = v12;
  a4 = (unsigned __int16 *)Double_To_SInt32(v13);
  sub_6C5D40(
    (va_list)(v11 + 0x1E),
    v14,
    __PAIR64__("     radius = %g", v11 + 0x1E),
    (char *)COERCE_UNSIGNED_INT64((double)(int)a4 / v13),
    (_DWORD)HIDWORD(COERCE_UNSIGNED_INT64((double)(int)a4 / v13)));
  v15 = v7->end;
  if ( v15 >= v7->capacity )
    NiTArray_SetSize((unsigned __int16 *)v7, v15 + v7->growSize);
  return NiTArray_SetAt(v7, v15, &ArgList);
}
