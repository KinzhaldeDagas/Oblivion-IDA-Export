unsigned int __thiscall sub_751AD0(float *this, unsigned __int16 *a2)
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
  unsigned int v22; // ebx
  unsigned int v23; // ecx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  int v27; // edi
  const char *v28; // eax
  unsigned __int16 *v29; // eax
  unsigned int v30; // edi
  unsigned int v31; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B40C3C);
  end = v2->end;
  capacity = v2->capacity;
  a2 = v4;
  if ( end >= capacity )
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
  NiTArray_SetAt(v2, end, &a2);
  v7 = *((_DWORD *)this + 6);
  if ( v7 )
    v8 = *(const char **)(v7 + 8);
  else
    v8 = "None";
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Gravity Object", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v12 = (unsigned __int16 *)sub_707280(this + 7, "Gravity Axis");
  v13 = v2->end;
  v14 = v2->capacity;
  a2 = v12;
  if ( v13 >= v14 )
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
  NiTArray_SetAt(v2, v13, &a2);
  v15 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Decay", *(this + 0xA));
  v16 = v2->end;
  v17 = v2->capacity;
  a2 = v15;
  if ( v16 >= v17 )
    NiTArray_SetSize((unsigned __int16 *)v2, v16 + v2->growSize);
  NiTArray_SetAt(v2, v16, &a2);
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Strength", *(this + 0xB));
  v19 = v2->end;
  v20 = v2->capacity;
  a2 = v18;
  if ( v19 >= v20 )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v21 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("Turbulence", *(this + 0xD));
  v22 = v2->end;
  v23 = v2->capacity;
  a2 = v21;
  if ( v22 >= v23 )
    NiTArray_SetSize((unsigned __int16 *)v2, v22 + v2->growSize);
  NiTArray_SetAt(v2, v22, &a2);
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("TurbulenceScale", *(this + 0xE));
  v25 = v2->end;
  v26 = v2->capacity;
  a2 = v24;
  if ( v25 >= v26 )
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
  NiTArray_SetAt(v2, v25, &a2);
  v27 = *((_DWORD *)this + 0xC);
  if ( v27 )
  {
    v28 = "FORCE_SPHERICAL";
    if ( v27 != 1 )
      v28 = "Unknown";
  }
  else
  {
    v28 = "FORCE_PLANAR";
  }
  v29 = (unsigned __int16 *)TESOutput_PrintLabeledString("Force Type", v28);
  v30 = v2->end;
  v31 = v2->capacity;
  a2 = v29;
  if ( v30 >= v31 )
    NiTArray_SetSize((unsigned __int16 *)v2, v30 + v2->growSize);
  return NiTArray_SetAt(v2, v30, &a2);
}
