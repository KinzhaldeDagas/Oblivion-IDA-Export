unsigned int __thiscall sub_6D2430(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d2431*/
  sub_6EC1D0(this, a2); /*0x6d2437*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CF1C.name); /*0x6d2442*/
  end = v2->end; /*0x6d2447*/
  capacity = v2->capacity; /*0x6d244b*/
  a2 = v3; /*0x6d2454*/
  if ( end >= capacity ) /*0x6d2458*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d2463*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6d2475*/
}
