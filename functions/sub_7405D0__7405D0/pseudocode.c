unsigned int __thiscall sub_7405D0(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7405d1*/
  sub_73FB80(this, a2); /*0x7405d7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B401DC.name); /*0x7405e2*/
  end = v2->end; /*0x7405e7*/
  capacity = v2->capacity; /*0x7405eb*/
  a2 = v3; /*0x7405f4*/
  if ( end >= capacity ) /*0x7405f8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x740603*/
  return NiTArray_SetAt(v2, end, &a2); /*0x740615*/
}
