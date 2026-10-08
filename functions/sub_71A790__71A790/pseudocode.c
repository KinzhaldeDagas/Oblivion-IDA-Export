unsigned int __thiscall sub_71A790(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  char *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  char *v17; // eax
  unsigned int v18; // edi
  unsigned int v19; // ecx

  v3 = a2; /*0x71a792*/
  sub_709160(this, a2); /*0x71a79a*/
  v5 = TESOutput_PrintString((char *)stru_B3FD14.name); /*0x71a7a5*/
  end = v3->end; /*0x71a7aa*/
  capacity = v3->capacity; /*0x71a7ae*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x71a7b7*/
  if ( end >= capacity ) /*0x71a7bb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x71a7c6*/
  NiTArray_SetAt(v3, end, &a2); /*0x71a7d3*/
  v8 = TESOutput_PrintLabeledFloat("m_fDimmer", *(this + 0x37)); /*0x71a7e7*/
  v9 = v3->end; /*0x71a7ec*/
  v10 = v3->capacity; /*0x71a7f0*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x71a7f9*/
  if ( v9 >= v10 ) /*0x71a7fd*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x71a808*/
  NiTArray_SetAt(v3, v9, &a2); /*0x71a815*/
  v11 = sub_709370(this + 0x38, "m_kAmb"); /*0x71a825*/
  v12 = v3->end; /*0x71a82a*/
  v13 = v3->capacity; /*0x71a82e*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x71a834*/
  if ( v12 >= v13 ) /*0x71a838*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x71a843*/
  NiTArray_SetAt(v3, v12, &a2); /*0x71a850*/
  v14 = sub_709370(this + 0x3B, "m_kDiff"); /*0x71a860*/
  v15 = v3->end; /*0x71a865*/
  v16 = v3->capacity; /*0x71a869*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v14; /*0x71a86f*/
  if ( v15 >= v16 ) /*0x71a873*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x71a87e*/
  NiTArray_SetAt(v3, v15, &a2); /*0x71a88b*/
  v17 = sub_709370(this + 0x3E, "m_kSpec"); /*0x71a89b*/
  v18 = v3->end; /*0x71a8a0*/
  v19 = v3->capacity; /*0x71a8a4*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v17; /*0x71a8aa*/
  if ( v18 >= v19 ) /*0x71a8ae*/
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize); /*0x71a8b9*/
  return NiTArray_SetAt(v3, v18, &a2); /*0x71a8cb*/
}
