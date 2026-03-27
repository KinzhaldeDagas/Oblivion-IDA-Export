unsigned int __thiscall sub_8B3250(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned int result; // eax
  __m128 *v5; // edi
  unsigned __int16 *v6; // eax
  unsigned int end; // ebx
  unsigned int capacity; // edx
  unsigned __int16 *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned int v13; // ebx
  unsigned __int16 *v14; // eax
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned __int16 *v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  unsigned __int16 *v20; // eax
  unsigned int v21; // ebx
  unsigned int v22; // ecx
  unsigned __int16 *v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  unsigned __int16 *v26; // eax
  unsigned int v27; // edi
  unsigned int v28; // ecx
  float v29[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  result = sub_8A0D20(this, a2);
  v5 = (__m128 *)*(this + 1);
  if ( v5 )
  {
    sub_4D68A0(v29, v5 + 2);
    v6 = (unsigned __int16 *)sub_707280(v29, "PivotInA");
    end = v2->end;
    capacity = v2->capacity;
    a2 = v6;
    if ( end >= capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
    NiTArray_SetAt(v2, end, &a2);
    sub_4D68A0(v29, v5 + 6);
    v9 = (unsigned __int16 *)sub_707280(v29, "PivotInB");
    v10 = v2->end;
    v11 = v2->capacity;
    a2 = v9;
    if ( v10 >= v11 )
      NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
    NiTArray_SetAt(v2, v10, &a2);
    sub_4D68A0(v29, v5 + 7);
    v12 = (unsigned __int16 *)sub_707280(v29, "AxleInB");
    v13 = v2->end;
    a2 = v12;
    if ( v13 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
    NiTArray_SetAt(v2, v13, &a2);
    sub_4D68A0(v29, v5 + 4);
    v14 = (unsigned __int16 *)sub_707280(v29, "Perp2AxleInA1");
    v15 = v2->end;
    v16 = v2->capacity;
    a2 = v14;
    if ( v15 >= v16 )
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
    NiTArray_SetAt(v2, v15, &a2);
    sub_4D68A0(v29, v5 + 5);
    v17 = (unsigned __int16 *)sub_707280(v29, "Perp2AxleInA2");
    v18 = v2->end;
    v19 = v2->capacity;
    a2 = v17;
    if ( v18 >= v19 )
      NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
    NiTArray_SetAt(v2, v18, &a2);
    v20 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("MinAngle", v5->m128_f32[3]);
    v21 = v2->end;
    v22 = v2->capacity;
    a2 = v20;
    if ( v21 >= v22 )
      NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize);
    NiTArray_SetAt(v2, v21, &a2);
    v23 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("MaxAngle", v5[1].m128_f32[0]);
    v24 = v2->end;
    v25 = v2->capacity;
    a2 = v23;
    if ( v24 >= v25 )
      NiTArray_SetSize((unsigned __int16 *)v2, v24 + v2->growSize);
    NiTArray_SetAt(v2, v24, &a2);
    v26 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("MaxFrictionTrq", v5[1].m128_f32[1]);
    v27 = v2->end;
    v28 = v2->capacity;
    a2 = v26;
    if ( v27 >= v28 )
      NiTArray_SetSize((unsigned __int16 *)v2, v27 + v2->growSize);
    return NiTArray_SetAt(v2, v27, &a2);
  }
  return result;
}
