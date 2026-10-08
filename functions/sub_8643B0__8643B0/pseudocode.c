// Appends inherited shader-property viewer strings followed by the Lighting30ShaderProperty class label.
unsigned int __thiscall sub_8643B0(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v3; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx

  v2 = a2; /*0x8643b1*/
  BSShaderPPLightingProperty_GetViewerStrings(this, a2); /*0x8643b7*/
  v3 = TESOutput_PrintString((char *)LODWORD(OB_ShaderConstantStorage_010201A0[0x6A3])); /*0x8643c2*/
  end = v2->end; /*0x8643c7*/
  capacity = v2->capacity; /*0x8643cb*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v3; /*0x8643d4*/
  if ( end >= capacity ) /*0x8643d8*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8643e3*/
  return NiTArray_SetAt(v2, end, &a2); /*0x8643f5*/
}
