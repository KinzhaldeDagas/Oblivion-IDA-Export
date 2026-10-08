unsigned int __thiscall sub_75D390(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x75d391*/
  sub_75F730(this, a2); /*0x75d397*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41B78.name); /*0x75d3a2*/
  end = v2->end; /*0x75d3a7*/
  capacity = v2->capacity; /*0x75d3ab*/
  a2 = v3; /*0x75d3b4*/
  if ( end >= capacity ) /*0x75d3b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x75d3c3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x75d3d5*/
}
