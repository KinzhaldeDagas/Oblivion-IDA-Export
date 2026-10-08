unsigned int __thiscall sub_6E6040(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e6041*/
  sub_6E5400(this, a2); /*0x6e6047*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E548.name); /*0x6e6052*/
  end = v2->end; /*0x6e6057*/
  capacity = v2->capacity; /*0x6e605b*/
  a2 = v3; /*0x6e6064*/
  if ( end >= capacity ) /*0x6e6068*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e6073*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e6085*/
}
