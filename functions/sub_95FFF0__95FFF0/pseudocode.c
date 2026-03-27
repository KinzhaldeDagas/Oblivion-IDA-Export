unsigned int __thiscall sub_95FFF0(_DWORD *this, char *ArgList, unsigned __int16 *a3)
{
  char *v3; // edi
  unsigned int v5; // kr00_4
  NiTArray_NiTexturingPropertyMap *v6; // ebx
  unsigned int v7; // esi
  unsigned int result; // eax
  char *i; // esi
  char *v10; // edi
  int v11; // ecx
  size_t v12; // [esp-10h] [ebp-20h]

  v3 = ArgList;
  v5 = strlen(ArgList);
  ArgList = (char *)FormHeapAlloc(v5 + 0xC);
  sub_6C5D40(v3, ArgList, __PAIR64__("%s = UNION_BV", v5 + 0xC), v3);
  v6 = (NiTArray_NiTexturingPropertyMap *)a3;
  v7 = a3[5];
  if ( v7 >= a3[4] )
    NiTArray_SetSize(a3, v7 + a3[7]);
  result = NiTArray_SetAt(v6, v7, &ArgList);
  for ( i = 0; (unsigned int)i < *((unsigned __int16 *)this + 7); ++i )
  {
    HIDWORD(v12) = "   child %i";
    v10 = (char *)FormHeapAlloc(0xDu);
    LODWORD(v12) = 0xD;
    sub_6C5D40(v10, v10, v12, i);
    if ( (unsigned int)i >= *((unsigned __int16 *)this + 7) )
      v11 = 0;
    else
      v11 = *(_DWORD *)(*(this + 2) + 4 * (_DWORD)i);
    result = (*(int (__thiscall **)(int, char *, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v11 + 0x2C))(
               v11,
               v10,
               v6);
  }
  return result;
}
