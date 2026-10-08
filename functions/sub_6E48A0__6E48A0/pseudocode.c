unsigned int __thiscall sub_6E48A0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6e48a2*/
  sub_7009A0(this, a2); /*0x6e48aa*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3E350.name); /*0x6e48b5*/
  end = v2->end; /*0x6e48ba*/
  capacity = v2->capacity; /*0x6e48be*/
  a2 = v4; /*0x6e48c7*/
  if ( end >= capacity ) /*0x6e48cb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6e48d6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6e48e3*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumKeys", *(this + 2)); /*0x6e48f1*/
  v8 = v2->end; /*0x6e48f6*/
  v9 = v2->capacity; /*0x6e48fa*/
  a2 = v7; /*0x6e4903*/
  if ( v8 >= v9 ) /*0x6e4907*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6e4912*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6e4924*/
}
