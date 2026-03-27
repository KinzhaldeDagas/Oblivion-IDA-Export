unsigned int __userpurge sub_718810@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
{
  NiTArray_NiTexturingPropertyMap *v3; // esi
  unsigned __int16 *v5; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v8; // eax
  unsigned int v9; // ebx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // edx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700B10(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B3FCE8);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bAlpha", (char)a3);
  v9 = v3->end;
  a3 = v8;
  if ( v9 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v10 = (unsigned __int16 *)sub_7182A0("m_eSrcBlend", (*((unsigned __int8 *)this + 0x18) >> 1) & 0xF);
  v11 = v3->end;
  a3 = v10;
  if ( v11 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize);
  NiTArray_SetAt(v3, v11, &a3);
  v12 = (unsigned __int16 *)sub_7182A0("m_eDestBlend", (*((unsigned __int16 *)this + 0xC) >> 5) & 0xF);
  v13 = v3->end;
  a3 = v12;
  if ( v13 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize);
  NiTArray_SetAt(v3, v13, &a3);
  LOBYTE(a3) = (*(_WORD *)(this + 6) & 0x200) != 0;
  v14 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bAlphaTest", (char)a3);
  v15 = v3->end;
  v16 = v3->capacity;
  a3 = v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v17 = (unsigned __int16 *)sub_718400("m_eTestMode", (*((unsigned __int16 *)this + 0xC) >> 0xA) & 7);
  v18 = v3->end;
  v19 = v3->capacity;
  a3 = v17;
  if ( v18 >= v19 )
    NiTArray_SetSize((unsigned __int16 *)v3, v18 + v3->growSize);
  NiTArray_SetAt(v3, v18, &a3);
  LOBYTE(a3) = *((_BYTE *)this + 0x1A);
  v20 = (unsigned __int16 *)sub_70FA00("m_ucTestRef", (unsigned __int8)a3);
  v21 = v3->end;
  v22 = v3->capacity;
  a3 = v20;
  if ( v21 >= v22 )
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize);
  NiTArray_SetAt(v3, v21, &a3);
  LOBYTE(a3) = (*(_WORD *)(this + 6) & 0x2000) != 0;
  v23 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bNoSorter", (char)a3);
  v24 = v3->end;
  a3 = v23;
  if ( v24 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v24 + v3->growSize);
  return NiTArray_SetAt(v3, v24, &a3);
}
