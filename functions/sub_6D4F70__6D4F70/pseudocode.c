unsigned int __thiscall sub_6D4F70(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d4f72*/
  sub_7009A0(this, a2); /*0x6d4f7a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3D86C.name); /*0x6d4f85*/
  end = v2->end; /*0x6d4f8a*/
  capacity = v2->capacity; /*0x6d4f8e*/
  a2 = v4; /*0x6d4f97*/
  if ( end >= capacity ) /*0x6d4f9b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d4fa6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d4fb3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumUOffsetKeys", *(this + 2)); /*0x6d4fc1*/
  v8 = v2->end; /*0x6d4fc6*/
  v9 = v2->capacity; /*0x6d4fca*/
  a2 = v7; /*0x6d4fd3*/
  if ( v8 >= v9 ) /*0x6d4fd7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d4fe2*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6d4fef*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumUTilingKeys", *(this + 8)); /*0x6d4ffd*/
  v11 = v2->end; /*0x6d5002*/
  a2 = v10; /*0x6d5006*/
  if ( v11 >= v2->capacity ) /*0x6d5013*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6d501e*/
  NiTArray_SetAt(v2, v11, &a2); /*0x6d502b*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumVOffsetKeys", *(this + 5)); /*0x6d5039*/
  v13 = v2->end; /*0x6d503e*/
  v14 = v2->capacity; /*0x6d5042*/
  a2 = v12; /*0x6d504b*/
  if ( v13 >= v14 ) /*0x6d504f*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6d505a*/
  NiTArray_SetAt(v2, v13, &a2); /*0x6d5067*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumVTilingKeys", *(this + 0xB)); /*0x6d5075*/
  v16 = v2->end; /*0x6d507a*/
  v17 = v2->capacity; /*0x6d507e*/
  a2 = v15; /*0x6d5087*/
  if ( v16 >= v17 ) /*0x6d508b*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x6d5096*/
  return NiTArray_SetAt(v2, v16, &a2); /*0x6d50a8*/
}
