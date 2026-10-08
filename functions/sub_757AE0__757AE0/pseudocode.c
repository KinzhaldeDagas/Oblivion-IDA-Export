unsigned int __thiscall sub_757AE0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757ae1*/
  sub_75F730(this, a2); /*0x757ae7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4140C.name); /*0x757af2*/
  end = v2->end; /*0x757af7*/
  capacity = v2->capacity; /*0x757afb*/
  a2 = v3; /*0x757b04*/
  if ( end >= capacity ) /*0x757b08*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757b13*/
  return NiTArray_SetAt(v2, end, &a2); /*0x757b25*/
}
