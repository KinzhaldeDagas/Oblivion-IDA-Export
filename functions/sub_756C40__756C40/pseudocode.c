unsigned int __thiscall sub_756C40(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x756c41*/
  sub_75F730(this, a2); /*0x756c47*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41224.name); /*0x756c52*/
  end = v2->end; /*0x756c57*/
  capacity = v2->capacity; /*0x756c5b*/
  a2 = v3; /*0x756c64*/
  if ( end >= capacity ) /*0x756c68*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x756c73*/
  return NiTArray_SetAt(v2, end, &a2); /*0x756c85*/
}
