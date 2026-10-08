unsigned int __thiscall sub_7580C0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7580c1*/
  sub_75F730(this, a2); /*0x7580c7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B41658.name); /*0x7580d2*/
  end = v2->end; /*0x7580d7*/
  capacity = v2->capacity; /*0x7580db*/
  a2 = v3; /*0x7580e4*/
  if ( end >= capacity ) /*0x7580e8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7580f3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x758105*/
}
