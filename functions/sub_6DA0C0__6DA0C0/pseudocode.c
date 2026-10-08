unsigned int __thiscall sub_6DA0C0(int *this, unsigned __int16 *a2)
{
  NiTArray_NiTexturingPropertyMap *v2; // esi
  unsigned __int16 *v4; // eax
  unsigned int end; // edi
  unsigned int capacity; // ecx
  unsigned __int16 *v7; // eax
  unsigned int v8; // edi
  unsigned int v9; // edx

  v2 = (NiTArray_NiTexturingPropertyMap *)a2; /*0x6da0c2*/
  sub_7009A0(this, a2); /*0x6da0ca*/
  v4 = (unsigned __int16 *)TESOutput_PrintString((char *)stru_B3DC80.name); /*0x6da0d5*/
  end = v2->end; /*0x6da0da*/
  capacity = v2->capacity; /*0x6da0de*/
  a2 = v4; /*0x6da0e7*/
  if ( end >= capacity ) /*0x6da0eb*/
    NiTArray_SetSize((unsigned __int16 *)v2, end + v2->growSize); /*0x6da0f6*/
  NiTArray_SetAt(v2, end, &a2); /*0x6da103*/
  v7 = (unsigned __int16 *)TESOutput_PrintLabeledUnsignedInt("m_uiNumKeys", *(this + 2)); /*0x6da111*/
  v8 = v2->end; /*0x6da116*/
  v9 = v2->capacity; /*0x6da11a*/
  a2 = v7; /*0x6da123*/
  if ( v8 >= v9 ) /*0x6da127*/
    NiTArray_SetSize((unsigned __int16 *)v2, v8 + v2->growSize); /*0x6da132*/
  return NiTArray_SetAt(v2, v8, &a2); /*0x6da144*/
}
