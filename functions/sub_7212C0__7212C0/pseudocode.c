unsigned int __thiscall sub_7212C0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7212c2*/
  sub_721730(this, a2); /*0x7212ca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FD3C.name); /*0x7212d5*/
  end = v2->end; /*0x7212da*/
  capacity = v2->capacity; /*0x7212de*/
  a2 = v4; /*0x7212e7*/
  if ( end >= capacity ) /*0x7212eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7212f6*/
  NiTArray_SetAt(v2, end, &a2); /*0x721303*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fValue", *(this + 3)); /*0x721314*/
  v8 = v2->end; /*0x721319*/
  v9 = v2->capacity; /*0x72131d*/
  a2 = v7; /*0x721326*/
  if ( v8 >= v9 ) /*0x72132a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x721335*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x721347*/
}
