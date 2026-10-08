unsigned int __thiscall sub_758300(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x758301*/
  sub_75F730(this, a2); /*0x758307*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41708.name); /*0x758312*/
  end = v2->end; /*0x758317*/
  capacity = v2->capacity; /*0x75831b*/
  a2 = v3; /*0x758324*/
  if ( end >= capacity ) /*0x758328*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x758333*/
  return NiTArray_SetAt(v2, end, &a2); /*0x758345*/
}
