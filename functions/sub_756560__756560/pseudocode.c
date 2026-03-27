unsigned int __thiscall sub_756560(float *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  int v7; // eax
  const char *v8; // eax
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // ecx
  unsigned __int16 *v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // ecx
  unsigned __int16 *v18; // eax
  unsigned int v19; // ebx
  unsigned int v20; // ecx
  unsigned __int16 *v21; // eax
  unsigned int v22; // edi
  unsigned int v23; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_75F110(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B4104C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = *((_DWORD *)this + 0xB);
  if ( v7 )
    v8 = *(const char **)(v7 + 8);
  else
    v8 = "None";
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Collider Object", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Width", *(this + 0xC));
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Height", *(this + 0xD));
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v18 = (unsigned __int16 *)sub_707280(this + 0xE, "X-Axis");
  v19 = v2->end;
  v20 = v2->capacity;
  a2 = v18;
  if ( v19 >= v20 )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v21 = (unsigned __int16 *)sub_707280(this + 0x11, "Y-Axis");
  v22 = v2->end;
  v23 = v2->capacity;
  a2 = v21;
  if ( v22 >= v23 )
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize);
  return NiTArray_SetAt(v2, v22, &a2);
}
