unsigned int __thiscall sub_6E5800(float *this, unsigned __int16 *a2)
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
  unsigned int v12; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e5802*/
  sub_6ED580(this, a2); /*0x6e580a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E49C.name); /*0x6e5815*/
  end = v2->end; /*0x6e581a*/
  capacity = v2->capacity; /*0x6e581e*/
  a2 = v4; /*0x6e5827*/
  if ( end >= capacity ) /*0x6e582b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e5836*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e5843*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fFloatValue", *(this + 7)); /*0x6e5854*/
  v8 = v2->end; /*0x6e5859*/
  v9 = v2->capacity; /*0x6e585d*/
  a2 = v7; /*0x6e5866*/
  if ( v8 >= v9 ) /*0x6e586a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e5875*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6e5882*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_kFloatCPHandle", *((_DWORD *)this + 8)); /*0x6e5890*/
  v11 = v2->end; /*0x6e5895*/
  v12 = v2->capacity; /*0x6e5899*/
  a2 = v10; /*0x6e58a2*/
  if ( v11 >= v12 ) /*0x6e58a6*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6e58b1*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6e58c3*/
}
