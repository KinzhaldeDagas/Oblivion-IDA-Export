unsigned int __userpurge sub_719500@<eax>(_DWORD *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned __int16 *v22; // eax
  unsigned int v23; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700B10(this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B3FCF0);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("m_bEnable", (char)a3);
  v9 = v3->end;
  a3 = v8;
  if ( v9 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiRef", *(this + 7));
  v11 = v3->end;
  a3 = v10;
  if ( v11 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize);
  NiTArray_SetAt(v3, v11, &a3);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiMask", *(this + 8));
  v13 = v3->end;
  a3 = v12;
  if ( v13 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize);
  NiTArray_SetAt(v3, v13, &a3);
  v14 = (unsigned __int16 *)sub_718C30("m_eTest", *((unsigned __int16 *)this + 0xC) >> 0xC);
  v15 = v3->end;
  a3 = v14;
  if ( v15 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  NiTArray_SetAt(v3, v15, &a3);
  v16 = (unsigned __int16 *)sub_718D40("m_eFailAct", (*((unsigned __int8 *)this + 0x18) >> 1) & 7);
  v17 = v3->end;
  a3 = v16;
  if ( v17 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v17 + v3->growSize);
  NiTArray_SetAt(v3, v17, &a3);
  v18 = (unsigned __int16 *)sub_718D40("m_eZFailAct", (*((unsigned __int8 *)this + 0x18) >> 4) & 7);
  v19 = v3->end;
  a3 = v18;
  if ( v19 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v19 + v3->growSize);
  NiTArray_SetAt(v3, v19, &a3);
  v20 = (unsigned __int16 *)sub_718D40("m_ePassAct", (*((unsigned __int16 *)this + 0xC) >> 7) & 7);
  v21 = v3->end;
  a3 = v20;
  if ( v21 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v21 + v3->growSize);
  NiTArray_SetAt(v3, v21, &a3);
  v22 = (unsigned __int16 *)sub_718E20("m_eDrawMode", (*((unsigned __int16 *)this + 0xC) >> 0xA) & 3);
  v23 = v3->end;
  a3 = v22;
  if ( v23 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v23 + v3->growSize);
  return NiTArray_SetAt(v3, v23, &a3);
}
