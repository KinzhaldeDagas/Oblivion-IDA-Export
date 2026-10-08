unsigned int __thiscall sub_742320(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v3 = a2; /*0x742321*/
  sub_71A790(this, a2); /*0x742327*/
  v4 = TESOutput_PrintString((char *)stru_B40224.name); /*0x742332*/
  end = v3->end; /*0x742337*/
  capacity = v3->capacity; /*0x74233b*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v4; /*0x742344*/
  if ( end >= capacity ) /*0x742348*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x742353*/
  return NiTArray_SetAt(v3, end, &a2); /*0x742365*/
}
