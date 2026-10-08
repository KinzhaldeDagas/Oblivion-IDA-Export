unsigned int __thiscall sub_756800(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x756801*/
  sub_75F4B0(this, a2); /*0x756807*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B410AC.name); /*0x756812*/
  end = v2->end; /*0x756817*/
  capacity = v2->capacity; /*0x75681b*/
  a2 = v3; /*0x756824*/
  if ( end >= capacity ) /*0x756828*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x756833*/
  return NiTArray_SetAt(v2, end, &a2); /*0x756845*/
}
