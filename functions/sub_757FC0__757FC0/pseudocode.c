unsigned int __thiscall sub_757FC0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x757fc1*/
  sub_75F730(this, a2); /*0x757fc7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B415F4.name); /*0x757fd2*/
  end = v2->end; /*0x757fd7*/
  capacity = v2->capacity; /*0x757fdb*/
  a2 = v3; /*0x757fe4*/
  if ( end >= capacity ) /*0x757fe8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x757ff3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x758005*/
}
