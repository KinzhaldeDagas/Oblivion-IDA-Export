unsigned int __thiscall sub_95FFF0(_DWORD *this, char *ArgList, NiTArray_NiTexturingPropertyMap *a3)
{
  char *v3; // edi
  unsigned int v5; // kr00_4
  NiTArray_NiTexturingPropertyMap *v6; // ebx
  unsigned int end; // esi
  unsigned int result; // eax
  char *i; // esi
  char *v10; // edi
  int v11; // ecx
  size_t v12; // [esp-10h] [ebp-20h]

  v3 = ArgList; /*0x95fff4*/
  v5 = strlen(ArgList); /*0x95fffc*/
  ArgList = (char *)FormHeapAlloc(v5 + 0xC); /*0x96001c*/
  sub_6C5D40(v3, ArgList, __PAIR64__("%s = UNION_BV", v5 + 0xC), v3); /*0x960020*/
  v6 = a3; /*0x960025*/
  end = a3->end; /*0x960029*/
  if ( end >= a3->capacity ) /*0x960036*/
    NiTArray_SetSize((unsigned __int16 *)a3, end + a3->growSize); /*0x960041*/
  result = NiTArray_SetAt(v6, end, &ArgList); /*0x96004e*/
  for ( i = 0; (unsigned int)i < *((unsigned __int16 *)this + 7); ++i ) /*0x960055*/
  {
    HIDWORD(v12) = "   child %i"; /*0x960068*/
    v10 = (char *)FormHeapAlloc(0xDu); /*0x96006d*/
    LODWORD(v12) = 0xD; /*0x96006f*/
    sub_6C5D40(v10, v10, v12, i); /*0x960072*/
    if ( (unsigned int)i >= *((unsigned __int16 *)this + 7) ) /*0x960080*/
      v11 = 0; /*0x96008a*/
    else
      v11 = *(_DWORD *)(*(this + 2) + 4 * (_DWORD)i); /*0x960085*/
    result = (*(int (__thiscall **)(int, char *, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v11 + 0x2C))( /*0x960093*/
               v11,
               v10,
               v6);
  }
  return result; /*0x9600a0*/
}
