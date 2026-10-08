unsigned int __thiscall sub_6E6320(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e6321*/
  sub_6E5800(this, a2); /*0x6e6327*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E5B4.name); /*0x6e6332*/
  end = v2->end; /*0x6e6337*/
  capacity = v2->capacity; /*0x6e633b*/
  a2 = v3; /*0x6e6344*/
  if ( end >= capacity ) /*0x6e6348*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e6353*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e6365*/
}
