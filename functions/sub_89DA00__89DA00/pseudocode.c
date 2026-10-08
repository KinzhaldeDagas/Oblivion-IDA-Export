unsigned int __thiscall sub_89DA00(_DWORD *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x89da01*/
  sub_89D820(this, a2); /*0x89da07*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_BA7D04.name); /*0x89da12*/
  end = v2->end; /*0x89da17*/
  capacity = v2->capacity; /*0x89da1b*/
  a2 = v3; /*0x89da24*/
  if ( end >= capacity ) /*0x89da28*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x89da33*/
  return NiTArray_SetAt(v2, end, &a2); /*0x89da45*/
}
