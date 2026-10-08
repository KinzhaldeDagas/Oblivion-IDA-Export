unsigned int __thiscall sub_6E0EA0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e0ea1*/
  sub_6ECC30(this, a2); /*0x6e0ea7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E00C.name); /*0x6e0eb2*/
  end = v2->end; /*0x6e0eb7*/
  capacity = v2->capacity; /*0x6e0ebb*/
  a2 = v3; /*0x6e0ec4*/
  if ( end >= capacity ) /*0x6e0ec8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e0ed3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e0ee5*/
}
