unsigned int __thiscall sub_74D090(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x74d092*/
  sub_7531E0(this, a2); /*0x74d09a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B40968.name); /*0x74d0a5*/
  end = v2->end; /*0x74d0aa*/
  capacity = v2->capacity; /*0x74d0ae*/
  a2 = v4; /*0x74d0b7*/
  if ( end >= capacity ) /*0x74d0bb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x74d0c6*/
  NiTArray_SetAt(v2, end, &a2); /*0x74d0d3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Radius", *(this + 0x15)); /*0x74d0e4*/
  v8 = v2->end; /*0x74d0e9*/
  v9 = v2->capacity; /*0x74d0ed*/
  a2 = v7; /*0x74d0f6*/
  if ( v8 >= v9 ) /*0x74d0fa*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x74d105*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x74d117*/
}
