unsigned int __userpurge sub_741C20@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  char *v5; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // ecx
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx

  v3 = a3; /*0x741c22*/
  sub_70BAE0(this, a2, a3); /*0x741c2a*/
  v5 = TESOutput_PrintString((char *)stru_B4020C.name); /*0x741c35*/
  end = v3->end; /*0x741c3a*/
  capacity = v3->capacity; /*0x741c3e*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v5; /*0x741c47*/
  if ( end >= capacity ) /*0x741c4b*/
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize); /*0x741c56*/
  NiTArray_SetAt(v3, end, &a3); /*0x741c63*/
  v8 = sub_716E40(this + 0x37, "m_kModelPlane"); /*0x741c73*/
  v9 = v3->end; /*0x741c78*/
  v10 = v3->capacity; /*0x741c7c*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v8; /*0x741c82*/
  if ( v9 >= v10 ) /*0x741c86*/
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize); /*0x741c91*/
  NiTArray_SetAt(v3, v9, &a3); /*0x741c9e*/
  v11 = sub_716E40(this + 0x3B, "m_kWorldPlane"); /*0x741cae*/
  v12 = v3->end; /*0x741cb3*/
  v13 = v3->capacity; /*0x741cb7*/
  a3 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x741cbd*/
  if ( v12 >= v13 ) /*0x741cc1*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x741ccc*/
  return NiTArray_SetAt(v3, v12, &a3); /*0x741cde*/
}
