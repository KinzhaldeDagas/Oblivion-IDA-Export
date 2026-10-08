unsigned int __thiscall sub_753DC0(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x753dc1*/
  NiTimeController_GetViewerStrings(this, a2); /*0x753dc7*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40DFC.name); /*0x753dd2*/
  end = v2->end; /*0x753dd7*/
  capacity = v2->capacity; /*0x753ddb*/
  a2 = v3; /*0x753de4*/
  if ( end >= capacity ) /*0x753de8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x753df3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x753e05*/
}
