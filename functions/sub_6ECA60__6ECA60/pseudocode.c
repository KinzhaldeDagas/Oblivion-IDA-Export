unsigned int __thiscall sub_6ECA60(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6eca61*/
  NiTimeController_GetViewerStrings(this, a2); /*0x6eca67*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3EEA8.name); /*0x6eca72*/
  end = v2->end; /*0x6eca77*/
  capacity = v2->capacity; /*0x6eca7b*/
  a2 = v3; /*0x6eca84*/
  if ( end >= capacity ) /*0x6eca88*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6eca93*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6ecaa5*/
}
