unsigned int __cdecl def_8A5290(unsigned __int16 *a1, char *a2)
{
  char *v2; // eax
  unsigned int v3; // edi
  unsigned int v4; // edx

  v2 = TESOutput_PrintLabeledString("MOTION", "INVALID"); /*0x8a535c*/
  v3 = a1[5]; /*0x8a5365*/
  v4 = a1[4]; /*0x8a5369*/
  a2 = v2; /*0x8a5372*/
  if ( v3 >= v4 ) /*0x8a5376*/
    NiTArray_SetSize(a1, v3 + a1[7]); /*0x8a5381*/
  return NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)a1, v3, &a2); /*0x8a5393*/
}
