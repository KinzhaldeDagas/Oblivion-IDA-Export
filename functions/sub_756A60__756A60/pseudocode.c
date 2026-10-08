unsigned int __thiscall sub_756A60(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x756a61*/
  sub_75F730(this, a2); /*0x756a67*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4116C.name); /*0x756a72*/
  end = v2->end; /*0x756a77*/
  capacity = v2->capacity; /*0x756a7b*/
  a2 = v3; /*0x756a84*/
  if ( end >= capacity ) /*0x756a88*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x756a93*/
  return NiTArray_SetAt(v2, end, &a2); /*0x756aa5*/
}
