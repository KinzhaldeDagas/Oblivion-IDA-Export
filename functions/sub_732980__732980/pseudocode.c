unsigned int __thiscall sub_732980(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x732981*/
  sub_7009A0(this, a2); /*0x732987*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40008.name); /*0x732992*/
  end = v2->end; /*0x732997*/
  capacity = v2->capacity; /*0x73299b*/
  a2 = v3; /*0x7329a4*/
  if ( end >= capacity ) /*0x7329a8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7329b3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x7329c5*/
}
