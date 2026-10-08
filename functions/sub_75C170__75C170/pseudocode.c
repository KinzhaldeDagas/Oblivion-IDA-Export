unsigned int __thiscall sub_75C170(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75c171*/
  sub_75F730(this, a2); /*0x75c177*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41AC4.name); /*0x75c182*/
  end = v2->end; /*0x75c187*/
  capacity = v2->capacity; /*0x75c18b*/
  a2 = v3; /*0x75c194*/
  if ( end >= capacity ) /*0x75c198*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75c1a3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x75c1b5*/
}
