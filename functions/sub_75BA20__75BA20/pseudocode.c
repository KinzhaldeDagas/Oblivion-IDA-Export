unsigned int __thiscall sub_75BA20(float *this, unsigned __int16 *a2)
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
  int v21; // eax
  int v22; // eax
  const char *v23; // eax
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  int v27; // edi
  int v28; // edi
  const char *v29; // eax
  unsigned __int16 *v30; // eax
  unsigned int v31; // edi
  unsigned int v32; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  sub_752EC0(this, a2);
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)dword_B41A28);
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
  v9 = (unsigned __int16 *)TESOutput_PrintLabeledString("Bomb Object", v8);
  v10 = v2->end;
  v11 = v2->capacity;
  a2 = v9;
  if ( v10 >= v11 )
    NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
  NiTArray_SetAt(v2, v10, &a2);
  v12 = (unsigned __int16 *)sub_707280(this + 7, "Bomb Axis");
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
  v18 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("DeltaV", *(this + 0xB));
  v19 = v2->end;
  v20 = v2->capacity;
  a2 = v18;
  if ( v19 >= v20 )
    NiTArray_SetSize((unsigned __int16 *)v2, v19 + v2->growSize);
  NiTArray_SetAt(v2, v19, &a2);
  v21 = *((_DWORD *)this + 0xC);
  if ( v21 )
  {
    v22 = v21 - 1;
    if ( v22 )
    {
      if ( v22 == 1 )
        v23 = "EXPONENTIAL";
      else
        v23 = "Unknown";
    }
    else
    {
      v23 = "LINEAR";
    }
  }
  else
  {
    v23 = "NONE";
  }
  v24 = (unsigned __int16 *)TESOutput_PrintLabeledString("Decay Type", v23);
  v25 = v2->end;
  v26 = v2->capacity;
  a2 = v24;
  if ( v25 >= v26 )
    NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize);
  NiTArray_SetAt(v2, v25, &a2);
  v27 = *((_DWORD *)this + 0xD);
  if ( v27 )
  {
    v28 = v27 - 1;
    if ( v28 )
    {
      if ( v28 == 1 )
        v29 = "PLANAR";
      else
        v29 = "Unknown";
    }
    else
    {
      v29 = "CYLINDRICAL";
    }
  }
  else
  {
    v29 = "SPHERICAL";
  }
  v30 = (unsigned __int16 *)TESOutput_PrintLabeledString("Symmetry Type", v29);
  v31 = v2->end;
  v32 = v2->capacity;
  a2 = v30;
  if ( v31 >= v32 )
    NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize);
  return NiTArray_SetAt(v2, v31, &a2);
}
