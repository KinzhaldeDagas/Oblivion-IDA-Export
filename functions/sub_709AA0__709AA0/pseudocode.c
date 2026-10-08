unsigned int __thiscall sub_709AA0(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // ecx
  unsigned __int16 *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // edi
  unsigned int v25; // ecx

  v3 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x709aa2*/
  sub_700B10((int *)this, a2); /*0x709aaa*/
  v5 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3FA9C.name); /*0x709ab5*/
  end = v3->end; /*0x709aba*/
  capacity = v3->capacity; /*0x709abe*/
  a2 = v5; /*0x709ac7*/
  if ( end >= capacity ) /*0x709acb*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x709ad6*/
  NiTArray_SetAt(v3, end, &a2); /*0x709ae3*/
  v8 = (unsigned __int16 *)sub_709370(this + 7, "m_amb"); /*0x709af0*/
  v9 = v3->end; /*0x709af5*/
  v10 = v3->capacity; /*0x709af9*/
  a2 = v8; /*0x709aff*/
  if ( v9 >= v10 ) /*0x709b03*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x709b0e*/
  NiTArray_SetAt(v3, v9, &a2); /*0x709b1b*/
  v11 = (unsigned __int16 *)sub_709370(this + 0xA, "m_diff"); /*0x709b28*/
  v12 = v3->end; /*0x709b2d*/
  v13 = v3->capacity; /*0x709b31*/
  a2 = v11; /*0x709b37*/
  if ( v12 >= v13 ) /*0x709b3b*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x709b46*/
  NiTArray_SetAt(v3, v12, &a2); /*0x709b53*/
  v14 = (unsigned __int16 *)sub_709370(this + 0xD, "m_spec"); /*0x709b60*/
  v15 = v3->end; /*0x709b65*/
  v16 = v3->capacity; /*0x709b69*/
  a2 = v14; /*0x709b6f*/
  if ( v15 >= v16 ) /*0x709b73*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x709b7e*/
  NiTArray_SetAt(v3, v15, &a2); /*0x709b8b*/
  v17 = (unsigned __int16 *)sub_709370(this + 0x10, "m_emit"); /*0x709b98*/
  v18 = v3->end; /*0x709b9d*/
  v19 = v3->capacity; /*0x709ba1*/
  a2 = v17; /*0x709ba7*/
  if ( v18 >= v19 ) /*0x709bab*/
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize); /*0x709bb6*/
  NiTArray_SetAt(v3, v18, &a2); /*0x709bc3*/
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fShine", *(this + 0x13)); /*0x709bd4*/
  v21 = v3->end; /*0x709bd9*/
  v22 = v3->capacity; /*0x709bdd*/
  a2 = v20; /*0x709be6*/
  if ( v21 >= v22 ) /*0x709bea*/
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize); /*0x709bf5*/
  NiTArray_SetAt(v3, v21, &a2); /*0x709c02*/
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("m_fAlpha", *(this + 0x14)); /*0x709c13*/
  v24 = v3->end; /*0x709c18*/
  v25 = v3->capacity; /*0x709c1c*/
  a2 = v23; /*0x709c25*/
  if ( v24 >= v25 ) /*0x709c29*/
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize); /*0x709c34*/
  return NiTArray_SetAt(v3, v24, &a2); /*0x709c46*/
}
