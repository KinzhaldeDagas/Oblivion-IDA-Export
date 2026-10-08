unsigned int __thiscall sub_6E37C0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e37c2*/
  sub_7009A0(this, a2); /*0x6e37ca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E238.name); /*0x6e37d5*/
  end = v2->end; /*0x6e37da*/
  capacity = v2->capacity; /*0x6e37de*/
  a2 = v4; /*0x6e37e7*/
  if ( end >= capacity ) /*0x6e37eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e37f6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e3803*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumKeys", *(this + 2)); /*0x6e3811*/
  v8 = v2->end; /*0x6e3816*/
  v9 = v2->capacity; /*0x6e381a*/
  a2 = v7; /*0x6e3823*/
  if ( v8 >= v9 ) /*0x6e3827*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e3832*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6e3844*/
}
