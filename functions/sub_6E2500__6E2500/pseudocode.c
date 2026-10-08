unsigned int __thiscall sub_6E2500(unsigned __int16 *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // ebx
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // ebx
  unsigned __int16 *v12; // eax
  unsigned int v13; // edi
  unsigned int v14; // ecx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e2502*/
  sub_7009A0(this, a2); /*0x6e250a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString(*(char **)stru_B3E0C4); /*0x6e2515*/
  end = v2->end; /*0x6e251a*/
  capacity = v2->capacity; /*0x6e251e*/
  a2 = v4; /*0x6e2527*/
  if ( end >= capacity ) /*0x6e252b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e2536*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e2543*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usNumRotKeys", *(this + 4)); /*0x6e2552*/
  v8 = v2->end; /*0x6e2557*/
  v9 = v2->capacity; /*0x6e255b*/
  a2 = v7; /*0x6e2564*/
  if ( v8 >= v9 ) /*0x6e2568*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e2573*/
  NiTArray_SetAt(v2, v8, &a2); /*0x6e2580*/
  v10 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usNumPosKeys", *(this + 5)); /*0x6e258f*/
  v11 = v2->end; /*0x6e2594*/
  a2 = v10; /*0x6e2598*/
  if ( v11 >= v2->capacity ) /*0x6e25a5*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x6e25b0*/
  NiTArray_SetAt(v2, v11, &a2); /*0x6e25bd*/
  v12 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedShort("m_usNumScaleKeys", *(this + 6)); /*0x6e25cc*/
  v13 = v2->end; /*0x6e25d1*/
  v14 = v2->capacity; /*0x6e25d5*/
  a2 = v12; /*0x6e25de*/
  if ( v13 >= v14 ) /*0x6e25e2*/
    NiTArray_SetSize((unsigned __int16 *)v2, v13 + v2->growSize); /*0x6e25ed*/
  return NiTArray_SetAt(v2, v13, &a2); /*0x6e25ff*/
}
