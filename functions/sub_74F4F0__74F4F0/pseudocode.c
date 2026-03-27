unsigned int __thiscall sub_74F4F0(float *this, unsigned __int16 *a2)
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
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned __int16 *v16; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  unsigned __int16 *v19; // eax
  unsigned int v20; // ebx
  unsigned int v21; // ecx
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned int v24; // ecx
  unsigned __int16 *v25; // eax
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  unsigned __int16 *v28; // eax
  unsigned int v29; // ebx
  unsigned int v30; // ecx
  unsigned __int16 *v31; // eax
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  unsigned __int16 *v34; // eax
  unsigned int v35; // ebx
  unsigned int v36; // ecx
  unsigned __int16 *v37; // eax
  unsigned int v38; // edi
  unsigned int v39; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40B50);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Speed", *(this + 6));
  v8 = v2->end;
  v9 = v2->capacity;
  a2 = v7;
  if ( v8 >= v9 )
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize);
  NiTArray_SetAt(v2, v8, &a2);
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Speed Variation", *(this + 7));
  v11 = v2->end;
  v12 = v2->capacity;
  a2 = v10;
  if ( v11 >= v12 )
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize);
  NiTArray_SetAt(v2, v11, &a2);
  v13 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Declination", *(this + 8));
  v14 = v2->end;
  v15 = v2->capacity;
  a2 = v13;
  if ( v14 >= v15 )
    NiTArray_SetSize((unsigned __int16 *)v2, v14 + v2->growSize);
  NiTArray_SetAt(v2, v14, &a2);
  v16 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Declination Variation", *(this + 9));
  v17 = v2->end;
  v18 = v2->capacity;
  a2 = v16;
  if ( v17 >= v18 )
    NiTArray_SetSize((unsigned __int16 *)v2, v17 + v2->growSize);
  NiTArray_SetAt(v2, v17, &a2);
  v19 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Planar Angle", *(this + 0xA));
  v20 = v2->end;
  v21 = v2->capacity;
  a2 = v19;
  if ( v20 >= v21 )
    NiTArray_SetSize((unsigned __int16 *)v2, v20 + v2->growSize);
  NiTArray_SetAt(v2, v20, &a2);
  v22 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Planar Angle Variation", *(this + 0xB));
  v23 = v2->end;
  v24 = v2->capacity;
  a2 = v22;
  if ( v23 >= v24 )
    NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize);
  NiTArray_SetAt(v2, v23, &a2);
  v25 = (unsigned __int16 *)sub_7093D0(this + 0xC, "Initial Color");
  v26 = v2->end;
  v27 = v2->capacity;
  a2 = v25;
  if ( v26 >= v27 )
    NiTArray_SetSize((unsigned __int16 *)v2, v26 + v2->growSize);
  NiTArray_SetAt(v2, v26, &a2);
  v28 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Initial Radius", *(this + 0x10));
  v29 = v2->end;
  v30 = v2->capacity;
  a2 = v28;
  if ( v29 >= v30 )
    NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize);
  NiTArray_SetAt(v2, v29, &a2);
  v31 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Radius Variation", *(this + 0x11));
  v32 = v2->end;
  v33 = v2->capacity;
  a2 = v31;
  if ( v32 >= v33 )
    NiTArray_SetSize((unsigned __int16 *)v2, v32 + v2->growSize);
  NiTArray_SetAt(v2, v32, &a2);
  v34 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span", *(this + 0x12));
  v35 = v2->end;
  v36 = v2->capacity;
  a2 = v34;
  if ( v35 >= v36 )
    NiTArray_SetSize((unsigned __int16 *)v2, v35 + v2->growSize);
  NiTArray_SetAt(v2, v35, &a2);
  v37 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Life Span Variation", *(this + 0x13));
  v38 = v2->end;
  v39 = v2->capacity;
  a2 = v37;
  if ( v38 >= v39 )
    NiTArray_SetSize((unsigned __int16 *)v2, v38 + v2->growSize);
  return NiTArray_SetAt(v2, v38, &a2);
}
