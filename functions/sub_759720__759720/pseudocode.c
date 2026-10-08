unsigned int __thiscall sub_759720(void *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx
  unsigned __int16 *v10; // eax
  unsigned int v11; // edi
  unsigned int v12; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x759722*/
  sub_75EAA0(this, a2); /*0x75972a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B4182C.name); /*0x759735*/
  end = v2->end; /*0x75973a*/
  capacity = v2->capacity; /*0x75973e*/
  a2 = v4; /*0x759747*/
  if ( end >= capacity ) /*0x75974b*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x759756*/
  NiTArray_SetAt(v2, end, &a2); /*0x759763*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledBool("Use Direction", *((_BYTE *)this + 0x30)); /*0x759772*/
  v8 = v2->end; /*0x759777*/
  v9 = v2->capacity; /*0x75977b*/
  a2 = v7; /*0x759784*/
  if ( v8 >= v9 ) /*0x759788*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x759793*/
  NiTArray_SetAt(v2, v8, &a2); /*0x7597a0*/
  v10 = (unsigned __int16 *)sub_707280((float *)this + 0xD, "Direction"); /*0x7597ad*/
  v11 = v2->end; /*0x7597b2*/
  v12 = v2->capacity; /*0x7597b6*/
  a2 = v10; /*0x7597bc*/
  if ( v11 >= v12 ) /*0x7597c0*/
    NiTArray_SetSize((unsigned __int16 *)v2, v11 + v2->growSize); /*0x7597cb*/
  return NiTArray_SetAt(v2, v11, &a2); /*0x7597dd*/
}
