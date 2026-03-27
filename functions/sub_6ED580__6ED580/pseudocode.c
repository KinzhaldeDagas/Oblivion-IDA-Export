unsigned int __thiscall sub_6ED580(float *this, unsigned __int16 *a2)
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
  unsigned int result; // eax
  int v14; // ecx
  int v15; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_6EBAC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(_DWORD *)dword_B3EF9C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fStartTime", *(this + 3));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat((int)"m_fEndTime", *(this + 4));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  result = NiTArray_SetAt(v2, v11, &a2);
  v14 = *((_DWORD *)this + 5);
  if ( v14 )
    result = (*(int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v14 + 0x30))(v14, v2);
  v15 = *((_DWORD *)this + 6);
  if ( v15 )
    return (*(unsigned int (__thiscall **)(int, NiTArray_NiTexturingPropertyMap *))(*(_DWORD *)v15 + 0x30))(v15, v2);
  return result;
}
