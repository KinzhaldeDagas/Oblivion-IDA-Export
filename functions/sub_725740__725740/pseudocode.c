unsigned int __thiscall sub_725740(float *this, NiTArray_NiTexturingPropertyMap *a2)
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
  unsigned int v15; // edi
  unsigned int v16; // ecx

  v3 = a2; /*0x725742*/
  sub_71A790(this, a2); /*0x72574a*/
  v5 = TESOutput_PrintString((char *)stru_B3FD80.name); /*0x725755*/
  end = v3->end; /*0x72575a*/
  capacity = v3->capacity; /*0x72575e*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x725767*/
  if ( end >= capacity ) /*0x72576b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x725776*/
  NiTArray_SetAt(v3, end, &a2); /*0x725783*/
  v8 = TESOutput_PrintLabeledFloat("m_fAtten0", *(this + 0x42)); /*0x725797*/
  v9 = v3->end; /*0x72579c*/
  v10 = v3->capacity; /*0x7257a0*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x7257a9*/
  if ( v9 >= v10 ) /*0x7257ad*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x7257b8*/
  NiTArray_SetAt(v3, v9, &a2); /*0x7257c5*/
  v11 = TESOutput_PrintLabeledFloat("m_fAtten1", *(this + 0x43)); /*0x7257d9*/
  v12 = v3->end; /*0x7257de*/
  v13 = v3->capacity; /*0x7257e2*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x7257eb*/
  if ( v12 >= v13 ) /*0x7257ef*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x7257fa*/
  NiTArray_SetAt(v3, v12, &a2); /*0x725807*/
  v14 = TESOutput_PrintLabeledFloat("m_fAtten2", *(this + 0x44)); /*0x72581b*/
  v15 = v3->end; /*0x725820*/
  v16 = v3->capacity; /*0x725824*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v14; /*0x72582d*/
  if ( v15 >= v16 ) /*0x725831*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x72583c*/
  return NiTArray_SetAt(v3, v15, &a2); /*0x72584e*/
}
