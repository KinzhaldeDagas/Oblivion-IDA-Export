unsigned int __userpurge sub_7411F0@<eax>(float *this@<ecx>, int a2@<ebp>, unsigned __int16 *a3)
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
  unsigned int v15; // edi

  v3 = (NiTArray_NiTexturingPropertyMap *)a3;
  sub_700B10((int *)this, a2, a3);
  v5 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B401F4);
  end = v3->end;
  capacity = v3->capacity;
  a3 = v5;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, end + v3->growSize);
  NiTArray_SetAt(v3, end, &a3);
  LOBYTE(a3) = *(_BYTE *)(this + 6) & 1;
  v8 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Enable", (char)a3);
  v9 = v3->end;
  a3 = v8;
  if ( v9 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v9 + v3->growSize);
  NiTArray_SetAt(v3, v9, &a3);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Depth", *(this + 7));
  v11 = v3->end;
  a3 = v10;
  if ( v11 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v11 + v3->growSize);
  NiTArray_SetAt(v3, v11, &a3);
  v12 = (unsigned __int16 *)sub_740D30("Function", (*((unsigned __int8 *)this + 0x18) >> 1) & 3);
  v13 = v3->end;
  a3 = v12;
  if ( v13 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v13 + v3->growSize);
  NiTArray_SetAt(v3, v13, &a3);
  v14 = (unsigned __int16 *)sub_709370(this + 8, "Color");
  v15 = v3->end;
  a3 = v14;
  if ( v15 >= v3->capacity )
    NiTArray_SetSize((unsigned __int16 *)v3, v15 + v3->growSize);
  return NiTArray_SetAt(v3, v15, &a3);
}
