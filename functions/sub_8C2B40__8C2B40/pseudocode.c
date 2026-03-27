unsigned int __thiscall sub_8C2B40(int *this, unsigned __int16 *a2)
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
  unsigned int v18; // edi
  float v19[3]; // [esp+8h] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2;
  result = sub_8A0D20(this, a2);
  v5 = (__m128 *)*(this + 1);
  if ( v5 )
  {
    sub_4D68A0(v19, v5 + 1);
    v6 = (unsigned __int16 *)sub_707280(v19, "PivotInA");
    end = v2->end;
    capacity = v2->capacity;
    a2 = v6;
    if ( end >= capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize);
    NiTArray_SetAt(v2, end, &a2);
    sub_4D68A0(v19, v5 + 4);
    v9 = (unsigned __int16 *)sub_707280(v19, "PivotInB");
    v10 = v2->end;
    v11 = v2->capacity;
    a2 = v9;
    if ( v10 >= v11 )
      NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize);
    NiTArray_SetAt(v2, v10, &a2);
    sub_4D68A0(v19, v5 + 5);
    v12 = (unsigned __int16 *)sub_707280(v19, "AxleInB");
    v13 = v2->end;
    a2 = v12;
    if ( v13 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize);
    NiTArray_SetAt(v2, v13, &a2);
    sub_4D68A0(v19, v5 + 2);
    v14 = (unsigned __int16 *)sub_707280(v19, "Perp2AxleInA1");
    v15 = v2->end;
    v16 = v2->capacity;
    a2 = v14;
    if ( v15 >= v16 )
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize);
    NiTArray_SetAt(v2, v15, &a2);
    sub_4D68A0(v19, v5 + 3);
    v17 = (unsigned __int16 *)sub_707280(v19, "Perp2AxleInA2");
    v18 = v2->end;
    a2 = v17;
    if ( v18 >= v2->capacity )
      NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize);
    return NiTArray_SetAt(v2, v18, &a2);
  }
  return result;
}
