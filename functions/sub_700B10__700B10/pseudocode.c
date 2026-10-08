unsigned int __thiscall sub_700B10(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x700b11*/
  sub_700540(this, a2); /*0x700b17*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F68C.name); /*0x700b22*/
  end = v3->end; /*0x700b27*/
  capacity = v3->capacity; /*0x700b2b*/
  a2 = v4; /*0x700b34*/
  if ( end >= capacity ) /*0x700b38*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x700b43*/
  return NiTArray_SetAt(v3, end, &a2); /*0x700b55*/
}
