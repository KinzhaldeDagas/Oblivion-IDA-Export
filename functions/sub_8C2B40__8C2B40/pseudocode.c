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

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x8c2b44*/
  result = sub_8A0D20(this, a2); /*0x8c2b4c*/
  v5 = (__m128 *)*(this + 1); /*0x8c2b51*/
  if ( v5 ) /*0x8c2b56*/
  {
    sub_4D68A0(v19, v5 + 1); /*0x8c2b66*/
    v6 = (unsigned __int16 *)sub_707280(v19, "PivotInA"); /*0x8c2b77*/
    end = v2->end; /*0x8c2b7c*/
    capacity = v2->capacity; /*0x8c2b80*/
    a2 = v6; /*0x8c2b86*/
    if ( end >= capacity ) /*0x8c2b8a*/
      NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x8c2b95*/
    NiTArray_SetAt(v2, end, &a2); /*0x8c2ba2*/
    sub_4D68A0(v19, v5 + 4); /*0x8c2bb0*/
    v9 = (unsigned __int16 *)sub_707280(v19, "PivotInB"); /*0x8c2bc1*/
    v10 = v2->end; /*0x8c2bc6*/
    v11 = v2->capacity; /*0x8c2bca*/
    a2 = v9; /*0x8c2bd0*/
    if ( v10 >= v11 ) /*0x8c2bd4*/
      NiTArray_SetSize((unsigned __int16 *)v2, v10 + v2->growSize); /*0x8c2bdf*/
    NiTArray_SetAt(v2, v10, &a2); /*0x8c2bec*/
    sub_4D68A0(v19, v5 + 5); /*0x8c2bfa*/
    v12 = (unsigned __int16 *)sub_707280(v19, "AxleInB"); /*0x8c2c0b*/
    v13 = v2->end; /*0x8c2c10*/
    a2 = v12; /*0x8c2c14*/
    if ( v13 >= v2->capacity ) /*0x8c2c1e*/
      NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x8c2c29*/
    NiTArray_SetAt(v2, v13, &a2); /*0x8c2c36*/
    sub_4D68A0(v19, v5 + 2); /*0x8c2c44*/
    v14 = (unsigned __int16 *)sub_707280(v19, "Perp2AxleInA1"); /*0x8c2c55*/
    v15 = v2->end; /*0x8c2c5a*/
    v16 = v2->capacity; /*0x8c2c5e*/
    a2 = v14; /*0x8c2c64*/
    if ( v15 >= v16 ) /*0x8c2c68*/
      NiTArray_SetSize((unsigned __int16 *)v2, v15 + v2->growSize); /*0x8c2c73*/
    NiTArray_SetAt(v2, v15, &a2); /*0x8c2c80*/
    sub_4D68A0(v19, v5 + 3); /*0x8c2c8e*/
    v17 = (unsigned __int16 *)sub_707280(v19, "Perp2AxleInA2"); /*0x8c2c9f*/
    v18 = v2->end; /*0x8c2ca4*/
    a2 = v17; /*0x8c2ca8*/
    if ( v18 >= v2->capacity ) /*0x8c2cb3*/
      NiTArray_SetSize((unsigned __int16 *)v2, v18 + v2->growSize); /*0x8c2cbe*/
    return NiTArray_SetAt(v2, v18, &a2); /*0x8c2ccb*/
  }
  return result; /*0x8c2cd0*/
}
