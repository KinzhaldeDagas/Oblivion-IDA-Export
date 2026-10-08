unsigned int __thiscall sub_6E6670(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e6671*/
  sub_6E6AC0(this, a2); /*0x6e6677*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E5F0.name); /*0x6e6682*/
  end = v2->end; /*0x6e6687*/
  capacity = v2->capacity; /*0x6e668b*/
  a2 = v3; /*0x6e6694*/
  if ( end >= capacity ) /*0x6e6698*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e66a3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e66b5*/
}
