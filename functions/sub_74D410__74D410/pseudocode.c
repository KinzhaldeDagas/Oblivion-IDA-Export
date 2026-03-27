unsigned int __thiscall sub_74D410(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned int v12; // ecx
  unsigned __int16 *v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_7531E0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B409EC);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Width", *(this + 0x15));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Height", *(this + 0x16));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Depth", *(this + 0x17));
  v14 = v2->end;
  v15 = v2->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  return NiTArray_SetAt(v2, v14, &a2);
}
