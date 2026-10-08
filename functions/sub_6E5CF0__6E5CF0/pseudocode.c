unsigned int __thiscall sub_6E5CF0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e5cf1*/
  sub_6E4F80(this, a2); /*0x6e5cf7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E4E8.name); /*0x6e5d02*/
  end = v2->end; /*0x6e5d07*/
  capacity = v2->capacity; /*0x6e5d0b*/
  a2 = v3; /*0x6e5d14*/
  if ( end >= capacity ) /*0x6e5d18*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e5d23*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e5d35*/
}
