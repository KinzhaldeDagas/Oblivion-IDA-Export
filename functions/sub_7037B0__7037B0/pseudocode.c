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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_720300(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3F964);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_akPolygon", *((_DWORD *)this + 0x16));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledPointer("m_ausPIndexer", *((_DWORD *)this + 0x17));
  v11 = v2->end;
  a2 = v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usMaxPQuantity", *(this + 0x30));
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usPGrowBy", *(this + 0x31));
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usPQuantity", *(this + 0x32));
  v19 = v2->end;
  a2 = v18;
  if ( v19 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usMaxVQuantity", *(this + 0x33));
  v21 = v2->end;
  v22 = v2->capacity;
  a2 = v20;
  if ( v21 >= v22 )
    NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize);
  NiTArray_SetAt(v2, v21, &a2);
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usVGrowBy", *(this + 0x34));
  v24 = v2->end;
  v25 = v2->capacity;
  a2 = v23;
  if ( v24 >= v25 )
    NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize);
  NiTArray_SetAt(v2, v24, &a2);
  v26 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usMaxIQuantity", *(this + 0x35));
  v27 = v2->end;
  a2 = v26;
  if ( v27 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v27 + v2->growSize);
  NiTArray_SetAt(v2, v27, &a2);
  v28 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort((int)"m_usIGrowBy", *(this + 0x36));
  v29 = v2->end;
  v30 = v2->capacity;
  a2 = v28;
  if ( v29 >= v30 )
    NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize);
  return NiTArray_SetAt(v2, v29, &a2);
}
