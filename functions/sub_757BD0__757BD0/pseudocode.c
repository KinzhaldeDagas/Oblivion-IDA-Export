unsigned int __thiscall sub_757BD0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757bd1*/
  sub_75F730(this, a2); /*0x757bd7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4146C.name); /*0x757be2*/
  end = v2->end; /*0x757be7*/
  capacity = v2->capacity; /*0x757beb*/
  a2 = v3; /*0x757bf4*/
  if ( end >= capacity ) /*0x757bf8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757c03*/
  return NiTArray_SetAt(v2, end, &a2); /*0x757c15*/
}
