unsigned int __thiscall sub_6D05C0(unsigned __int8 *this, char *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d05c2*/
  NiTimeController_GetViewerStrings(this, (unsigned __int16 *)a2); /*0x6d05ca*/
  v4 = TESOutput_PrintString((char *)stru_B3CDF8.name); /*0x6d05d5*/
  end = v2->end; /*0x6d05da*/
  capacity = v2->capacity; /*0x6d05de*/
  a2 = v4; /*0x6d05e7*/
  if ( end >= capacity ) /*0x6d05eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d05f6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d0603*/
  LOBYTE(a2) = (*(this + 8) & 0x20) != 0; /*0x6d0611*/
  v7 = TESOutput_PrintLabeledBool("IsManagerControlled", (char)a2); /*0x6d061f*/
  v8 = v2->end; /*0x6d0624*/
  a2 = v7; /*0x6d0628*/
  if ( v8 >= v2->capacity ) /*0x6d0635*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d0640*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6d0652*/
}
