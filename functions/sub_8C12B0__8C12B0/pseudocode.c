unsigned int __thiscall sub_8C12B0(int *this, unsigned __int16 *a2)
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
  unsigned __int16 *v22; // eax
  unsigned int v23; // ebx
  unsigned __int16 *v24; // eax
  unsigned int v25; // ebx
  unsigned __int16 *v26; // eax
  unsigned int v27; // ebx
  unsigned __int16 *v28; // eax
  unsigned int v29; // ebx
  unsigned __int16 *v30; // eax
  unsigned int v31; // ebx
  unsigned __int16 *v32; // eax
  unsigned int v33; // edi
  float v34[3]; // [esp+10h] [ebp-Ch] BYREF

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8c12b4*/
  result = sub_8A0D20(this, a2); /*0x8c12bc*/
  v5 = (__m128 *)*(this + 1); /*0x8c12c1*/
  if ( v5 ) /*0x8c12c6*/
  {
    sub_4D68A0(v34, v5 + 1); /*0x8c12d6*/
    v6 = (unsigned __int16 *)sub_707280(v34, "PivotInA"); /*0x8c12e7*/
    end = v2->end; /*0x8c12ec*/
    capacity = v2->capacity; /*0x8c12f0*/
    a2 = v6; /*0x8c12f6*/
    if ( end >= capacity ) /*0x8c12fa*/
      NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c1305*/
    NiTArray_SetAt(v2, end, &a2); /*0x8c1312*/
    sub_4D68A0(v34, v5 + 2); /*0x8c1320*/
    v9 = (unsigned __int16 *)sub_707280(v34, "planeAxisA"); /*0x8c1331*/
    v10 = v2->end; /*0x8c1336*/
    v11 = v2->capacity; /*0x8c133a*/
    a2 = v9; /*0x8c1340*/
    if ( v10 >= v11 ) /*0x8c1344*/
      NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8c134f*/
    NiTArray_SetAt(v2, v10, &a2); /*0x8c135c*/
    sub_4D68A0(v34, v5 + 3); /*0x8c136a*/
    v12 = (unsigned __int16 *)sub_707280(v34, "twistAxisA"); /*0x8c137b*/
    v13 = v2->end; /*0x8c1380*/
    a2 = v12; /*0x8c1384*/
    if ( v13 >= v2->capacity ) /*0x8c138e*/
      NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x8c1399*/
    NiTArray_SetAt(v2, v13, &a2); /*0x8c13a6*/
    sub_4D68A0(v34, v5 + 4); /*0x8c13b4*/
    v14 = (unsigned __int16 *)sub_707280(v34, "PivotInB"); /*0x8c13c5*/
    v15 = v2->end; /*0x8c13ca*/
    v16 = v2->capacity; /*0x8c13ce*/
    a2 = v14; /*0x8c13d4*/
    if ( v15 >= v16 ) /*0x8c13d8*/
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x8c13e3*/
    NiTArray_SetAt(v2, v15, &a2); /*0x8c13f0*/
    sub_4D68A0(v34, v5 + 5); /*0x8c13fe*/
    v17 = (unsigned __int16 *)sub_707280(v34, "planeAxisB"); /*0x8c140f*/
    v18 = v2->end; /*0x8c1414*/
    v19 = v2->capacity; /*0x8c1418*/
    a2 = v17; /*0x8c141e*/
    if ( v18 >= v19 ) /*0x8c1422*/
      NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x8c142d*/
    NiTArray_SetAt(v2, v18, &a2); /*0x8c143a*/
    sub_4D68A0(v34, v5 + 6); /*0x8c1448*/
    v20 = (unsigned __int16 *)sub_707280(v34, "twistAxisB"); /*0x8c1459*/
    v21 = v2->end; /*0x8c145e*/
    a2 = v20; /*0x8c1462*/
    if ( v21 >= v2->capacity ) /*0x8c146c*/
      NiTArray_SetSize((unsigned __int16 *)v2, v21 + v2->growSize); /*0x8c1477*/
    NiTArray_SetAt(v2, v21, &a2); /*0x8c1484*/
    v22 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("ConeMinAngle", v5[7].m128_f32[0]); /*0x8c1495*/
    v23 = v2->end; /*0x8c149a*/
    a2 = v22; /*0x8c149e*/
    if ( v23 >= v2->capacity ) /*0x8c14ab*/
      NiTArray_SetSize((unsigned __int16 *)v2, v23 + v2->growSize); /*0x8c14b6*/
    NiTArray_SetAt(v2, v23, &a2); /*0x8c14c3*/
    v24 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("PlaneMinAngle", v5[7].m128_f32[1]); /*0x8c14d4*/
    v25 = v2->end; /*0x8c14d9*/
    a2 = v24; /*0x8c14dd*/
    if ( v25 >= v2->capacity ) /*0x8c14ea*/
      NiTArray_SetSize((unsigned __int16 *)v2, v25 + v2->growSize); /*0x8c14f5*/
    NiTArray_SetAt(v2, v25, &a2); /*0x8c1502*/
    v26 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("PlaneMaxAngle", v5[7].m128_f32[2]); /*0x8c1513*/
    v27 = v2->end; /*0x8c1518*/
    a2 = v26; /*0x8c151c*/
    if ( v27 >= v2->capacity ) /*0x8c1529*/
      NiTArray_SetSize((unsigned __int16 *)v2, v27 + v2->growSize); /*0x8c1534*/
    NiTArray_SetAt(v2, v27, &a2); /*0x8c1541*/
    v28 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("TwistMinAngle", v5[7].m128_f32[3]); /*0x8c1552*/
    v29 = v2->end; /*0x8c1557*/
    a2 = v28; /*0x8c155b*/
    if ( v29 >= v2->capacity ) /*0x8c1568*/
      NiTArray_SetSize((unsigned __int16 *)v2, v29 + v2->growSize); /*0x8c1573*/
    NiTArray_SetAt(v2, v29, &a2); /*0x8c1580*/
    v30 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("TwistMaxAngle", v5[8].m128_f32[0]); /*0x8c1594*/
    v31 = v2->end; /*0x8c1599*/
    a2 = v30; /*0x8c159d*/
    if ( v31 >= v2->capacity ) /*0x8c15aa*/
      NiTArray_SetSize((unsigned __int16 *)v2, v31 + v2->growSize); /*0x8c15b5*/
    NiTArray_SetAt(v2, v31, &a2); /*0x8c15c2*/
    v32 = (unsigned __int16 *)TESOutput_PrintLabeledFloat("MaxFrictionTrq", v5[8].m128_f32[1]); /*0x8c15d6*/
    v33 = v2->end; /*0x8c15db*/
    a2 = v32; /*0x8c15df*/
    if ( v33 >= v2->capacity ) /*0x8c15ed*/
      NiTArray_SetSize((unsigned __int16 *)v2, v33 + v2->growSize); /*0x8c15f8*/
    return NiTArray_SetAt(v2, v33, &a2); /*0x8c1605*/
  }
  return result; /*0x8c160a*/
}
