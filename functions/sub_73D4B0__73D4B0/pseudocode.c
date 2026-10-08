unsigned int __userpurge sub_73D4B0@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
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

  v3 = a3; /*0x73d4b2*/
  sub_725740(this, a2, a3); /*0x73d4ba*/
  v5 = TESOutput_PrintString((char *)stru_B40190.name); /*0x73d4c5*/
  end = v3->end; /*0x73d4ca*/
  capacity = v3->capacity; /*0x73d4ce*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x73d4d7*/
  if ( end >= capacity ) /*0x73d4db*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x73d4e6*/
  NiTArray_SetAt(v3, end, &a3); /*0x73d4f3*/
  v8 = sub_707280(this + 0x45, "m_kWorldDir"); /*0x73d503*/
  v9 = v3->end; /*0x73d508*/
  v10 = v3->capacity; /*0x73d50c*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x73d512*/
  if ( v9 >= v10 ) /*0x73d516*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x73d521*/
  NiTArray_SetAt(v3, v9, &a3); /*0x73d52e*/
  v11 = TESOutput_PrintLabeledFloat("m_fSpotAngle", *(this + 0x48)); /*0x73d542*/
  v12 = v3->end; /*0x73d547*/
  v13 = v3->capacity; /*0x73d54b*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x73d554*/
  if ( v12 >= v13 ) /*0x73d558*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x73d563*/
  NiTArray_SetAt(v3, v12, &a3); /*0x73d570*/
  v14 = TESOutput_PrintLabeledFloat("m_fSpotExponent", *(this + 0x49)); /*0x73d584*/
  v15 = v3->end; /*0x73d589*/
  v16 = v3->capacity; /*0x73d58d*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v14; /*0x73d596*/
  if ( v15 >= v16 ) /*0x73d59a*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x73d5a5*/
  return NiTArray_SetAt(v3, v15, &a3); /*0x73d5b7*/
}
