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

  v3 = a3;
  sub_725740(this, a2, a3);
  v5 = TESOutput_PrintString(*(char **)dword_B40190);
  end = v3->end;
  capacity = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = sub_707280(this + 0x45, "m_kWorldDir");
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = TESOutput_PrintLabeledFloat("m_fSpotAngle", *(this + 0x48));
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  v14 = TESOutput_PrintLabeledFloat("m_fSpotExponent", *(this + 0x49));
  v15 = v3->end;
  v16 = v3->capacity;
  a3 = (NiTArray_NiTexturingPropertyMap *)v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  return NiTArray_SetAt(v3, v15, &a3);
}
