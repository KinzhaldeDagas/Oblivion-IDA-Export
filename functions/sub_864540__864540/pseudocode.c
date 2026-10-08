// Appends inherited viewer strings plus TallGrassTriStrips pLocalBound and instance count diagnostics.
unsigned int __thiscall TallGrassTriStrips__GetViewerStrings(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned __int16 *v6; // eax
  unsigned int v7; // edi
  unsigned int capacity; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x864542*/
  sub_719C60(this, a2); /*0x86454a*/
  v4 = (unsigned __int16 *)sub_72A040(this + 0x31, "pLocalBound"); /*0x86455a*/
  end = v2->end; /*0x86455f*/
  a2 = v4; /*0x864563*/
  if ( end >= v2->capacity ) /*0x86456d*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x864578*/
  NiTArray_SetAt(v2, end, &a2); /*0x864585*/
  v6 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("instance count", *((_WORD *)this + 0x60)); /*0x864597*/
  v7 = v2->end; /*0x86459c*/
  capacity = v2->capacity; /*0x8645a0*/
  a2 = v6; /*0x8645a9*/
  if ( v7 >= capacity ) /*0x8645ad*/
    NiTArray_SetSize((unsigned __int16 *)v2, v7 + v2->growSize); /*0x8645b8*/
  return NiTArray_SetAt(v2, v7, &a2); /*0x8645ca*/
}
