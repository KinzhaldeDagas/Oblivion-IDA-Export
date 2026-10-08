unsigned int __thiscall sub_6EBAC0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ebac1*/
  sub_7009A0(this, a2); /*0x6ebac7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3EB8C); /*0x6ebad2*/
  end = v2->end; /*0x6ebad7*/
  capacity = v2->capacity; /*0x6ebadb*/
  a2 = v3; /*0x6ebae4*/
  if ( end >= capacity ) /*0x6ebae8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ebaf3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6ebb05*/
}
