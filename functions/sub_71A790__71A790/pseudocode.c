unsigned int __userpurge sub_71A790@<eax>(float *this@<ecx>, int a2@<ebp>, NiTArray_NiTexturingPropertyMap *a3)
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

  v3 = a3;
  sub_709160(this, a2, a3);
  v5 = TESOutput_PrintString(*(char **)dword_B3FD14);
  end = v3->end;
  capacity = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = TESOutput_PrintLabeledFloat("m_fDimmer", *(this + 0x37));
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = sub_709370(this + 0x38, "m_kAmb");
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  v14 = sub_709370(this + 0x3B, "m_kDiff");
  v15 = v3->end;
  v16 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v17 = sub_709370(this + 0x3E, "m_kSpec");
  v18 = v3->end;
  v19 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize);
  return NiTArray_SetAt(v3, v18, &a3);
}
