unsigned int __thiscall sub_6E06F0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e06f1*/
  NiTimeController_GetViewerStrings(this, a2); /*0x6e06f7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DF34.name); /*0x6e0702*/
  end = v2->end; /*0x6e0707*/
  capacity = v2->capacity; /*0x6e070b*/
  a2 = v3; /*0x6e0714*/
  if ( end >= capacity ) /*0x6e0718*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e0723*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6e0735*/
}
