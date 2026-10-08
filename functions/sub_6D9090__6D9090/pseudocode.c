unsigned int __thiscall sub_6D9090(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6d9092*/
  sub_7009A0(this, a2); /*0x6d909a*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DB70.name); /*0x6d90a5*/
  end = v2->end; /*0x6d90aa*/
  capacity = v2->capacity; /*0x6d90ae*/
  a2 = v4; /*0x6d90b7*/
  if ( end >= capacity ) /*0x6d90bb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6d90c6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6d90d3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumKeys", *(this + 2)); /*0x6d90e1*/
  v8 = v2->end; /*0x6d90e6*/
  v9 = v2->capacity; /*0x6d90ea*/
  a2 = v7; /*0x6d90f3*/
  if ( v8 >= v9 ) /*0x6d90f7*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6d9102*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6d9114*/
}
