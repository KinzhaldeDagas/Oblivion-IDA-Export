unsigned int __thiscall sub_754F80(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x754f81*/
  NiTimeController_GetViewerStrings(this, a2); /*0x754f87*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40F30.name); /*0x754f92*/
  end = v2->end; /*0x754f97*/
  capacity = v2->capacity; /*0x754f9b*/
  a2 = v3; /*0x754fa4*/
  if ( end >= capacity ) /*0x754fa8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x754fb3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x754fc5*/
}
