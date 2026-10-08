unsigned int __thiscall sub_6DDE70(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6dde71*/
  NiTimeController_GetViewerStrings(this, a2); /*0x6dde77*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DDC0.name); /*0x6dde82*/
  end = v2->end; /*0x6dde87*/
  capacity = v2->capacity; /*0x6dde8b*/
  a2 = v3; /*0x6dde94*/
  if ( end >= capacity ) /*0x6dde98*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ddea3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6ddeb5*/
}
