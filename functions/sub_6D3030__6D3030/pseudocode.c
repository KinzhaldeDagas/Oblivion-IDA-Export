unsigned int __thiscall sub_6D3030(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d3032*/
  sub_6EC460(this, a2); /*0x6d303a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3CFBC.name); /*0x6d3045*/
  end = v2->end; /*0x6d304a*/
  capacity = v2->capacity; /*0x6d304e*/
  a2 = v4; /*0x6d3057*/
  if ( end >= capacity ) /*0x6d305b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d3066*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d3073*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fFloatValue", *((float *)this + 3)); /*0x6d3084*/
  v8 = v2->end; /*0x6d3089*/
  v9 = v2->capacity; /*0x6d308d*/
  a2 = v7; /*0x6d3096*/
  if ( v8 >= v9 ) /*0x6d309a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d30a5*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6d30b2*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_spFloatData", *((_DWORD *)this + 4)); /*0x6d30c0*/
  v11 = v2->end; /*0x6d30c5*/
  v12 = v2->capacity; /*0x6d30c9*/
  a2 = v10; /*0x6d30d2*/
  if ( v11 >= v12 ) /*0x6d30d6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6d30e1*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6d30f3*/
}
