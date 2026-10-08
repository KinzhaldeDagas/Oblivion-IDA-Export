// positive sp value has been detected, the output may be wrong!
unsigned int __userpurge def_726FA2@<eax>(int a1@<ebx>, NiTArray_NiTexturingPropertyMap *a2)
{
  char *v2; // eax
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned int end; // edi
  unsigned int capacity; // ecx
  char *v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // edx
  char *v9; // eax
  unsigned int v10; // edi
  char *v11; // eax
  unsigned int v12; // edi
  unsigned int v13; // ecx
  char *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // edx
  char *v17; // eax
  unsigned int v18; // edi
  char *v19; // eax
  unsigned int v20; // edi
  unsigned int v21; // edx
  char *v23; // eax
  unsigned int v24; // edi
  char *v25; // [esp-4h] [ebp-4h] BYREF

  v2 = TESOutput_PrintLabeledString("        m_uiType", "UNKNOWN!!!"); /*0x727563*/
  v3 = a2; /*0x727568*/
  end = a2->end; /*0x72756c*/
  capacity = a2->capacity; /*0x727570*/
  v25 = v2; /*0x727579*/
  if ( end >= capacity ) /*0x72757d*/
    NiTArray_SetSize((unsigned __int16 *)a2, end + a2->growSize); /*0x727588*/
  NiTArray_SetAt(v3, end, &v25); /*0x727595*/
  v6 = TESOutput_PrintLabeledUnsignedInt("        m_uiUnitSize", *(_DWORD *)(a1 + 8)); /*0x7275a3*/
  v7 = v3->end; /*0x7275a8*/
  v8 = v3->capacity; /*0x7275ac*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v6; /*0x7275b5*/
  if ( v7 >= v8 ) /*0x7275b9*/
    NiTArray_SetSize((unsigned __int16 *)v3, v7 + v3->growSize); /*0x7275c4*/
  NiTArray_SetAt(v3, v7, &a2); /*0x7275d1*/
  v9 = TESOutput_PrintLabeledUnsignedInt("        m_uiTotalSize", *(_DWORD *)(a1 + 0xC)); /*0x7275df*/
  v10 = v3->end; /*0x7275e4*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v9; /*0x7275e8*/
  if ( v10 >= v3->capacity ) /*0x7275f5*/
    NiTArray_SetSize((unsigned __int16 *)v3, v10 + v3->growSize); /*0x727600*/
  NiTArray_SetAt(v3, v10, &a2); /*0x72760d*/
  v11 = TESOutput_PrintLabeledUnsignedInt("        m_uiStride", *(_DWORD *)(a1 + 0x10)); /*0x72761b*/
  v12 = v3->end; /*0x727620*/
  v13 = v3->capacity; /*0x727624*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v11; /*0x72762d*/
  if ( v12 >= v13 ) /*0x727631*/
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize); /*0x72763c*/
  NiTArray_SetAt(v3, v12, &a2); /*0x727649*/
  v14 = TESOutput_PrintLabeledUnsignedInt("        m_uiBlockIndex", *(_DWORD *)(a1 + 0x14)); /*0x727657*/
  v15 = v3->end; /*0x72765c*/
  v16 = v3->capacity; /*0x727660*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v14; /*0x727669*/
  if ( v15 >= v16 ) /*0x72766d*/
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize); /*0x727678*/
  NiTArray_SetAt(v3, v15, &a2); /*0x727685*/
  v17 = TESOutput_PrintLabeledUnsignedInt("        m_uiBlockOffset", *(_DWORD *)(a1 + 0x18)); /*0x727693*/
  v18 = v3->end; /*0x727698*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v17; /*0x72769c*/
  if ( v18 >= v3->capacity ) /*0x7276a9*/
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize); /*0x7276b4*/
  NiTArray_SetAt(v3, v18, &a2); /*0x7276c1*/
  LOBYTE(a2) = *(_BYTE *)a1 & 1; /*0x7276ca*/
  v19 = TESOutput_PrintLabeledBool("        Keep", (char)a2); /*0x7276d8*/
  v20 = v3->end; /*0x7276dd*/
  v21 = v3->capacity; /*0x7276e1*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v19; /*0x7276ea*/
  if ( v20 >= v21 ) /*0x7276ee*/
    NiTArray_SetSize((unsigned __int16 *)v3, v20 + v3->growSize); /*0x7276f9*/
  NiTArray_SetAt(v3, v20, &a2); /*0x727706*/
  if ( (*(_BYTE *)a1 & 6) == 2 ) /*0x727714*/
  {
    v23 = TESOutput_PrintLabeledString("        Consistency", "MUTABLE"); /*0x72775a*/
  }
  else
  {
    if ( (*(_BYTE *)a1 & 6) == 4 ) /*0x727719*/
    {
      a2 = (NiTArray_NiTexturingPropertyMap *)TESOutput_PrintLabeledString("        Consistency", "VOLATILE"); /*0x727739*/
      return NiTArray_Add((unsigned __int16 *)v3, &a2); /*0x727746*/
    }
    v23 = TESOutput_PrintLabeledString("        Consistency", "STATIC"); /*0x72774e*/
  }
  v24 = v3->end; /*0x72775f*/
  a2 = (NiTArray_NiTexturingPropertyMap *)v23; /*0x727763*/
  if ( v24 >= v3->capacity ) /*0x727770*/
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize); /*0x72777b*/
  return NiTArray_SetAt(v3, v24, &a2); /*0x727746*/
}
