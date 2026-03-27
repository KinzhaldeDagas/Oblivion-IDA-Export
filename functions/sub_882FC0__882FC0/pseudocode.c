unsigned int __thiscall sub_882FC0(float *this, NiTArray_NiTexturingPropertyMap *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  char *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  char *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char *v10; // eax
  unsigned int v11; // ebx
  char *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // edx
  char *v15; // eax
  unsigned int v16; // edi
  unsigned int v17; // ecx

  v2 = a2;
  sub_7D9890(this, a2);
  v4 = TESOutput_PrintString(*(char **)dword_B478A0);
  end = v2->end;
  capacity = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = TESOutput_PrintLabeledPointer("height map", *((_DWORD *)this + 0x5A));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  LOBYTE(a2) = (*(_DWORD *)(this + 7) & 0x400) != 0;
  v10 = TESOutput_PrintLabeledBool("primary light is point", (char)a2);
  v11 = v2->end;
  a2 = (NiTArray_NiTexturingPropertyMap *)v10;
  if ( v11 >= v2->capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  LOBYTE(a2) = (*(_DWORD *)(this + 7) & 0x800) != 0;
  v12 = TESOutput_PrintLabeledBool("second light", (char)a2);
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  LOBYTE(a2) = (*(_DWORD *)(this + 7) & 0x1000) != 0;
  v15 = TESOutput_PrintLabeledBool("third light", (char)a2);
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = (NiTArray_NiTexturingPropertyMap *)v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  return NiTArray_SetAt(v2, v16, &a2);
}
