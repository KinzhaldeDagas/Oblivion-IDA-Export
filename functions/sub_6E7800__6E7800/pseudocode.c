unsigned int __thiscall sub_6E7800(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e7802*/
  sub_7009A0(this, a2); /*0x6e780a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E6F0.name); /*0x6e7815*/
  end = v2->end; /*0x6e781a*/
  capacity = v2->capacity; /*0x6e781e*/
  a2 = v4; /*0x6e7827*/
  if ( end >= capacity ) /*0x6e782b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e7836*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e7843*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiControlPointCount", *(this + 4)); /*0x6e7851*/
  v8 = v2->end; /*0x6e7856*/
  v9 = v2->capacity; /*0x6e785a*/
  a2 = v7; /*0x6e7863*/
  if ( v8 >= v9 ) /*0x6e7867*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e7872*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6e787f*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiCompactControlPointCount", *(this + 5)); /*0x6e788d*/
  v11 = v2->end; /*0x6e7892*/
  a2 = v10; /*0x6e7896*/
  if ( v11 >= v2->capacity ) /*0x6e78a3*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6e78ae*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x6e78c0*/
}
