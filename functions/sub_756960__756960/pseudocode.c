unsigned int __thiscall sub_756960(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x756961*/
  sub_75F730(this, a2); /*0x756967*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41108.name); /*0x756972*/
  end = v2->end; /*0x756977*/
  capacity = v2->capacity; /*0x75697b*/
  a2 = v3; /*0x756984*/
  if ( end >= capacity ) /*0x756988*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x756993*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7569a5*/
}
