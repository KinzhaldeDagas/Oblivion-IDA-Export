unsigned int __thiscall sub_6D9390(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d9391*/
  NiTimeController_GetViewerStrings(this, a2); /*0x6d9397*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DBDC.name); /*0x6d93a2*/
  end = v2->end; /*0x6d93a7*/
  capacity = v2->capacity; /*0x6d93ab*/
  a2 = v3; /*0x6d93b4*/
  if ( end >= capacity ) /*0x6d93b8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d93c3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6d93d5*/
}
