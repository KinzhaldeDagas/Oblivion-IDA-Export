// [Verified] GeometryDecalShaderProperty vtable slot +0x30 (slot 12) viewer/diagnostic string callback. Calls the base BSShaderProperty viewer-string routine, then appends the class-specific name; this is diagnostic output, not stream serialization.
unsigned int __thiscall GeometryDecalShaderProperty_GetViewerStrings(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x864901*/
  sub_7EE5D0(this, a2); /*0x864907*/
  v3 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4335C.name); /*0x864912*/
  end = v2->end; /*0x864917*/
  capacity = v2->capacity; /*0x86491b*/
  a2 = v3; /*0x864924*/
  if ( end >= capacity ) /*0x864928*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x864933*/
  return NiTArray_SetAt(v2, end, &a2); /*0x864945*/
}
