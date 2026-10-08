// Oblivion NiTransformController viewer-string output. Appends generic controller/interpolator details and the concrete NiTransformController type string.
unsigned int __thiscall NiTransformController_GetViewerStrings(unsigned __int8 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6c3f61*/
  sub_6CE3F0(this, a2); /*0x6c3f67*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)LODWORD(qword_B3BB2C[0x3CB])); /*0x6c3f72*/
  end = v2->end; /*0x6c3f77*/
  capacity = v2->capacity; /*0x6c3f7b*/
  a2 = v3; /*0x6c3f84*/
  if ( end >= capacity ) /*0x6c3f88*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6c3f93*/
  return NiTArray_SetAt(v2, end, &a2); /*0x6c3fa5*/
}
