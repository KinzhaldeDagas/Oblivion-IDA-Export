unsigned int __thiscall sub_8BEC80(_DWORD *this, float a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // eax
  double v8; // st7
  char *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  int v12; // edi
  double v13; // st7
  char *v14; // eax
  unsigned int v15; // edi
  unsigned int v16; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)LODWORD(a2);
  sub_89E210(this, (unsigned __int16 *)LODWORD(a2));
  v4 = TESOutput_PrintString(*(char **)dword_BA8080);
  end = v2->end;
  capacity = v2->capacity;
  a2 = *(float *)&v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  if ( this && (v7 = *(this + 2)) != 0 )
    v8 = *(float *)(v7 + 0x30);
  else
    v8 = 0.0;
  a2 = v8;
  v9 = TESOutput_PrintLabeledFloat("SpinRate", a2);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = *(float *)&v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  if ( this && (v12 = *(this + 2)) != 0 )
    v13 = *(float *)(v12 + 0x34);
  else
    v13 = 0.0;
  a2 = v13;
  v14 = TESOutput_PrintLabeledFloat("Gain", a2);
  v15 = v2->end;
  v16 = v2->capacity;
  a2 = *(float *)&v14;
  if ( v15 >= v16 )
    NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
  return NiTArray_SetAt(v2, v15, &a2);
}
