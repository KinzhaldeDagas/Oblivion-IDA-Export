unsigned int __thiscall sub_7037B0(_WORD *this, unsigned __int16 *a2)
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
  unsigned int v16; // ebx
  unsigned int v17; // edx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // edx
  unsigned __int16 *v26; // eax
  unsigned int v27; // ebx
  unsigned __int16 *v28; // eax
  unsigned int v29; // edi
  unsigned int v30; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x7037b2*/
  sub_720300(this, a2); /*0x7037ba*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3F964.name); /*0x7037c5*/
  end = v2->end; /*0x7037ca*/
  capacity = v2->capacity; /*0x7037ce*/
  a2 = v4; /*0x7037d7*/
  if ( end >= capacity ) /*0x7037db*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x7037e6*/
  NiTArray_SetAt(v2, end, &a2); /*0x7037f3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_akPolygon", *((_DWORD *)this + 0x16)); /*0x703801*/
  v8 = v2->end; /*0x703806*/
  v9 = v2->capacity; /*0x70380a*/
  a2 = v7; /*0x703813*/
  if ( v8 >= v9 ) /*0x703817*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x703822*/
  NiTArray_SetAt(v2, v8, &a2); /*0x70382f*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_ausPIndexer", *((_DWORD *)this + 0x17)); /*0x70383d*/
  v11 = v2->end; /*0x703842*/
  a2 = v10; /*0x703846*/
  if ( v11 >= v2->capacity ) /*0x703853*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x70385e*/
  NiTArray_SetAt(v2, v11, &a2); /*0x70386b*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usMaxPQuantity", *(this + 0x30)); /*0x70387a*/
  v13 = v2->end; /*0x70387f*/
  v14 = v2->capacity; /*0x703883*/
  a2 = v12; /*0x70388c*/
  if ( v13 >= v14 ) /*0x703890*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x70389b*/
  NiTArray_SetAt(v2, v13, &a2); /*0x7038a8*/
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usPGrowBy", *(this + 0x31)); /*0x7038b7*/
  v16 = v2->end; /*0x7038bc*/
  v17 = v2->capacity; /*0x7038c0*/
  a2 = v15; /*0x7038c9*/
  if ( v16 >= v17 ) /*0x7038cd*/
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize); /*0x7038d8*/
  NiTArray_SetAt(v2, v16, &a2); /*0x7038e5*/
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usPQuantity", *(this + 0x32)); /*0x7038f4*/
  v19 = v2->end; /*0x7038f9*/
  a2 = v18; /*0x7038fd*/
  if ( v19 >= v2->capacity ) /*0x70390a*/
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize); /*0x703915*/
  NiTArray_SetAt(v2, v19, &a2); /*0x703922*/
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usMaxVQuantity", *(this + 0x33)); /*0x703931*/
  v21 = v2->end; /*0x703936*/
  v22 = v2->capacity; /*0x70393a*/
  a2 = v20; /*0x703943*/
  if ( v21 >= v22 ) /*0x703947*/
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize); /*0x703952*/
  NiTArray_SetAt(v2, v21, &a2); /*0x70395f*/
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usVGrowBy", *(this + 0x34)); /*0x70396e*/
  v24 = v2->end; /*0x703973*/
  v25 = v2->capacity; /*0x703977*/
  a2 = v23; /*0x703980*/
  if ( v24 >= v25 ) /*0x703984*/
    NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize); /*0x70398f*/
  NiTArray_SetAt(v2, v24, &a2); /*0x70399c*/
  v26 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usMaxIQuantity", *(this + 0x35)); /*0x7039ab*/
  v27 = v2->end; /*0x7039b0*/
  a2 = v26; /*0x7039b4*/
  if ( v27 >= v2->capacity ) /*0x7039c1*/
    NiTArray_SetSize((unsigned __int16 *)v2, v27 + v2->growSize); /*0x7039cc*/
  NiTArray_SetAt(v2, v27, &a2); /*0x7039d9*/
  v28 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usIGrowBy", *(this + 0x36)); /*0x7039e8*/
  v29 = v2->end; /*0x7039ed*/
  v30 = v2->capacity; /*0x7039f1*/
  a2 = v28; /*0x7039fa*/
  if ( v29 >= v30 ) /*0x7039fe*/
    NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize); /*0x703a09*/
  return NiTArray_SetAt(v2, v29, &a2); /*0x703a1b*/
}
