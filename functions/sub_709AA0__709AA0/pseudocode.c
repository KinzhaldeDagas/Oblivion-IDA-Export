unsigned int __userpurge sub_709AA0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700B10((int *)this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3FA9C);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  v8 = (unsigned __int16 *)sub_709370(this + 7, "m_amb");
  v9 = v3->end;
  v10 = v3->capacity;
  a3 = v8;
  if ( v9 >= v10 )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v11 = (unsigned __int16 *)sub_709370(this + 0xA, "m_diff");
  v12 = v3->end;
  v13 = v3->capacity;
  a3 = v11;
  if ( v12 >= v13 )
    NiTArray_SetSize((unsigned __int16 *)v3, v12 + v3->growSize);
  NiTArray_SetAt(v3, v12, &a3);
  v14 = (unsigned __int16 *)sub_709370(this + 0xD, "m_spec");
  v15 = v3->end;
  v16 = v3->capacity;
  a3 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v17 = (unsigned __int16 *)sub_709370(this + 0x10, "m_emit");
  v18 = v3->end;
  v19 = v3->capacity;
  a3 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize);
  NiTArray_SetAt(v3, v18, &a3);
  v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fShine", *(this + 0x13));
  v21 = v3->end;
  v22 = v3->capacity;
  a3 = v20;
  if ( v21 >= v22 )
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize);
  NiTArray_SetAt(v3, v21, &a3);
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fAlpha", *(this + 0x14));
  v24 = v3->end;
  v25 = v3->capacity;
  a3 = v23;
  if ( v24 >= v25 )
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize);
  return NiTArray_SetAt(v3, v24, &a3);
}
