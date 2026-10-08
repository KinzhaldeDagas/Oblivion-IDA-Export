unsigned int __thiscall sub_6FF390(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6ff392*/
  sub_752EC0(this, a2); /*0x6ff39a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F554.name); /*0x6ff3a5*/
  end = v2->end; /*0x6ff3aa*/
  capacity = v2->capacity; /*0x6ff3ae*/
  a2 = v4; /*0x6ff3b7*/
  if ( end >= capacity ) /*0x6ff3bb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6ff3c6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6ff3d3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Damping", *(this + 8)); /*0x6ff3e4*/
  v8 = v2->end; /*0x6ff3e9*/
  v9 = v2->capacity; /*0x6ff3ed*/
  a2 = v7; /*0x6ff3f6*/
  if ( v8 >= v9 ) /*0x6ff3fa*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6ff405*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6ff417*/
}
